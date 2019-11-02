//class header
#include "LuaCore.hpp"

//std lib includes

//other includes

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
LuaCore::LuaCore()
{
    lua_state = luaL_newstate();
    current_index = 0;
}

LuaCore::~LuaCore()
{
    lua_close(lua_state);
    lua_state = nullptr;
}

//load the given file, and check that it is properly laid out. If it doesn't load Lua will give a reason such as file doesn't exist and so on. If it loads we need a table called 'resources'. Otherwise it's not a proper dump script
bool LuaCore::start(std::string filename)
{
    if (!runScript(filename))
    {
        return false;
    }

    //script ran so see if we have a resources table
    lua_getglobal(lua_state, "resources");
    if (!lua_istable(lua_state, -1))
    {
        printf("'resources' is not a valid table. Is the file a resource dump Lua script?\n");
        return false;
    }

    //it exists so everything is ready to grab resources. Next step is to call getNextResource() until it returns false but not in this function ;)

    return true;
}

//if everything else worked right, we only have the resources table on the stack so we just pop that off and it should be an empty stack
void LuaCore::stop()
{
    int count = lua_gettop(lua_state);
    if (count == 1)
    {
        lua_pop(lua_state, 1);
    }
    else if(count > 1)
    {
        fprintf(stderr, "Lua stack has extra items. Clearing the stack.\n");
        lua_settop(lua_state, 0);
    }
    else
    {
        fprintf(stderr, "Lua stack was empty. Did you forget to run start? Did it not return true?\n");
    }

    //sanity check
    count = lua_gettop(lua_state);
    if (count != 0)
    {
        fprintf(stderr, "Lua stack is not empty after stop(). Stack count is: %i\n", count);
    }
}

//returns true if the resource was successfully pulled from Lua. False means either there was an error or the end of the table was reached. Errors will output to console/stderr
bool LuaCore::getNextResource(resource_pod& pod, std::vector<std::string>& classes)
{
    if (!lua_gettop(lua_state) == 1)
    {
        if (lua_gettop(lua_state) > 1)
        {
            fprintf(stderr, "Lua stack has extra items at getNextResource()\n");
        }
        else //if it's one we wouldn't be here. If it's not greater than one than the only answer is that the stack has nothing/negative things(how the??? who popped too many things?)
        {
            fprintf(stderr, "Lua stack is empty getNextResource()\n");
        }
        return false;
    }

    current_index++;
    lua_pushinteger(lua_state, current_index);
    lua_gettable(lua_state, -2);
    if (!lua_istable(lua_state, -1))
    {
        printf("Resource table end has been reached\n");
        lua_pop(lua_state, 1); //must clean up before we leave this method
        return false;
    }

    pod.name = getFieldString("name");
    pod.type = getFieldString("type");
    if (!getResourceAttributes(pod))
    {
        fprintf(stderr, "Resource attributes error\n");
        lua_pop(lua_state, 1); //must clean up before we leave this method
        return false;
    }

    if (!getResourceClasses(classes))
    {
        fprintf(stderr, "Resource classes error\n");
        lua_pop(lua_state, 1); //must clean up before we leave this method
        return false;
    }

    lua_pop(lua_state, 1); //make sure we pop our table off before we leave

    return true;
}

bool LuaCore::startSchematics()
{
    return false;
}

bool LuaCore::getNextSchematic(Schematic& schematic)
{
    return false;
}

void LuaCore::stopSchematics()
{
}

bool LuaCore::startWeights()
{
    lua_getglobal(lua_state, "weights");
    if (!lua_istable(lua_state, -1))
    {
        printf("'weights' is not a valid table\n");
        return false;
    }

    //it exists so everything is ready to grab resources. Next step is to call getNextResource() until it returns false but not in this function ;)
    current_index = 0;

    return true;
}

bool LuaCore::getNextWeight(std::vector<weighted_average_pod>& weight, std::string& name)
{
    current_index++; //starts at 1 since we increment before doing anything

    //push next weight table on
    lua_pushinteger(lua_state, current_index);
    lua_gettable(lua_state, -2);
    if (!lua_istable(lua_state, -1))
    {
        printf("Weights table end has been reached\n");
        lua_pop(lua_state, 1); //must clean up before we leave this method
        return false;
    }

    //get the juicy bits
    name = getFieldString("name");
    const std::vector<std::string> attributes =
    {
        "CR",
        "CD",
        "DR",
        "FL",
        "HR",
        "MA",
        "OQ",
        "PE",
        "SR",
        "UT"
    };

    //only 10 attributes so just loop through them and add any found
    for (size_t i = 0; i < attributes.size(); i++)
    {
        weighted_average_pod pod;
        
        if (getWeight(pod, attributes[i], i)) //nothing went wrong so add this
        {
            weight.push_back(pod);
        }
    }

    //pop this weight table
    lua_pop(lua_state, 1);

    return true;
}

void LuaCore::stopWeights()
{
    //call this even if start fails because it will push nil onto the stack
    int count = lua_gettop(lua_state);
    if (count == 1)
    {
        lua_pop(lua_state, 1);
    }

    //sanity check
    count = lua_gettop(lua_state);
    if (count != 0)
    {
        fprintf(stderr, "Lua stack is not empty after stop(). Stack count is: %i\n", count);
    }
}

