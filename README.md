# SWGResourceDatabase
Lua to Sqlite database program and simple CLI to do queries

## How it works
The ZonamaDev server at a minimum produces a Lua file that contains all resources to ever exist on the test server. It's likely that the Core3 ones do as well, since they run basically the same code. This program will load that file and make a Sqlite3 database with a name of your choosing.

1. Copy the resource_manager_spawns.lua file somewhere it's easy to access
2. Run the program and do the setup. Give it the .lua filename and database name and it will make it(you can leave it as resource_manager_spawns.lua or change it, makes no difference)
3. Use the CLI or any other Sqlite3 interface to run queries
4. Enjoy!

