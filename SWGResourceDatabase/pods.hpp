#pragma once

//std lib includes
#include <string>

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

/*
Description: Header that lists all PODs(plain old data). These don't need methods but since C++ treats structs as public classes they can have them.
*/

struct resource_pod
{
    std::string name;
    std::string type; //convert to int through lookup before adding to database. is a string when collected in Lua. Becomes an int index when in database
    unsigned int cold_resistance; //CR CD DR FL HR MA PE OQ SR UT are the abbreviations in order
    unsigned int conductivity;
    unsigned int decay_resistance;
    unsigned int flavor;
    unsigned int heat_resistance;
    unsigned int malleability;
    unsigned int overall_quality;
    unsigned int potential_energy;
    unsigned int shock_resistance;
    unsigned int unit_toughness;
};

