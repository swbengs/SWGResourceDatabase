//std library
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>

//other library files
#include "Sqlite/sqlite3.h"

//test includes
#include "LuaCore.hpp"
#include "SqliteCore_V1.hpp"
#include "CLI_V1.hpp"
#include "ResourceTree.hpp"

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

std::string SWGToString(SWG_resource_classes e)
{
    return SWGResourceClassString(e);
}

std::string SWGToString(SWG_resource_types e)
{
    return SWGResourceTypeString(e);
}

bool checkVector(const std::vector<std::string>& vector, const std::vector<std::string>& expected, std::string name)
{
    //check size
    if (vector.size() != expected.size())
    {
        printf("%s was not the same size as expected\n", name.c_str());
        return false;
    }

    //check actual values
    for (size_t i = 0; i < vector.size(); i++) //for extra saftey/sanity should check all values in expected in case they are out of order in vector. Long as they are the same size and contain the same values, even in a different order it should pass
    {
        if (vector[i].compare(expected[i]) != 0)
        {
            printf("%s was not %s: value at [%i] was %s\n", name.c_str(), expected[i].c_str(), i, vector[i].c_str());
            return false;
        }
    }

    return true;
}

bool checkString(std::string value, std::string expected, std::string name)
{
    if (value.compare(expected) != 0)
    {
        printf("%s was not %s: value was %s\n", name.c_str(), expected.c_str(), value.c_str());
        return false;
    }
    return true;
}

//true if it matches, false if not
bool checkInt(int value, int expected, std::string name)
{
    if (value != expected)
    {
        printf("%s was not %i: value was %i\n", name.c_str(), expected, value);
        return false;
    }
    return true;
}

void printVector(std::vector<std::string> vector, std::string name)
{
    printf("%s:\n", name.c_str());
    for (size_t i = 0; i < vector.size(); i++)
    {
        printf("%s\n", vector[i].c_str());
    }
}

//sets given vector to default constructed vector
void resetResourceClasses(std::vector<std::string>& classes)
{
    classes = std::vector<std::string>();
}

//sets given resource to junk strings and 0 ints
void resetResourcePOD(resource_pod& resource)
{
    resource.name = "fail name";
    resource.type = "fail type";
    resource.cold_resistance = 0;
    resource.conductivity = 0;
    resource.decay_resistance = 0;
    resource.flavor = 0;
    resource.heat_resistance = 0;
    resource.malleability = 0;
    resource.overall_quality = 0;
    resource.potential_energy = 0;
    resource.shock_resistance = 0;
    resource.unit_toughness = 0;
}

//test that will use the test script. Simply does a start and stop
int test_LuaCoreBasic()
{
    std::string filename = "table_test.lua";
    LuaCore lua;

    if (!lua.start(filename))
    {
        return EXIT_FAILURE;
    }

    lua.stop();

    return EXIT_SUCCESS;
}

//runs just stop without a start
int test_LuaCoreStop()
{
    LuaCore lua;
    lua.stop();

    return EXIT_SUCCESS;
}

