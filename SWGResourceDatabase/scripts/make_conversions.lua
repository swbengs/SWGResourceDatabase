--make converions from enum to string(the reverse is done via hash_map with the key as this value and the enum integer as the value)

--std::string DFNaturalTileString(DF_Natural_Tile_Material e)
--{
--    switch (e)
--    {
--        //gem start
--    case DF_ALMANDINE:
--        return "almandine";

local function writeHeader(func_name, enum_name)
  io.write("std::string ")
  io.write(func_name)
  io.write("(")
  io.write(enum_name)
  io.write(" e)\n")
  io.write("{\n")
  io.write("    switch (e)\n")
  io.write("    {\n")
end

local function writeBodyLine(enums_table, key)
  io.write("    case ")
  io.write(enums_table["enum"])
  io.write(":\n")
  io.write("        return \"")
  io.write(enums_table[key])
  io.write("\";\n")
end

local function writeFooter()
  io.write("    }\n")
  io.write("}\n")
end

local function writeBasicStrings(filename, func_name, pretty_name, enums_table, enums_name)
  local file = io.open(filename,"w")
  io.output(file)

  writeHeader(func_name, enums_name)
  for _, t in ipairs(enums_table) do
    writeBodyLine(t, "enum_string")
  end
  writeFooter()

  io.write("\n")

  writeHeader(pretty_name, enums_name)
  for _, t in ipairs(enums_table) do
    writeBodyLine(t, "pretty_string")
  end
  writeFooter()

  io.close(file)
end

local classes = {}
local types = {}

getClassValues(classes)
getTypeValues(types)

writeBasicStrings("scripts\\convert_classes.txt", "func", "funcpretty", classes, "SWG_resource_classes")
writeBasicStrings("scripts\\convert_types.txt", "func2", "funcpretty", types, "SWG_resource_types")

