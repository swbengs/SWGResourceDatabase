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
    if (lua_gettop(lua_state) == 1)
    {
        lua_pop(lua_state, 1);
    }
    else
    {
        fprintf(stderr, "Lua stack has extra items. Clearing the stack.\n");
        lua_settop(lua_state, 0);
    }

    //sanity check
    int count = lua_gettop(lua_state);
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

    return true;
}

//private
void LuaCore::error()
{
    fprintf(stderr, "%s\n", lua_tostring(lua_state, -1));
    lua_pop(lua_state, 1);  /* pop error message from the stack */
}