int test_LuaCoreFirst()
{
    printf("test_LuaCoreFirst start\n");

    std::string filename = "table_test.lua";
    LuaCore lua;
    resource_pod resource;
    resetResourcePOD(resource);
    std::vector<std::string> classes;
    std::vector<std::string> expected = {"inorganic", "mineral", "metal", "metal_nonferrous", "copper", "copper_borocarbitic"};

    if (!lua.start(filename))
    {
        return EXIT_FAILURE;
    }

    lua.getNextResource(resource, classes);
    lua.stop();

    if (!checkString(resource.name, "Ababuglu", "name"))
    {
        return EXIT_FAILURE;
    }
    else if (!checkString(resource.type, "copper_borocarbitic", "type"))
    {
        return EXIT_FAILURE;
    }
    else if (!checkInt(resource.cold_resistance, 184, "cold_resistance"))
    {
        return EXIT_FAILURE;
    }
    else if (!checkInt(resource.conductivity, 539, "conductivity"))
    {
        return EXIT_FAILURE;
    }
    else if (!checkInt(resource.decay_resistance, 906, "decay_resistance"))
    {
        return EXIT_FAILURE;
    }
    else if (!checkInt(resource.flavor, 0, "flavor"))
    {
        return EXIT_FAILURE;
    }
    else if (!checkInt(resource.heat_resistance, 86, "heat_resistance"))
    {
        return EXIT_FAILURE;
    }
    else if (!checkInt(resource.malleability, 349, "malleability"))
    {
        return EXIT_FAILURE;
    }
    else if (!checkInt(resource.overall_quality, 469, "overall_quality"))
    {
        return EXIT_FAILURE;
    }
    else if (!checkInt(resource.potential_energy, 0, "potential_energy"))
    {
        return EXIT_FAILURE;
    }
    else if (!checkInt(resource.shock_resistance, 344, "shock_resistance"))
    {
        return EXIT_FAILURE;
    }
    else if (!checkInt(resource.unit_toughness, 598, "unit_toughness"))
    {
        return EXIT_FAILURE;
    }
    else if (!checkVector(classes, expected, "classes"))
    {
        return EXIT_FAILURE;
    }

    printf("name: %s\n", resource.name.c_str());
    printf("type: %s\n", resource.type.c_str());
    printf("cold_resistance: %i\n", resource.cold_resistance);
    printf("conductivity: %i\n", resource.conductivity);
    printf("decay_resistance: %i\n", resource.decay_resistance);
    printf("flavor: %i\n", resource.flavor);
    printf("heat_resistance: %i\n", resource.heat_resistance);
    printf("malleability: %i\n", resource.malleability);
    printf("overall_quality: %i\n", resource.overall_quality);
    printf("potential_energy: %i\n", resource.potential_energy);
    printf("shock_resistance: %i\n", resource.shock_resistance);
    printf("unit_toughness: %i\n", resource.unit_toughness);
    printVector(classes, "classes");

    printf("test_LuaCoreFirst stop\n\n");

    return EXIT_SUCCESS;
}

int test_LuaCoreSecond()
{
    printf("test_LuaCoreSecond start\n");

    std::string filename = "table_test.lua";
    LuaCore lua;
    resource_pod resource;
    resetResourcePOD(resource);
    std::vector<std::string> classes;
    std::vector<std::string> expected = { "organic", "creature_resources", "creature_structural", "bone_horn", "bone_horn_rori" };

    if (!lua.start(filename))
    {
        return EXIT_FAILURE;
    }

    lua.getNextResource(resource, classes); //1
    resetResourcePOD(resource);
    resetResourceClasses(classes);
    lua.getNextResource(resource, classes); //2
    lua.stop();

    if (!checkString(resource.name, "Abayquily", "name"))
    {
        return EXIT_FAILURE;
    }
    else if (!checkString(resource.type, "bone_horn_rori", "type"))
    {
        return EXIT_FAILURE;
    }
    else if (!checkInt(resource.cold_resistance, 0, "cold_resistance"))
    {
        return EXIT_FAILURE;
    }
    else if (!checkInt(resource.conductivity, 0, "conductivity"))
    {
        return EXIT_FAILURE;
    }
    else if (!checkInt(resource.decay_resistance, 616, "decay_resistance"))
    {
        return EXIT_FAILURE;
    }
    else if (!checkInt(resource.flavor, 0, "flavor"))
    {
        return EXIT_FAILURE;
    }
    else if (!checkInt(resource.heat_resistance, 0, "heat_resistance"))
    {
        return EXIT_FAILURE;
    }
    else if (!checkInt(resource.malleability, 172, "malleability"))
    {
        return EXIT_FAILURE;
    }
    else if (!checkInt(resource.overall_quality, 424, "overall_quality"))
    {
        return EXIT_FAILURE;
    }
    else if (!checkInt(resource.potential_energy, 0, "potential_energy"))
    {
        return EXIT_FAILURE;
    }
    else if (!checkInt(resource.shock_resistance, 301, "shock_resistance"))
    {
        return EXIT_FAILURE;
    }
    else if (!checkInt(resource.unit_toughness, 98, "unit_toughness"))
    {
        return EXIT_FAILURE;
    }
    else if (!checkVector(classes, expected, "classes"))
    {
        return EXIT_FAILURE;
    }

    printf("name: %s\n", resource.name.c_str());
    printf("type: %s\n", resource.type.c_str());
    printf("cold_resistance: %i\n", resource.cold_resistance);
    printf("conductivity: %i\n", resource.conductivity);
    printf("decay_resistance: %i\n", resource.decay_resistance);
    printf("flavor: %i\n", resource.flavor);
    printf("heat_resistance: %i\n", resource.heat_resistance);
    printf("malleability: %i\n", resource.malleability);
    printf("overall_quality: %i\n", resource.overall_quality);
    printf("potential_energy: %i\n", resource.potential_energy);
    printf("shock_resistance: %i\n", resource.shock_resistance);
    printf("unit_toughness: %i\n", resource.unit_toughness);
    printVector(classes, "classes");

    printf("test_LuaCoreSecond stop\n\n");

    return EXIT_SUCCESS;
}

