# SWGResourceDatabase
Lua to Sqlite database program and simple CLI to do queries

## Still in dev
* Lua side
   * Done!
* Sqlite3 version 1
   * Done!
* CLI
   * Started

## How it works
The ZonamaDev server at a minimum produces a Lua file that contains all resources to ever exist on the test server. It's likely that the Core3 ones do as well, since they run basically the same code. This program will load that file and make a Sqlite3 database with a name of your choosing.

1. Copy the resource_manager_spawns.lua file somewhere it's easy to access
2. Run the program and do the setup. Give it the .lua filename and database name and it will make it(you can leave it as resource_manager_spawns.lua or change it, makes no difference)
3. Use the CLI or any other Sqlite3 interface to run queries
4. Enjoy!

Built with MS VS 2015

## CLI information
1. Plan to have a way to write schematics and weightings via a Lua settings file. Might be a few different ones.
2. Using the above it will allow you to see what the best resources are of any type or for any schematic you care about
3. Also usful for testing. Can be modified to check for a range of resource attributes fairly easily which assits in testing the crafting system

## CLI examples
To be done later

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
