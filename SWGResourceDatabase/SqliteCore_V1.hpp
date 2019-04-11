#pragma once

//std lib includes
#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>

//other includes
#include "pods.hpp"
#include "Resource.hpp"
#include "Sqlite\sqlite3.h"
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
Description: This is the first version of the SQL side. It has methods to run SQL statements. Handles loading the given Resource class into the database.
*/

//class delcaration
class SqliteCore_V1
{
public:
    SqliteCore_V1(std::string database_name);
    ~SqliteCore_V1();

    //queries
    void addResource(const Resource& resource) const; //insert
    void createTables() const; //create table
    void dropTables() const; //drop
    void showAllResources() const; //select
    void showAllClasses() const;
    void showAllTypes() const;
    int getResourceID(std::string name) const;

    //gets
    int getSWGClassInt(std::string name) const; //both return 0(null) if it does not exist
    int getSWGTypeInt(std::string name) const;

private:
    sqlite3* database;
    static const std::string resource_table_name;
    static const std::string classes_table_name;
    static const std::string intermediate_table_name;
    static const std::string types_table_name;
    std::unordered_map<std::string, SWG_resource_classes> classes;
    std::unordered_map<std::string, SWG_resource_types> types;

    void insertResourceIntValue(std::stringstream& stream, int value, bool add_comma) const; //converts any 0 to NULL and adds the value to stream. if add_comma is true it adds a comma as well
    void addResource(const resource_pod& pod, const std::vector<std::string>& vector) const;
    void addResourceClass(std::string name) const;
    void addResourceType(std::string name) const;
    void addIntermediate(std::string name) const;
    void fillTypeAndClassTables() const; //since these don't change they are auto filled
};

