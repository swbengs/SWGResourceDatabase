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

int get_id_callback(void* count, int argc, char **argv, char **azColName)
{
    int* temp = (int*)count;
    int i;
    for (i = 0; i < argc; i++)
    {
        //printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
        *temp = std::stoi(argv[i], nullptr, 10);
    }
    return 0;
}

int execute_statement_get_id(sqlite3* database, std::string statement)
{
    int count = 0;
    char *zErrMsg = nullptr;
    int rc = sqlite3_exec(database, statement.c_str(), get_id_callback, &count, &zErrMsg);
    if (rc != SQLITE_OK)
    {
        fprintf(stderr, "SQL error: %s\n", zErrMsg);
        sqlite3_free(zErrMsg);
    }

    return count;
}

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

//static defines
const std::string SqliteCore_V1::resource_table_name = "resources";
const std::string SqliteCore_V1::classes_table_name = "classes";
const std::string SqliteCore_V1::intermediate_table_name = "resource_classes";
const std::string SqliteCore_V1::types_table_name = "types";

//methods
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

    classes = getReverseOfClassesString();
    types = getReverseOfTypesString();
}

SqliteCore_V1::~SqliteCore_V1()
{
    sqlite3_close(database);
    database = nullptr;
}

//queries

//insert into database if it doesn't already exist
void SqliteCore_V1::addResource(const Resource& resource) const
{
    addResource(resource.getResourcePOD(), resource.getClasses());
}

//create
void SqliteCore_V1::createTables() const
{
    std::string show_tables = "SELECT * FROM sqlite_master WHERE type='table'";

    std::stringstream resource_table;
    resource_table << "CREATE TABLE IF NOT EXISTS " << resource_table_name << " (id integer primary key, name varchar(50), type_id int, cold_resistance int, conductivity int, decay_resistance int, flavor int, heat_resistance int, malleability int, overall_quality int, potential_energy int, shock_resistance int, unit_toughness int);";
    std::stringstream classes_table; //M to M with resource stores just the string of class
    classes_table << "CREATE TABLE IF NOT EXISTS " << classes_table_name << " (id integer primary key, class varchar(50));";
    std::stringstream classes_intermediate_table; //intermediate table to resolve M to M resource to class
    classes_intermediate_table << "CREATE TABLE IF NOT EXISTS " << intermediate_table_name << " (id integer primary key, resource_id int, class_id int);";
    std::stringstream types_table; //1 to M with resource(resource has only one type but many classes) stores just types
    types_table << "CREATE TABLE IF NOT EXISTS " << types_table_name << " (id integer primary key, type varchar(50));";

    execute_statement_general(database, resource_table.str());
    execute_statement_general(database, classes_table.str());
    execute_statement_general(database, classes_intermediate_table.str());
    execute_statement_general(database, types_table.str());

    execute_statement_general(database, show_tables);

    fillTypeAndClassTables();
}

//drop
void SqliteCore_V1::dropTables() const
{
    std::string show_tables = "SELECT * FROM sqlite_master WHERE type='table'";

    std::stringstream resource_table;
    resource_table << "DROP TABLE IF EXISTS " << resource_table_name << ";";
    std::stringstream classes_table;
    classes_table << "DROP TABLE IF EXISTS " << classes_table_name << ";";
    std::stringstream classes_intermediate_table;
    classes_intermediate_table << "DROP TABLE IF EXISTS " << intermediate_table_name << ";";
    std::stringstream types_table;
    types_table << "DROP TABLE IF EXISTS " << types_table_name << ";";

    execute_statement_general(database, resource_table.str());
    execute_statement_general(database, classes_table.str());
    execute_statement_general(database, classes_intermediate_table.str());
    execute_statement_general(database, types_table.str());

    execute_statement_general(database, show_tables);
}

//select
void SqliteCore_V1::showAllResources() const
{
    std::stringstream stream;
    stream << "SELECT * from " << resource_table_name << " LIMIT 50;";
    execute_statement_general(database, stream.str());
}

void SqliteCore_V1::showAllClasses() const
{
    std::stringstream stream;
    stream << "SELECT * from " << classes_table_name << ";";
    execute_statement_general(database, stream.str());
}

