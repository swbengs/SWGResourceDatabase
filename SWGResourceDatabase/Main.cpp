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
    std::string filename = "table_test.lua";
    LuaCore lua;
    resource_pod resource;
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

    if (!lua.start(filename))
    {
        return EXIT_FAILURE;
    }
    lua.getNextResource(resource);
    lua.stop();

    if (resource.name.compare("Ababuglu") != 0)
    {
        printf("resource name was not Ababuglu\n");
        return EXIT_FAILURE;
    }

    if (resource.type.compare("copper_borocarbitic") != 0)
    {
        printf("resource type was not copper_borocarbitic\n");
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

    return EXIT_SUCCESS;
}

int main()
{
    bool result;

    //result = test_LuaCoreBasic();
    //result = test_LuaCoreStop();
    result = test_LuaCoreFirst();

    return result;
}