int test_LuaCoreFourth()
{
    printf("test_LuaCoreFourth start\n");

    std::string filename = "table_test.lua";
    LuaCore lua;
    resource_pod resource;
    resetResourcePOD(resource);
    std::vector<std::string> classes;
    std::vector<std::string> expected = { "organic", "flora_resources", "flora_food", "seeds", "fruit", "fruit_fruits", "fruit_fruits_dantooine" };

    if (!lua.start(filename))
    {
        return EXIT_FAILURE;
    }

    lua.getNextResource(resource, classes); //1
    resetResourcePOD(resource);
    resetResourceClasses(classes);
    lua.getNextResource(resource, classes); //2
    resetResourcePOD(resource);
    resetResourceClasses(classes);
    lua.getNextResource(resource, classes); //3
    resetResourcePOD(resource);
    resetResourceClasses(classes);
    lua.getNextResource(resource, classes); //4
    lua.stop();

    if (!checkString(resource.name, "Able", "name"))
    {
        return EXIT_FAILURE;
    }
    else if (!checkString(resource.type, "fruit_fruits_dantooine", "type"))
    {
        return EXIT_FAILURE;
    }
    else if (!checkInt(resource.cold_resistance, 0, "cold_resistance"))
    {
        return EXIT_FAILURE;
    }
    else if (!checkInt(resource.conductivity, 0, "conductivity"))
    {
        return EXIT_FAILURE;
    }
    else if (!checkInt(resource.decay_resistance, 828, "decay_resistance"))
    {
        return EXIT_FAILURE;
    }
    else if (!checkInt(resource.flavor, 626, "flavor"))
    {
        return EXIT_FAILURE;
    }
    else if (!checkInt(resource.heat_resistance, 0, "heat_resistance"))
    {
        return EXIT_FAILURE;
    }
    else if (!checkInt(resource.malleability, 0, "malleability"))
    {
        return EXIT_FAILURE;
    }
    else if (!checkInt(resource.overall_quality, 523, "overall_quality"))
    {
        return EXIT_FAILURE;
    }
    else if (!checkInt(resource.potential_energy, 182, "potential_energy"))
    {
        return EXIT_FAILURE;
    }
    else if (!checkInt(resource.shock_resistance, 0, "shock_resistance"))
    {
        return EXIT_FAILURE;
    }
    else if (!checkInt(resource.unit_toughness, 0, "unit_toughness"))
    {
        return EXIT_FAILURE;
    }
    else if (!checkVector(classes, expected, "classes"))
    {
        return EXIT_FAILURE;
    }

    printf("name: %s\n", resource.name.c_str());
    printf("type: %s\n", resource.type.c_str());
    printf("cold_resistance: %i\n", resource.cold_resistance);
    printf("conductivity: %i\n", resource.conductivity);
    printf("decay_resistance: %i\n", resource.decay_resistance);
    printf("flavor: %i\n", resource.flavor);
    printf("heat_resistance: %i\n", resource.heat_resistance);
    printf("malleability: %i\n", resource.malleability);
    printf("overall_quality: %i\n", resource.overall_quality);
    printf("potential_energy: %i\n", resource.potential_energy);
    printf("shock_resistance: %i\n", resource.shock_resistance);
    printf("unit_toughness: %i\n", resource.unit_toughness);
    printVector(classes, "classes");

    printf("test_LuaCoreFourth stop\n\n");

    return EXIT_SUCCESS;
}

