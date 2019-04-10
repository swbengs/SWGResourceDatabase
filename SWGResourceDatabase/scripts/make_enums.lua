--create enums from supplied files

local function writeHeader(enum_name)
  io.write("enum ")
  io.write(enum_name)
  io.write("\n{\n")
end

local function writeBodyLine(enums_table)
  io.write("    ")
  io.write(enums_table["enum"])
  io.write(",\n")
end

local function writeFooter()
  io.write("};")
end

local function writeEnums(filename, enum_name, enums_table, count_name)
  local file = io.open(filename,"w")
  io.output(file)

  writeHeader(enum_name)
  for _, t in ipairs(enums_table) do
    writeBodyLine(t)
  end
  io.write("\n")
  io.write("    ")
  io.write("//add nothing below this one\n")
  io.write("    ")
  io.write(count_name)
  io.write("\n")
  writeFooter()

  io.close(file)
end

local function printNestedTable(table)
  for _, t in ipairs(table) do
    printTable(t)
    print()
  end
end

local classes = {}
local types = {}


getClassValues(classes)
getTypeValues(types)

writeEnums("scripts\\classes_enums.txt", "SWG_resource_classes", classes, "SWG_resource_classes_count")
writeEnums("scripts\\types_enums.txt", "SWG_resource_types", types, "SWG_resource_types_count")