bool LuaCore::runSettingsScript()
{
    bool wasSuccess = runScript("settings.lua");
    if (!wasSuccess)
    {
        fprintf(stderr, "Could not find settings.lua. Switching to defaults\n");
    }

    return wasSuccess;
}

bool LuaCore::runSchematicsScript()
{
    bool wasSuccess = runScript("schematics.lua");
    if (!wasSuccess)
    {
        fprintf(stderr, "Could not find schematics.lua. Switching to defaults\n");
    }

    return wasSuccess;
}

bool LuaCore::runWeightsScript()
{
    bool wasSuccess = runScript("weights.lua");
    if (!wasSuccess)
    {
        fprintf(stderr, "Could not find weights.lua. Switching to defaults\n");
    }

    return wasSuccess;
}

int LuaCore::getIntGlobalValue(std::string key)
{
    int result;
    lua_getglobal(lua_state, key.c_str());
    if (!lua_isnumber(lua_state, -1))
    {
        fprintf(stderr, "invalid integer in table[%s]\n", key.c_str());
        //cleanup, aka the lua_pop happens even if we complain here hence why it's missing
    }

    result = (int)lua_tonumber(lua_state, -1);
    lua_pop(lua_state, 1);  /* remove number */
    return result;
}

std::string LuaCore::getStringGlobalValue(std::string key)
{
    std::string result;
    lua_getglobal(lua_state, key.c_str());
    if (!lua_isstring(lua_state, -1))
    {
        fprintf(stderr, "invalid string in table[%s]\n", key.c_str());
        lua_pop(lua_state, 1); //don't forget to cleanup stack when returning early
        return "null";
    }

    result = lua_tostring(lua_state, -1); //in C++11 it is supposed to copy the char*. If it does not this will cause issues. The internal pointer that Lua gives is only valid while the value is on the Lua stack
    lua_pop(lua_state, 1);
    return result;
}

//debug helpers
void LuaCore::debugStart()
{
    luaL_openlibs(lua_state); //only use if you are sure that no harmful Lua code will be run
    std::string filename = "scripts\\global_helpers.lua";
    runScript(filename);
}

void LuaCore::debugCollectResourceInfo()
{
    std::string filename = "scripts\\pull_resource_info.lua";
    runScript(filename);
}

void LuaCore::debugMakeEnums()
{
    std::string filename = "scripts\\make_enums.lua";
    runScript(filename);
}

void LuaCore::debugMakeConversions()
{
    std::string filename = "scripts\\make_conversions.lua";
    runScript(filename);
}

//private
void LuaCore::error()
{
    fprintf(stderr, "%s\n", lua_tostring(lua_state, -1));
    lua_pop(lua_state, 1);  /* pop error message from the stack */
}

bool LuaCore::runScript(std::string filename)
{
    if (luaL_loadfile(lua_state, filename.c_str()) || lua_pcall(lua_state, 0, 0, 0))
    {
        error();
        return false;
    }

    printf("running script: %s was a success!\n", filename.c_str());
    return true;
}

float LuaCore::getFieldFloat(std::string key, bool shouldPrintError)
{
    float result;

    lua_pushstring(lua_state, key.c_str());
    lua_gettable(lua_state, -2);  /* get table[key] */
    if (!lua_isnumber(lua_state, -1) && shouldPrintError)
    {
        fprintf(stderr, "invalid float in table[%s]\n", key.c_str());
    }
    result = (float)lua_tonumber(lua_state, -1);
    lua_pop(lua_state, 1);  /* remove number */

    return result;
}

//get int can cry about an error but there is no valid int that will signify an error to the calling method. Just print error and go on
int LuaCore::getFieldInt(std::string key)
{
    int result;
    lua_pushstring(lua_state, key.c_str());
    lua_gettable(lua_state, -2);  /* get table[key] */
    if (!lua_isnumber(lua_state, -1))
    {
        fprintf(stderr, "invalid integer in table[%s]\n", key.c_str());
    }

    result = (int)lua_tonumber(lua_state, -1);
    lua_pop(lua_state, 1);  /* remove number */
    return result;
}

int LuaCore::getFieldInt(int key)
{
    int result;
    lua_pushinteger(lua_state, key);
    lua_gettable(lua_state, -2);  /* get table[key] */
    if (!lua_isnumber(lua_state, -1))
    {
        fprintf(stderr, "invalid integer in table[%i]\n", key);
    }

    result = (int)lua_tonumber(lua_state, -1);
    lua_pop(lua_state, 1);  /* remove number */
    return result;
}

//returns the value at table[key] or string value of null if it was nil
std::string LuaCore::getFieldString(std::string key)
{
    std::string result;

    lua_pushstring(lua_state, key.c_str());
    lua_gettable(lua_state, -2);
    if (!lua_isstring(lua_state, -1))
    {
        fprintf(stderr, "invalid string in table[%s]\n", key.c_str());
        lua_pop(lua_state, 1); //don't forget to cleanup
        return "null";
    }

    result = lua_tostring(lua_state, -1); //in C++11 it is supposed to copy the char*. If it does not this will cause issues. The internal pointer that Lua gives is only valid while the value is on the Lua stack
    lua_pop(lua_state, 1);
    return result;
}