int test_LuaCoreCount()
{
    printf("test_LuaCoreCount start\n");

    std::string filename = "resource_manager_spawns.lua";
    LuaCore lua;
    unsigned int count = 0;

    lua.start(filename);
    bool next = true;
    do
    {
        resource_pod resource;
        std::vector<std::string> classes;

        next = lua.getNextResource(resource, classes);
        if (next)
        {
            count++;
        }
    } while (next);

    lua.stop();

    printf("resource count: %i\n", count);
    printf("test_LuaCoreCount stop\n\n");
    return EXIT_SUCCESS;
}

int test_LuaCoreClassesError()
{
    printf("test_LuaCoreClassesError start\n");

    std::string filename = "bad_classes.lua";
    LuaCore lua;
    resource_pod resource;
    std::vector<std::string> classes;
    bool result;

    lua.start(filename);
    result = lua.getNextResource(resource, classes);
    lua.stop();

    if (result) //should not be successful
    {
        return EXIT_FAILURE;
    }

    printf("name: %s\n", resource.name.c_str());
    printf("type: %s\n", resource.type.c_str());
    printf("cold_resistance: %i\n", resource.cold_resistance);
    printf("conductivity: %i\n", resource.conductivity);
    printf("decay_resistance: %i\n", resource.decay_resistance);
    printf("flavor: %i\n", resource.flavor);
    printf("heat_resistance: %i\n", resource.heat_resistance);
    printf("malleability: %i\n", resource.malleability);
    printf("overall_quality: %i\n", resource.overall_quality);
    printf("potential_energy: %i\n", resource.potential_energy);
    printf("shock_resistance: %i\n", resource.shock_resistance);
    printf("unit_toughness: %i\n", resource.unit_toughness);
    printVector(classes, "classes");

    printf("test_LuaCoreClassesError stop\n\n");

    return EXIT_SUCCESS;
}

//sqlite
int test_Sqlite_create()
{
    printf("test_Sqlite_create start\n");

    std::string database_name = "test.db";
    SqliteCore_V1 database(database_name);
    database.createTables();
    database.showAllClasses(100);
    database.showAllTypes(100);

    printf("test_Sqlite_create stop\n\n");

    return EXIT_SUCCESS;
}

int test_Sqlite_delete()
{
    printf("test_Sqlite_delete start\n");

    std::string database_name = "test.db";
    SqliteCore_V1 database(database_name);
    database.dropTables();

    printf("test_Sqlite_delete stop\n\n");

    return EXIT_SUCCESS;
}

