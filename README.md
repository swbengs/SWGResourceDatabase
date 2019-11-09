# SWGResourceDatabase
Lua to Sqlite database program and simple CLI to do queries

![Image of schematic viewing](https://github.com/swbengs/SWGResourceDatabase/blob/master/sample_use.png)

## How it works
The ZonamaDev server and Core3 produces a Lua file that contains all resources to ever exist on the test server. This program will load that file and make a Sqlite3 database with a name of your choosing.

1. Copy the resource_manager_spawns.lua file somewhere it's easy to access or use a helper shell script to grab it
2. Run the program and do the setup. Give it the .lua filename and database name and it will make it(you can leave it as resource_manager_spawns.lua or change it, makes no difference)
3. Use the CLI or any other Sqlite3 interface to run queries
4. Enjoy!

Solution built with MS VS 2019
Makefile for ZonamaDev

## Usage tips
* Most important function is with weights and schematics. The default weight is the first one listed in weights.lua
* Select option 4 to choose a different weight
* Once you have the weight you want, select the schematic in option 5 and it will query each listed resource type and class to find the top resources for it currently in the database
* Create a new up to date database as often as you want. Every day, every week, every month, doesn't matter

## Linux/ZonamaDev install
1. Run the setup script and it will copy all neccesary files to the desktop/SWGResourceDatabase folder and then run the makefile
2. Use the supplied sample shell scripts to assist with copying the dump file, loading, and creating your databases.

## Settings files
settings.lua controls diffrent display controls for queries
weights.lua define the weights to use for average weighted searches. Displayed in order. First defined weight is the default.
schematics.lua define the schematics(don't have to be ingame schematics) that use the current weight. Displayed in the program in the order they appear in the file
* Resource types and classes are defined in constantsV1.cpp. You use the NON pretty versions. Sample lua files are provided which show both to get an idea how it works. More schematics and weights will be added over time.

## Sample shell scripts
* Assist with loading or creating a database without repeated user input. ZonamaDev script to copy the resource dump file
* Windows samples are in shell_scripts/windows folder
* Linux shells are in shell_scripts/linux

## Languages
* Lua 5.3
* Sqlite3
* C++11

## License info
My code is under the MIT license but Lua and Sqlite have their own. 

Lib name | Lib version | Website | License
-------- | ----------- | ------- | -------
Lua | 5.3.4 | https://www.lua.org/ | https://www.lua.org/license.html
Sqlite | 3 | https://www.sqlite.org/index.html | https://www.sqlite.org/copyright.html
