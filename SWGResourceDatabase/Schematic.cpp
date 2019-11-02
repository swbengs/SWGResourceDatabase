//class header
#include "Schematic.hpp"

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
Schematic::Schematic()
{
    name = "junk";
}

void Schematic::addClass(SWG_resource_classes value)
{
    classes.push_back(value);
}

void Schematic::addType(SWG_resource_types value)
{
    types.push_back(value);
}

std::string Schematic::getName() const
{
    return name;
}

const std::vector<SWG_resource_types>& Schematic::getTypes() const
{
    return types;
}

const std::vector<SWG_resource_classes>& Schematic::getClasses() const
{
    return classes;
}

void Schematic::setName(std::string name)
{
    this->name = name;
}

void Schematic::setTypes(const std::vector<SWG_resource_types>& types)
{
    this->types = types;
}

void Schematic::setClasses(const std::vector<SWG_resource_classes>& classes)
{
    this->classes = classes;
}