int test_Sqlite_insert()
{
    printf("test_Sqlite_insert start\n");

    std::string database_name = "test.db";
    SqliteCore_V1 database(database_name);

    resource_pod pod;
    pod.name = "make it so";
    pod.type = "ore_intrusive_berubium";
    pod.cold_resistance = 0;
    pod.conductivity = 2;
    pod.decay_resistance = 3;
    pod.flavor = 4;
    pod.heat_resistance = 0;
    pod.malleability = 6;
    pod.overall_quality = 7;
    pod.potential_energy = 8;
    pod.shock_resistance = 9;
    pod.unit_toughness = 0;
    std::vector<std::string> vector = {"ore_intrusive_berubium", "inorganic", "gas"};

    Resource resource = Resource(pod, vector);
    database.addResource(resource);
    database.showAllResources(50);
    database.showAllIntermediate(100);
    printf("resource count: %i\n", database.getResourceCount());

    printf("test_Sqlite_insert stop\n\n");

    return EXIT_SUCCESS;
}

int test_Sqlite_real_create()
{
    std::string database_name = "test.db";
    std::string filename = "resource_manager_spawns.lua";
    SqliteCore_V1 database(database_name);
    database.dropTables();
    database.createTables();

    LuaCore lua;
    if (!lua.start(filename))
    {
        return EXIT_FAILURE;
    }

    database.transactionStart();
    bool next = true;
    do
    {
        resource_pod pod;
        std::vector<std::string> classes;

        next = lua.getNextResource(pod, classes);
        if (next)
        {
            Resource resource(pod, classes);
            database.addResource(resource);
        }
    } while (next);

    database.transactionStop();
    lua.stop();
    printf("resource count: %i\n", database.getResourceCount());

    return EXIT_SUCCESS;
}

