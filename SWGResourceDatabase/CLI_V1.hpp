#pragma once

//std lib includes
#include <string>

//other includes
#include "LuaCore.hpp"
#include "SqliteCore_V1.hpp"
#include "constantsV1.hpp"

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
Description: First version of the command line interface
*/

//class delcaration
class CLI_V1
{
public:
    CLI_V1();

    int startCLI(int argc, char **argv);
    bool createDatabase();
    bool loadDatabase();
private:
    std::string database_name;
    LuaCore settings_lua;
    CLI_state state;

    int getIntegerInput(std::string options, int min, int max);
    int inputLoop(); //determine what to do next based on what the user types in
};

