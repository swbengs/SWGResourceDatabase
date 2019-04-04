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
bool test_LuaCoreBasic()
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
bool test_LuaCoreStop()
{
    LuaCore lua;
    lua.stop();

    return EXIT_SUCCESS;
}

bool test_LuaCoreFirst()
{
    printf("test_LuaCoreFirst start\n");

    std::string filename = "table_test.lua";
    LuaCore lua;
    resource_pod resource;
    resetResourcePOD(resource);

    if (!lua.start(filename))
    {
        return EXIT_FAILURE;
    }

    lua.getNextResource(resource);
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

    printf("test_LuaCoreFirst stop\n\n");

    return EXIT_SUCCESS;
}

bool test_LuaCoreSecond()
{
    printf("test_LuaCoreSecond start\n");

    std::string filename = "table_test.lua";
    LuaCore lua;
    resource_pod resource;
    resetResourcePOD(resource);

    if (!lua.start(filename))
    {
        return EXIT_FAILURE;
    }

    lua.getNextResource(resource); //1
    resetResourcePOD(resource);
    lua.getNextResource(resource); //2
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

    printf("test_LuaCoreSecond stop\n\n");

    return EXIT_SUCCESS;
}

bool test_LuaCoreFourth()
{
    printf("test_LuaCoreFourth start\n");

    std::string filename = "table_test.lua";
    LuaCore lua;
    resource_pod resource;
    resetResourcePOD(resource);

    if (!lua.start(filename))
    {
        return EXIT_FAILURE;
    }

    lua.getNextResource(resource); //1
    resetResourcePOD(resource);
    lua.getNextResource(resource); //2
    resetResourcePOD(resource);
    lua.getNextResource(resource); //3
    resetResourcePOD(resource);
    lua.getNextResource(resource); //4
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

    printf("test_LuaCoreFourth stop\n\n");

    return EXIT_SUCCESS;
}

int main()
{
    bool result;

    //result = test_LuaCoreBasic();
    //result = test_LuaCoreStop();
    result = test_LuaCoreFirst();
    result = test_LuaCoreSecond();
    result = test_LuaCoreFourth();

    return result;
}

