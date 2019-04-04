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
    if (luaL_loadfile(lua_state, filename.c_str()) || lua_pcall(lua_state, 0, 0, 0))
    {
        error();
        return false;
    }

    printf("load script and run it was a success!\n");

    //script ran so see if we have a resources table
    lua_getglobal(lua_state, "resources");
    if (!lua_istable(lua_state, -1))
    {
        printf("`resources' is not a valid table. Is the file a resource dump Lua script?\n");
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

bool LuaCore::getNextResource(resource_pod& pod)
{
    if (!lua_gettop(lua_state) == 1)
    {
        if (lua_gettop(lua_state) > 1)
        {
            fprintf(stderr, "Lua stack has extra items at getNextResource()\n");
        }
        else //if it's one we wouldn't be here. If it's not greater than one than the only answer is that the stack has nothing
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
        return false;
    }

    pod.name = getFieldString("name");
    pod.type = getFieldString("type");

    lua_pop(lua_state, 1); //make sure we pop our table off before we leave

    return true;
}

//private
void LuaCore::error()
{
    fprintf(stderr, "%s\n", lua_tostring(lua_state, -1));
    lua_pop(lua_state, 1);  /* pop error message from the stack */
}

int LuaCore::getFieldInt(std::string key)
{
    int result;
    lua_pushstring(lua_state, key.c_str());
    lua_gettable(lua_state, -2);  /* get table[key] */
    if (!lua_isnumber(lua_state, -1))
    {
        printf("invalid integer in table[%s]\n", key.c_str());
    }

    result = (int)lua_tonumber(lua_state, -1);
    lua_pop(lua_state, 1);  /* remove number */
    return result;
}

std::string LuaCore::getFieldString(std::string key)
{
    std::string result;

    lua_pushstring(lua_state, key.c_str());
    lua_gettable(lua_state, -2);
    if (!lua_isstring(lua_state, -1))
    {
        printf("invalid string in table[%s]\n", key.c_str());
    }

    result = lua_tostring(lua_state, -1); //in C++11 it is supposed to copy the char*. If it does not this will cause issues. The internal pointer that Lua gives is only valid while the value is on the Lua stack
    lua_pop(lua_state, 1);
    return result;
}

