//std library
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>

//other library files
#include "Sqlite\sqlite3.h"

//test includes
#include "LuaCore.hpp"
#include "SqliteCore_V1.hpp"

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

int test_Sqlite_create()
{
    printf("test_Sqlite_create start\n");

    std::string database_name = "test.db";
    SqliteCore_V1 database(database_name);
    database.createTables();

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
    pod.name = "test2";
    pod.type = "junk2";
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
    std::vector<std::string> vector;

    Resource resource = Resource(pod, vector);
    database.addResource(resource);
    database.showAllResources();

    printf("test_Sqlite_insert stop\n\n");

    return EXIT_SUCCESS;
}

int main()
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
   // result = test_Sqlite_delete();
    //result = test_Sqlite_create();
    result = test_Sqlite_insert();

    return result;
}

