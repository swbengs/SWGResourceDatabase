//class header
#include "SqliteCore_V1.hpp"

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

//helper C functions(not part of the class)

//callback that will print each column in a newline
int general_callback(void *NotUsed, int argc, char **argv, char **azColName)
{
    int i;
    for (i = 0; i < argc; i++)
    {
        printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
    }

    //printf("column count:%i\n", argc);
    printf("\n");

    return 0; //anything else and bad things happen
}

void execute_statement_general(sqlite3* database, std::string statement)
{
    char *zErrMsg = nullptr;
    int rc = sqlite3_exec(database, statement.c_str(), general_callback, 0, &zErrMsg);
    if (rc != SQLITE_OK)
    {
        fprintf(stderr, "SQL error: %s\n", zErrMsg);
        sqlite3_free(zErrMsg);
    }
}

//class code
SqliteCore_V1::SqliteCore_V1(std::string database_name)
{
    int rc;

    rc = sqlite3_open(database_name.c_str(), &database);
    if (rc)
    {
        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(database));
        sqlite3_close(database);
        database = nullptr;
    }

    createTables();
}

SqliteCore_V1::~SqliteCore_V1()
{
    sqlite3_close(database);
    database = nullptr;
}

//queries

//insert into database if it doesn't already exist
void SqliteCore_V1::addResource(const resource_pod& resource, const std::vector<std::string>& classes) const
{
    
}

//private
void SqliteCore_V1::createTables() const
{
    std::string show_tables = "SELECT * FROM sqlite_master WHERE type='table'";
    std::string resource_table = "CREATE TABLE IF NOT EXISTS resources (id integer primary key, name varchar(50), type_id int, cold_resistance int, conductivity int, decay_resistance int, flavor int, heat_resistance int, malleability int, overall_quality int, potential_energy int, shock_resistance int, unit_toughness int)";
    std::string classes_table = "CREATE TABLE IF NOT EXISTS classes (id integer primary key, class varchar(50))"; //M to M with resource stores just the string of class
    std::string classes_middle_table = "CREATE TABLE IF NOT EXISTS resource_classes (id integer primary key, resource_id int, class_id int)"; //intermediate table to resolve M to M resource to class
    std::string types_table = "CREATE TABLE IF NOT EXISTS types (id integer primary key, type varchar(50))"; //1 to M with resource(resource has only one type but many classes) stores just types

    execute_statement_general(database, resource_table);
    execute_statement_general(database, classes_table);
    execute_statement_general(database, classes_middle_table);
    execute_statement_general(database, types_table);

    execute_statement_general(database, show_tables);
}

