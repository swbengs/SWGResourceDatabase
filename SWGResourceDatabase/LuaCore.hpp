#pragma once

//std lib includes
#include <string>
#include <vector>

//other includes
#include "pods.hpp"
#include "Schematic.hpp"

//extern c or else while compiling as C++ there are naming issues
extern "C"
{
#include "Lua/lua.h" //bread and butter
#include "Lua/lauxlib.h" //helper functions for plain Lua
#include "Lua/lualib.h" //helper libraries for tables, math, IO, and so on inside Lua
}

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

/*
Description: Class that will collect all information from the given lua script
TODO: redesign so that enums are used everywhere but the edge where it gets converted instead of passing ints around
*/

//class delcaration
class LuaCore
{
public:
    LuaCore();
    ~LuaCore();

    bool start(std::string filename); //do setup things to be ready to collect resources. Takes a filename which is the Lua file that is a resource dump. Returns true if there was no error
    void stop(); //do closing things so that if the Lua state needs to be used again it's clean aka stack is empty
    bool getNextResource(resource_pod& pod, std::vector<std::string>& classes); //gets the next resource and returns true if there was one. If false the POD and vector you pass in are junk

    bool startSchematics();
    bool getNextSchematic(Schematic& schematic);
    void stopSchematics();

    bool startWeights(); //push the weight table onto the stack and returns true if it's a table
    bool getNextWeight(std::vector<weighted_average_pod>& weight, std::string& name); //gets the next weight, and returns true if there was one. If it returns false the one you have is junk and there are no more
    void stopWeights(); //pop it off the stack and sanity check

    //helpers for settings.lua. Only grab from global hash table
    bool runSettingsScript();
    bool runSchematicsScript();
    bool runWeightsScript();
    int getIntGlobalValue(std::string key);
    std::string getStringGlobalValue(std::string key);

    //debug helpers
    void debugStart(); //adds in all libraries NOT SAFE. only use trusted Lua scripts. Runs commands and scripts to build all text files with enums and their methods
    void debugCollectResourceInfo(); //resource classes and types and their pretty names and enums. stored in classes.txt and types.txt
    void debugMakeEnums(); //makes classes and types enum lists in classes_enums.txt and types_enums.txt
    void debugMakeConversions(); //makes classes types conversion from enum to text and their pretty version convert_classes.txt convert_types.txt
private:
    lua_State* lua_state;
    int current_index;
    std::unordered_map<std::string, SWG_resource_classes> reverse_classes;
    std::unordered_map<std::string, SWG_resource_types> reverse_types;

    void error();
    bool runScript(std::string filename); //run given script. returns true if it ran without errors

    //helper gets expect the table to already be pushed onto the stack
    float getFieldFloat(std::string key, bool shouldPrintError);
    int getFieldInt(std::string key);
    int getFieldInt(int key);
    std::string getFieldString(std::string key);
    std::string getFieldString(int key, bool shouldPrintError);
    bool getResourceAttributes(resource_pod& pod);
    void getAttribute(resource_pod& pod); //these are in a table with key at table[1] and value at table[2]
    bool getResourceClasses(std::vector<std::string>& classes);
    bool getWeight(weighted_average_pod& pod, std::string attribute_key, unsigned int attribute_value);

    bool isClassEnumString(std::string name) const;
    bool isTypeEnumString(std::string name) const;
    SWG_resource_classes getClassEnumByString(std::string name) const; //these must exist of they will throw exception so best to use isEnumString first
    SWG_resource_types getTypeEnumByString(std::string name) const;
};

