//class header
#include "CLI_V1.hpp"

//std library
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <sstream>

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


//private

CLI_V1::CLI_V1()
{
    
}

int CLI_V1::startCLI(int argc, char** argv)
{
    if (argc < 3)
    {
        //not enough arguments so just start a normal loop
        return EXIT_SUCCESS;
    }
    else if (argc == 3)
    {
        //either args for loading or making a database or error
        std::string command = argv[1];
        database_name = argv[2];

        if (command.compare("-create") == 0)
        {
            if (!createDatabase())
            {
                std::cerr << "Error creating database\n";
                return EXIT_FAILURE;
            }

            inputLoop();
        }
        else if (command.compare("-load") == 0)
        {
            if (loadDatabase())
            {
                std::cerr << "Error loading database\n";
                return EXIT_FAILURE;
            }

            inputLoop();
        }
        else
        {
            std::cerr << "Unknown command line argument given. Usage is -create databasename or -load databasename\n";
            return EXIT_FAILURE;
        }

        return EXIT_SUCCESS; //other paths finished so everything worked
    }
    else if (argc > 3)
    {
        //no idea what they gave us
        std::cerr << "More than 3 arguments given. Usage is -create databasename or -load databasename\n";
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS; //how did we get here?
}

bool CLI_V1::createDatabase()
{
    return false;
}

bool CLI_V1::loadDatabase()
{
    return false;
}

void CLI_V1::inputLoop()
{
}