int test_Sqlite_real_details()
{
    const int limit = 3;
    std::string database_name = "test.db";
    SqliteCore_V1 database(database_name);
    std::vector<weighted_average_pod> attributes;

    printf("resource count: %i\n", database.getResourceCount());
    //database.showAllResourcesPretty(limit);
    
    //printf("resources with type phrik aluminum\n");
    database.showResourcesWithClass(SWGResourceTypeString(SWG_resource_types::ALUMINUM_PHRIK), limit); //do it the lazy way ;)
    //printf("resources with type duralloy steel\n");
    //database.showResourcesWithClass(SWGResourceTypeString(STEEL_DURALLOY), limit);
    //printf("resources with class steel\n");
    //database.showResourcesWithClass(SWGResourceClassString(STEEL), limit);


   // database.showResourcesWithClass(SWGResourceClassString(INORGANIC), limit);
    //database.showResourcesWithClass(SWGResourceClassString(ORGANIC), limit);

    /*
    pod.attribute = static_cast<int>(OQ);
    pod.weight = weight;
    attributes.push_back(pod);

    pod.attribute = static_cast<int>(SR);
    pod.weight = weight;
    attributes.push_back(pod);

    pod.attribute = static_cast<int>(MA);
    pod.weight = weight;
    attributes.push_back(pod);

    pod.attribute = static_cast<int>(UT);
    pod.weight = weight;
    attributes.push_back(pod);

    pod.attribute = static_cast<int>(OQ);
    pod.weight = weight;
    attributes.push_back(pod);

    pod.attribute = static_cast<int>(FL);
    pod.weight = weight;
    attributes.push_back(pod);

    pod.attribute = static_cast<int>(PE);
    pod.weight = weight;
    attributes.push_back(pod);

    pod.attribute = static_cast<int>(DR);
    pod.weight = weight;
    attributes.push_back(pod);

    */

    weighted_average_pod pod;
    float weight = 1.0f;

    /* bioengineer additives
    pod.attribute = static_cast<int>(OQ);
    pod.weight = 0.5f;
    attributes.push_back(pod);

    pod.attribute = static_cast<int>(FL);
    pod.weight = 0.2f;
    attributes.push_back(pod);

    pod.attribute = static_cast<int>(PE);
    pod.weight = 0.3f;
    attributes.push_back(pod);
    */

    /*
    pod.attribute = static_cast<int>(OQ);
    pod.weight = weight;
    attributes.push_back(pod);

    pod.attribute = static_cast<int>(SR);
    pod.weight = weight;
    attributes.push_back(pod);

    pod.attribute = static_cast<int>(OQ);
    pod.weight = 0.67f;
    attributes.push_back(pod);

    pod.attribute = static_cast<int>(CD);
    pod.weight = 0.33f;
    attributes.push_back(pod);
    */

    //first gen
    //database.showResourcesWithClassAverage(SWGToString(METAL), limit, attributes);
    //database.showResourcesWithClassAverage(SWGToString(GAS), limit, attributes);
    //database.showResourcesWithClassAverage(SWGToString(CHEMICAL), limit, attributes);
    //database.showResourcesWithClassAverage(SWGToString(METAL), limit, attributes);
    //database.showResourcesWithClassAverage(SWGToString(MINERAL), limit, attributes);

    //fourth gen lightsaber
    //database.showResourcesWithClassAverage(SWGToString(COPPER_POLYSTEEL), limit, attributes);
    //database.showResourcesWithClassAverage(SWGToString(GAS_INERT_CULSION), limit, attributes);
    //database.showResourcesWithClassAverage(SWGToString(ALUMINUM_TITANIUM), limit, attributes);
    //database.showResourcesWithClassAverage(SWGToString(PETROCHEM_INERT_POLYMER), limit, attributes);
    //database.showResourcesWithClassAverage(SWGToString(STEEL_DURALLOY), limit, attributes);

    //UT adv vibro unit
    //database.showResourcesWithClassAverage(SWGToString(COPPER_DESH), limit, attributes);
    //database.showResourcesWithClassAverage(SWGToString(PETROCHEM_FUEL_SOLID_TYPE3), limit, attributes);
    //database.showResourcesWithClassAverage(SWGToString(COPPER_PLATINITE), limit, attributes);

    //UT adv reinforced core
    //database.showResourcesWithClassAverage(SWGToString(STEEL_DITANIUM), limit, attributes);

    //SR power hammer
    //database.showResourcesWithClassAverage(SWGToString(IRON_KAMMRIS), limit, attributes);
    //database.showResourcesWithClassAverage(SWGToString(METAL), limit, attributes);
    //database.showResourcesWithClassAverage(SWGToString(COPPER), limit, attributes);

    //SR LVA
    //database.showResourcesWithClassAverage(SWGToString(STEEL_DITANIUM), limit, attributes);
    //database.showResourcesWithClassAverage(SWGToString(COPPER), limit, attributes);
    //database.showResourcesWithClassAverage(SWGToString(METAL_NONFERROUS), limit, attributes);
    //database.showResourcesWithClassAverage(SWGToString(STEEL_DURALLOY), limit, attributes);

    //SR LVA
    //database.showResourcesWithClassAverage(SWGToString(STEEL_DITANIUM), limit, attributes);
    //database.showResourcesWithClassAverage(SWGToString(COPPER_POLYSTEEL), limit, attributes);
    //database.showResourcesWithClassAverage(SWGToString(METAL), limit, attributes);

    //mabari adv seg
    //database.showResourcesWithClassAverage(SWGToString(IRON_BRONZIUM), limit, attributes);
    //database.showResourcesWithClassAverage(SWGToString(STEEL_DITANIUM), limit, attributes);

    //mabari armor
    //database.showResourcesWithClassAverage(SWGToString(METAL), limit, attributes);
    //database.showResourcesWithClassAverage(SWGToString(HIDE), limit, attributes);
    //database.showResourcesWithClassAverage(SWGToString(FIBERPLAST), limit, attributes);
    //database.showResourcesWithClassAverage(SWGToString(PETROCHEM_INERT), limit, attributes);

    /*
    pod.attribute = static_cast<int>(FL);
    pod.weight = 0.20f;
    attributes.push_back(pod);

    pod.attribute = static_cast<int>(OQ);
    pod.weight = 0.50f;
    attributes.push_back(pod);

    pod.attribute = static_cast<int>(PE);
    pod.weight = 0.30f;
    attributes.push_back(pod);
    */

    //nutrient add 20fl 50oq 30pe
    //database.showResourcesWithClassAverage(SWGToString(ORGANIC), limit, attributes);
    //database.showResourcesWithClassAverage(SWGToString(FLORA_FOOD), limit, attributes);
    //database.showResourcesWithClassAverage(SWGToString(CREATURE_FOOD), limit, attributes);

    //pod.attribute = static_cast<int>(SWG_attributes::OQ);
    //pod.weight = 0.67f;
    //attributes.push_back(pod);

    //pod.attribute = static_cast<int>(SWG_attributes::PE);
    //pod.weight = 0.33f;
    //attributes.push_back(pod);

    //medical adv comps for power 66% OQ 33% PE
    /*
    database.showResourcesWithClassAverage(SWGToString(WHEAT_WILD_LOK), limit, attributes);
    database.showResourcesWithClassAverage(SWGToString(FIBERPLAST_TATOOINE), limit, attributes);

    database.showResourcesWithClassAverage(SWGToString(MEAT_HERBIVORE), limit, attributes);
    database.showResourcesWithClassAverage(SWGToString(PETROCHEM_FUEL_LIQUID_TYPE4), limit, attributes);

    database.showResourcesWithClassAverage(SWGToString(FRUIT_BERRIES_DANTOOINE), limit, attributes);
    database.showResourcesWithClassAverage(SWGToString(WATER_VAPOR_TALUS), limit, attributes);

    database.showResourcesWithClassAverage(SWGToString(OATS_DOMESTICATED), limit, attributes);
    database.showResourcesWithClassAverage(SWGToString(IRON_DOLOVITE), limit, attributes);
    */
    //end comps

    //medical stims etc for power 66% OQ 33% PE
    //stim E
    //database.showResourcesWithClassAverage(SWGToString(SWG_resource_classes::FRUIT_BERRIES), limit, attributes);
    //database.showResourcesWithClassAverage(SWGToString(SWG_resource_classes::FIBERPLAST), limit, attributes);

    //buffs D
    //database.showResourcesWithClassAverage(SWGToString(SWG_resource_classes::MEAT_AVIAN), limit, attributes);
    //database.showResourcesWithClassAverage(SWGToString(SWG_resource_classes::GAS_REACTIVE), limit, attributes);

    return EXIT_SUCCESS;
}