//returns the value at table[key] or string value of null if it was nil
std::string LuaCore::getFieldString(int key)
{
    std::string result;

    lua_pushinteger(lua_state, key);
    lua_gettable(lua_state, -2);
    if (!lua_isstring(lua_state, -1))
    {
        fprintf(stderr, "invalid string in table[%i]\n", key);
        lua_pop(lua_state, 1); //don't forget to cleanup stack when returning early
        return "null";
    }

    result = lua_tostring(lua_state, -1); //in C++11 it is supposed to copy the char*. If it does not this will cause issues. The internal pointer that Lua gives is only valid while the value is on the Lua stack
    lua_pop(lua_state, 1);
    return result;
}

//fills in the cold resistance through unit toughness aka the stats
bool LuaCore::getResourceAttributes(resource_pod& pod)
{
    lua_pushstring(lua_state, "attributes");
    lua_gettable(lua_state, -2);
    if (!lua_istable(lua_state, -1))
    {
        printf("Resource has no attributes\n");
        lua_pop(lua_state, 1); //don't forget to cleanup stack when returning early
        return false;
    }

    bool next = true; //loop control
    int index = 0;
    do
    {
        index++;
        lua_pushinteger(lua_state, index);
        lua_gettable(lua_state, -2);
        if (!lua_istable(lua_state, -1)) //could be an error or that we have hit the end of the attributes
        {
            next = false;
        }
        else //grab the attribute. No way to tell if something goes wrong here easily so no need to return false and cleanup
        {
            getAttribute(pod);
        }

        lua_pop(lua_state, 1); //get ready for next table
    } while (next);

    lua_pop(lua_state, 1); //pop off attributes
    return true;
}

//grabs a single attribute. An error will just return 0 so there is no way to know for certain the proper value was there
void LuaCore::getAttribute(resource_pod& pod)
{
    //grab the value only. We don't push the table off that happens in the loop
    //1 is the key, 2 is the value
    std::string key = getFieldString(1);
    int value = getFieldInt(2);

    //figure out which attribute to set based on the key
    if (key.compare("res_cold_resist") == 0)
    {
        pod.cold_resistance = value;
    }
    else if (key.compare("res_conductivity") == 0)
    {
        pod.conductivity = value;
    }
    else if (key.compare("res_decay_resist") == 0)
    {
        pod.decay_resistance = value;
    }
    else if (key.compare("res_flavor") == 0)
    {
        pod.flavor = value;
    }
    else if (key.compare("res_heat_resist") == 0)
    {
        pod.heat_resistance = value;
    }
    else if (key.compare("res_malleability") == 0)
    {
        pod.malleability = value;
    }
    else if (key.compare("res_quality") == 0)
    {
        pod.overall_quality = value;
    }
    else if (key.compare("res_potential_energy") == 0)
    {
        pod.potential_energy = value;
    }
    else if (key.compare("res_shock_resistance") == 0)
    {
        pod.shock_resistance = value;
    }
    else if (key.compare("res_toughness") == 0)
    {
        pod.unit_toughness = value;
    }
    else if (key.compare("entangle_resistance") == 0)
    {
        //do nothing but don't show an error. Not used for anything ingame to my knowledge and only gemstones have this
    }
    else //unknown key
    {
        fprintf(stderr, "unknown key in getAttribute of: %s", key.c_str());
    }
}

bool LuaCore::getResourceClasses(std::vector<std::string>& classes)
{
    lua_pushstring(lua_state, "classes");
    lua_gettable(lua_state, -2);
    if (!lua_istable(lua_state, -1))
    {
        printf("Resource has no classes\n");
        lua_pop(lua_state, 1); //pop off whatever junk was there
        return false;
    }

    bool next = true; //loop control
    int index = 0;
    do
    {
        index++;
        lua_pushinteger(lua_state, index);
        lua_gettable(lua_state, -2);
        if (!lua_istable(lua_state, -1)) //could be an error or that we have hit the end of the attributes
        {
            next = false;
        }
        else //grab just the second value. First is a more human readable string of the second
        {
            std::string value = getFieldString(2);
            if (value.compare("null") == 0)
            {
                //error will generate at call above so just cleanup and return. Issue here means the classes table is messed up somehow so make sure the calling method knows something went wrong
                lua_pop(lua_state, 2); //pop off whatever junk was there and attributes(we were 2 extra items deep here and now we are not ;) )
                return false;
            }
            classes.push_back(std::move(value));
        }

        lua_pop(lua_state, 1); //get ready for next table
    } while (next);

    lua_pop(lua_state, 1); //pop off attributes
    return true;
}

bool LuaCore::getWeight(weighted_average_pod& pod, std::string attribute_key, unsigned int attribute_value)
{
    float weight = getFieldFloat(attribute_key, false);
    if (weight <= 0)
    {
        return false;
    }

    pod.attribute = attribute_value;
    pod.weight = weight;

    return true;
}