void SqliteCore_V1::showAllTypes() const
{
    std::stringstream stream;
    stream << "SELECT * from " << types_table_name << ";";
    execute_statement_general(database, stream.str());
}

int SqliteCore_V1::getResourceID(std::string name) const
{
    std::stringstream stream;
    stream << "SELECT id from " << resource_table_name << " WHERE name = '" << name;
    stream << "';";
    int count = execute_statement_get_id(database, stream.str());

    return count;
}

//gets
int SqliteCore_V1::getSWGClassInt(std::string name) const
{
    int temp = 0;

    if (classes.count(name) > 0)
    {
        temp = classes.at(name) + 1; //actual DB value is 1 higher than enum
    }
    else
    {
        fprintf(stderr, "unkown class key of: %s", name.c_str());
    }
    return temp;
}

int SqliteCore_V1::getSWGTypeInt(std::string name) const
{
    int temp = 0;

    if (types.count(name) > 0)
    {
        temp = types.at(name) + 1; //actual DB value is 1 higher than enum
    }
    else
    {
        fprintf(stderr, "unkown type key of: %s", name.c_str());
    }
    return temp;
}

//private

void SqliteCore_V1::insertResourceIntValue(std::stringstream& stream, int value, bool add_comma) const
{
    if (value > 0)
    {
        stream << value;
        if (add_comma)
        {
            stream << ", ";
        }
    }
    else
    {
        stream << "NULL";
        if (add_comma)
        {
            stream << ", ";
        }
    }
}

void SqliteCore_V1::addResource(const resource_pod& pod, const std::vector<std::string>& vector) const
{
    //first check if it already exists
    int resource_id = getResourceID(pod.name);
    if (resource_id == 0) //does not
    {
        std::stringstream stream;
        int resource_type = getSWGTypeInt(pod.type);

        stream << "INSERT INTO " << resource_table_name;
        stream << " (name, type_id, cold_resistance, conductivity, decay_resistance, flavor, heat_resistance, malleability, overall_quality, potential_energy, shock_resistance, unit_toughness) ";
        stream << "VALUES ('" << pod.name << "', ";
        insertResourceIntValue(stream, resource_type, true);
        insertResourceIntValue(stream, pod.cold_resistance, true);
        insertResourceIntValue(stream, pod.conductivity, true);
        insertResourceIntValue(stream, pod.decay_resistance, true);
        insertResourceIntValue(stream, pod.flavor, true);
        insertResourceIntValue(stream, pod.heat_resistance, true);
        insertResourceIntValue(stream, pod.malleability, true);
        insertResourceIntValue(stream, pod.overall_quality, true);
        insertResourceIntValue(stream, pod.potential_energy, true);
        insertResourceIntValue(stream, pod.shock_resistance, true);
        insertResourceIntValue(stream, pod.unit_toughness, false);
        stream << ");";

        //printf("%s\n", stream.str().c_str());
        execute_statement_general(database, stream.str());
        resource_id = getResourceID(pod.name);
        printf("added resource id: %i\n", resource_id);

        for (size_t i = 0; i < vector.size(); i++)
        {
            //getSWGClassInt(vector[i]);
        }
    }
    else
    {
        printf("already exists with resource id: %i\n", resource_id);
    }
}

void SqliteCore_V1::addResourceClass(std::string name) const
{
    std::stringstream stream;
    stream << "INSERT INTO " << classes_table_name;
    stream << " (class) ";
    stream << "VALUES ('" << name << "');";

    execute_statement_general(database, stream.str());
}

void SqliteCore_V1::addResourceType(std::string name) const
{
    std::stringstream stream;
    stream << "INSERT INTO " << types_table_name;
    stream << " (type) ";
    stream << "VALUES ('" << name << "');";

    execute_statement_general(database, stream.str());
}

void SqliteCore_V1::fillTypeAndClassTables() const
{
    execute_statement_general(database, "BEGIN TRANSACTION;");
    for (size_t i = 0; i < SWG_resource_classes_count; i++)
    {
        addResourceClass(SWGResourceClassString(static_cast<SWG_resource_classes>(i)));
    }

    for (size_t i = 0; i < SWG_resource_types_count; i++)
    {
        addResourceType(SWGResourceTypeString(static_cast<SWG_resource_types>(i)));
    }
    execute_statement_general(database, "COMMIT;");
}