int resourceTreeFindTest()
{
    ResourceTree tree;
    tree.debugTestFindClassNode();
    tree.debugTestFindType();

    return EXIT_SUCCESS;
}

//debug stuff
int debugRun()
{
    printf("debugRun start\n");

    std::string filename = "resource_manager_spawns.lua";
    LuaCore lua;

    lua.start(filename);
    lua.stop();
    lua.debugStart();
    lua.debugCollectResourceInfo();
    lua.debugMakeEnums();
    lua.debugMakeConversions();

    printf("debugRun stop\n\n");
    return EXIT_SUCCESS;
}

int main(int argc, char **argv)
{
    int result;

    //Lua
    //result = test_LuaCoreBasic();
    //result = test_LuaCoreStop();
    //result = test_LuaCoreFirst();
    //result = test_LuaCoreSecond();
    //result = test_LuaCoreFourth();
    //result = test_LuaCoreCount();
    //result = test_LuaCoreClassesError();

    //Sqlite
    //result = test_Sqlite_delete();
    //result = test_Sqlite_create();
    //result = test_Sqlite_insert();
    //result = test_Sqlite_real_create(); //reading the full table and adding everything
    //result = test_Sqlite_real_details();

    //debug
    //result = debugRun();

    CLI_V1 cli;
    result = cli.startCLI(argc, argv);

    //result = resourceTreeFindTest();

    return result;
}

