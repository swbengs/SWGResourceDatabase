//class header
#include "CLI_V1.hpp"

//std library
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <sstream>
#include <regex>
#include <stack>

//other library files
#include "Sqlite/sqlite3.h"

/*
MIT License

Copyright (c) 2019 Scott Bengs

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

//class code
CLI_V1::CLI_V1()
{
    state = CLI_state::NONE;
    resource_database = nullptr;
    database_name = "";
    lua_dump_file = "";
    current_node = nullptr;
    limit = 25;
    current_weight_index = 0;
}

CLI_V1::~CLI_V1()
{
    if (resource_database != nullptr)
    {
        delete resource_database;
    }
}

int CLI_V1::startCLI(int argc, char** argv)
{
    if (argc < 3)
    {
        //not enough arguments so just start a normal loop
        return inputLoop();
    }
    else if (argc == 3)
    {
        //either args for loading or error
        std::string command = argv[1];
        database_name = argv[2];

        if (command.compare("-load") == 0)
        {
            state = CLI_state::ARG_LOAD;
        }
        else
        {
            std::cerr << "Unknown command line argument given. Usage is -load databasename\n";
            return EXIT_FAILURE;
        }

        return inputLoop();
    }
    else if (argc == 4)
    {
        //either args for creating database or error
        std::string command = argv[1];
        database_name = argv[2];
        lua_dump_file = argv[3];

        if (command.compare("-create") == 0)
        {
            state = CLI_state::ARG_CREATE;
        }
        else
        {
            std::cerr << "Unknown command line argument given. Usage is -create databasename luadumpfile\n";
            return EXIT_FAILURE;
        }

        return inputLoop();
    }
    else if (argc > 4)
    {
        //no idea what they gave us
        std::cerr << "More than 4 arguments given. Usage is -create databasename luadumpfile or -load databasename\n";
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS; //how did we get here?
}

bool CLI_V1::createDatabase()
{
    resource_database = new SqliteCore_V1(database_name);
    resource_database->dropTables();
    resource_database->createTables();

    std::cout << "Creating database named: " << database_name << "\n";

    LuaCore lua;
    if (!lua.start(lua_dump_file))
    {
        std::cout << "Error with Lua dump file\n";
        return false;
    }

    resource_database->transactionStart();
    bool next = true;
    do
    {
        resource_pod pod;
        std::vector<std::string> classes;

        next = lua.getNextResource(pod, classes);
        if (next)
        {
            Resource resource(pod, classes);
            resource_database->addResource(resource);
        }
    } while (next);

    resource_database->transactionStop();
    lua.stop();

    std::cout << "Creation of database named: " << database_name << " complete.\n";

    return true;
}

bool CLI_V1::loadDatabase()
{
    if (resource_database == nullptr)
    {
        resource_database = new SqliteCore_V1(database_name);
    }
    std::cout << "load database with name: " << database_name << "\n";
    printf("resource count: %i\n", resource_database->getResourceCount());
    //resource_database->showAllClasses(limit);
    //resource_database->showAllResources(limit);

    return true;
}

// private
void CLI_V1::loadSettings()
{
    bool wasSuccess = settings_lua.runSettingsScript();
    if (wasSuccess)
    {
        //only do stuff if it ran successfully
        int limit_temp = settings_lua.getIntGlobalValue("limit");
        if (limit_temp > 0)
        {
            //use the one in Lua if it was not 0
            limit = limit_temp;
        }

        int spacing_temp = settings_lua.getIntGlobalValue("id_spacing");
        if (spacing_temp > 0)
        {
            SqliteCore_V1::id_spacing = spacing_temp;
        }

        spacing_temp = settings_lua.getIntGlobalValue("name_spacing");
        if (spacing_temp > 0)
        {
            SqliteCore_V1::name_spacing = spacing_temp;
        }

        spacing_temp = settings_lua.getIntGlobalValue("type_spacing");
        if (spacing_temp > 0)
        {
            SqliteCore_V1::type_spacing = spacing_temp;
        }

        spacing_temp = settings_lua.getIntGlobalValue("attribute_spacing");
        if (spacing_temp > 0)
        {
            SqliteCore_V1::attribute_spacing = spacing_temp;
        }
    }
}

void CLI_V1::loadSchematics()
{
    bool wasSuccess = settings_lua.runSchematicsScript();
    if (wasSuccess)
    {
        if (settings_lua.startSchematics())
        {
            //good to go. start grabbing schematics

            bool next = true;
            while (next)
            {
                Schematic temp;
                next = settings_lua.getNextSchematic(temp);
                if (next)
                {
                    schematics.push_back(temp);
                }
            }
        }

        settings_lua.stopSchematics();
    }
}

void CLI_V1::loadWeights()
{
    bool wasSuccess = settings_lua.runWeightsScript();
    if (wasSuccess)
    {
        if (settings_lua.startWeights())
        {
            //good to go. start grabbing weights

            bool next = true;
            while (next)
            {
                std::string name;
                std::vector<weighted_average_pod> pod;
                next = settings_lua.getNextWeight(pod, name);
                if (next)
                {
                    //current weight is good so add to the real vector
                    Weight weight(name, pod);
                    weights.push_back(weight);
                }
            }
        }

        settings_lua.stopWeights();
    }
}

int CLI_V1::getIntegerInput(std::string options, int min, int max)
{
    int result = 0;
    std::string input = "";
    const std::regex number_regex("-*[0-9]+");
    bool good_input = false;

    while (!good_input)
    {
        std::cout << options << "Enter a whole number\n";
        std::cin >> input;
        good_input = regex_match(input, number_regex);

        if (good_input)
        {
            result = stoi(input);
            if (result < min || result > max) //must be within the given range
            {
                good_input = false;
            }
        }
    }

    return result;
}

int CLI_V1::inputLoop()
{
    bool isDone = false;
    int input = 0;

    while (!isDone)
    {
        switch (state)
        {
        case CLI_state::NONE:
            input = getIntegerInput("Choices:\n0: Exit\n1: Create database\n2: Load database file\n", 0, 2);
            switch (input)
            {
            case 0:
                isDone = true;
                break;
            case 1:
                state = CLI_state::CLI_CREATE;
                break;
            case 2:
                state = CLI_state::CLI_LOAD;
                break;
            }
            break;
        case CLI_state::CLI_CREATE:
            std::cout << "Enter in the database filename you want to make\n";
            std::cin >> database_name;
            std::cout << "Enter in the lua resource dump file name\n";
            std::cin >> lua_dump_file;

            if (!createDatabase())
            {
                std::cerr << "Error creating database\n";
                return EXIT_FAILURE;
            }

            state = CLI_state::CLI_LOAD;
            break;
        case CLI_state::CLI_LOAD:
            if (database_name.compare("") == 0) // if no name there ask for one. used if not coming from a create
            {
                std::cout << "Enter in the database filename you want to load\n";
                std::cin >> database_name;
            }

            if (!loadDatabase())
            {
                std::cerr << "Error loading database\n";
                return EXIT_FAILURE;
            }

            state = CLI_state::READY;
            break;
        case CLI_state::ARG_CREATE:
            if (!createDatabase())
            {
                std::cerr << "Error creating database\n";
                return EXIT_FAILURE;
            }
            state = CLI_state::ARG_LOAD;
            break;
        case CLI_state::ARG_LOAD:
            if (!loadDatabase())
            {
                std::cerr << "Error loading database\n";
                return EXIT_FAILURE;
            }
            state = CLI_state::READY;
            break;
        case CLI_state::READY:
            //only get here once so do misc stuff here before main menu appears
            loadSettings();
            loadSchematics();
            loadWeights();

            mainMenuLoop();
            isDone = true;
            break;
        }
    }

    return EXIT_SUCCESS;
}

void CLI_V1::mainMenuLoop()
{
    int input = 0;
    bool isDone = false;

    while (!isDone)
    {
        input = getIntegerInput("Choices:\n0: Exit\n1: View resources\n2: View schematics\n3: View weights\n4: Pick weight to use\n5: Find best resources for schematic(with current weight)\n", 0, 5);
        switch (input)
        {
        case 0:
            isDone = true;
            break;
        case 1:
            isDone = viewResourcesLoop();
            break;
        case 2:
            isDone = viewSchematicsLoop(true);
            break;
        case 3:
            isDone = viewWeightsLoop(true);
            break;
        case 4:
            isDone = viewWeightsLoop(false);
            break;
        case 5:
            isDone = viewSchematicsLoop(false);
            break;
        }
    }
}

bool CLI_V1::viewResourcesLoop()
{
    //return false to continue the main loop and true if we should quit completely
    int input = 0;
    bool isDone = false;
    const std::string preset_options = "Choices:\n-2: Exit program\n-1: Exit viewing resources\n0: Back\n";

    std::stack<SWG_resource_classes> parent_classes;
    current_node = tree.getRootNode();

    while (!isDone)
    {
        std::stringstream stream;
        stream << preset_options;

        std::vector<node_items> items = tree.getNodeItems(current_node);
        //fill in the other menu options
        for (size_t i = 0; i < items.size(); i++)
        {
            std::string name;
            if (items[i].isClass)
            {
                name = SWGResourceClassStringPretty(static_cast<SWG_resource_classes>(items[i].resource_enum));
            }
            else
            {
                name = SWGResourceTypeStringPretty(static_cast<SWG_resource_types>(items[i].resource_enum));
            }

            if (i == 0 && !parent_classes.empty())
            {
                stream << i + 1 << ": " << name << "(view this class of resource)\n"; //almost the same but with identifiying that this is a search and not a navigate command
            }
            else
            {
                stream << i + 1 << ": " << name << "\n"; //+1 because 0 is already taken so start at 1. index needs to be starting at 0 though hence why i = 1 is not the loop start
            }
        }

        input = getIntegerInput(stream.str(), -2, items.size());
        switch (input)
        {
        case -2:
            return true; //exit completely
        case -1:
            isDone = true;
            break;
        case 0:
            if (!parent_classes.empty())
            {
                if (parent_classes.top() == SWG_resource_classes::SWG_resource_classes_count)
                {
                    current_node = tree.getRootNode();
                }
                else
                {
                    current_node = tree.getResourceClassNode(parent_classes.top());
                }

                parent_classes.pop();
            }
            else
            {
                isDone = true;
            }
            break;
        default:
            //figure out where to go and call

            //root vs non root. Non root 1 is always this node, higher ones are either children nodes if a class or this node if a type. Root is always a class and never itself
            if (parent_classes.empty()) //root so always a class
            {
                //navigate
                current_node = tree.getResourceClassNode(static_cast<SWG_resource_classes>(items[input - 1].resource_enum));
                parent_classes.push(SWG_resource_classes::SWG_resource_classes_count); //push root onto stack
            }
            else //non root
            {
                if (input == 1) //this node
                {
                    //go nowhere just run the class command
                    //std::cout << "resource class string: " << SWGResourceClassString(static_cast<SWG_resource_classes>(items[input - 1].resource_enum));
                    resource_database->showResourcesWithClass(SWGResourceClassString(static_cast<SWG_resource_classes>(items[input - 1].resource_enum)), limit);
                }
                else
                {
                    //child node if a class, this node if not
                    if (items[input - 1].isClass)
                    {
                        //navigate
                        parent_classes.push(current_node->resource_class); //add the parent first then navigate
                        current_node = tree.getResourceClassNode(static_cast<SWG_resource_classes>(items[input - 1].resource_enum));
                    }
                    else
                    {
                        //even this node's items are added so no matter what we grab the item - 1's location
                        resource_database->showResourcesWithClass(SWGResourceTypeString(static_cast<SWG_resource_types>(items[input - 1].resource_enum)), limit);
                    }
                }
            }
            break;
        }
    }

    return false;
}

bool CLI_V1::viewSchematicsLoop(bool isViewing)
{
    //safety checks
    if (!isViewing)
    {
        //trying to view resources for a schematic but there are no schematics and or weights
        if (weights.size() == 0)
        {
            std::cout << "There are no weights found. Returning to main menu. weights.lua is either missing or damaged\n";
            return false;
        }
        else if (schematics.size() == 0)
        {
            std::cout << "There are no schematics found. Returning to main menu. schematics.lua is either missing or damaged\n";
            return false;
        }
    }

    //return false to continue the main loop and true if we should quit completely
    int input = 0;
    bool isDone = false;
    const std::string preset_options = "Choices:\n-2: Exit program\n-1: Exit viewing schematics\n";
    std::stringstream stream;
    stream << preset_options;

    //add actual schematics
    for (size_t i = 0; i < schematics.size(); i++)
    {
        stream << i << ": " << schematics[i].getName() << "\n";
    }

    while (!isDone)
    {
        input = getIntegerInput(stream.str(), -2, schematics.size() - 1);
        switch (input)
        {
        case -2:
            return true; //exit completely
        case -1:
            isDone = true;
            break;
        default:
            std::cout << "schematic name: " << schematics[input].getName() << "\n";
            const std::vector<SWG_resource_classes>& temp_classes = schematics[input].getClasses();
            const std::vector<SWG_resource_types>& temp_types = schematics[input].getTypes();

            if (isViewing) //viewing the contents of the schematic. not the weighted avg
            {
                for (size_t i = 0; i < temp_classes.size(); i++)
                {
                    std::cout << "resource class: " << SWGResourceClassString(temp_classes[i]) << "\n";
                }
                std::cout << "\n";

                for (size_t i = 0; i < temp_types.size(); i++)
                {
                    std::cout << "resource type: " << SWGResourceTypeString(temp_types[i]) << "\n";
                }
                std::cout << "\n";
            }
            else //viewing avg weighted resources that fit each type/class
            {
                std::cout << "Best resources using weight: " << weights[current_weight_index].getName() << "\n--------\n";

                for (size_t i = 0; i < temp_classes.size(); i++)
                {
                    std::string temp = SWGResourceClassString(temp_classes[i]);
                    std::cout << "best resource(s) for class: " << temp << "\n";
                    resource_database->showResourcesWithClassAverage(temp, limit, weights[current_weight_index].getWeight());
                    std::cout << "--------\n";
                }

                for (size_t i = 0; i < temp_types.size(); i++)
                {
                    std::string temp = SWGResourceTypeString(temp_types[i]);
                    std::cout << "best resource(s) for type: " << temp << "\n";
                    resource_database->showResourcesWithClassAverage(temp, limit, weights[current_weight_index].getWeight());
                    std::cout << "--------\n";
                }
            }

            break;
        }
    }

    return false;
}

bool CLI_V1::viewWeightsLoop(bool isViewing)
{
    //return false to continue the main loop and true if we should quit completely
    int input = 0;
    bool isDone = false;
    const std::string preset_options = "Choices:\n-2: Exit program\n-1: Exit viewing weights\n";
    std::stringstream stream;
    stream << preset_options;

    //add the actual weights
    for (size_t i = 0; i < weights.size(); i++)
    {
        stream << i << ": " << weights[i].getName() << "\n";
    }

    while (!isDone)
    {
        input = getIntegerInput(stream.str(), -2, weights.size() - 1);
        switch (input)
        {
        case -2:
            return true; //exit completely
        case -1:
            isDone = true;
            break;
        default:
            if (isViewing)
            {
                std::cout << "weight name: " << weights[input].getName() << "\n";
                const std::vector<weighted_average_pod>& weight = weights[input].getWeight();
                for (size_t i = 0; i < weight.size(); i++)
                {
                    std::cout << "attribute name: " << SWGAttributesString(static_cast<SWG_attributes>(weight[i].attribute)) << " weight: " << weight[i].weight << "\n";
                }
            }
            else //picking a weight to use for avg weighted viewing
            {
                std::cout << "Setting current weight to " << weights[input].getName() << "\n";
                current_weight_index = input;
                return false;
            }

            break;
        }
    }

    return false;
}

