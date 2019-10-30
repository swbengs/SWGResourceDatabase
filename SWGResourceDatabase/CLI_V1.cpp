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
#include "Sqlite\sqlite3.h"

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

    printf("resource count: %i\n", resource_database->getResourceCount());

    resource_database->showAllResources(10);

    return true;
}

//private
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
        input = getIntegerInput("Choices:\n0: Exit\n1: View resources\n", 0, 1);
        switch (input)
        {
        case 0:
            isDone = true;
            break;
        case 1:
            isDone = viewResourcesLoop();
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
    //parent_classes.push(SWG_resource_classes::SWG_resource_classes_count);
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

            stream << i + 1 << ": " << name << "\n"; //+1 because 0 is already taken so start at 1. index needs to be starting at 0 though hence why i = 1 is not the loop start
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
            break;
        }
    }

    return false;
}

