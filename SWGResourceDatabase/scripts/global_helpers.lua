--functions declared in global that are used in multiple scripts.

--function that does the hard work. Each group of enum, enum string, pretty enum string is added to the table as a trio
local function getValue(line, add_to_table)
  --print(line)
  local start = 1
  local stop = string.find(line, ",")
  --print(start.." "..stop)
  --print(string.sub(line, start, stop - 1)) --skip the comma
  local enum = string.sub(line, start, stop - 1) --skip the comma

  start = stop + 1
  stop = string.find(line, ",", start)
  --print(start.." "..stop)
  --print(string.sub(line, start, stop - 1))
  local enum_string = string.sub(line, start, stop - 1)

  start = stop + 1
  stop = string.find(line, ",", start)
  --print(start.." "..stop)
  --print(string.sub(line, start, stop - 1))
  local pretty_string = string.sub(line, start, stop - 1)
  --print("")
  local temp = {
  ["enum"] = enum, 
  ["enum_string"] = enum_string, 
  ["pretty_string"] = pretty_string
  }
  table.insert(add_to_table, temp)
end

local function getValues(table)
  for line in io.lines() do
    getValue(line, table)
  end
end

function printTable(table)
  for key, value in pairs(table) do
    print(key.." = "..value)
  end
end

function getClassValues(table)
  local file = assert(io.open("scripts\\classes.txt", "r"))
  io.input(file)

  getValues(table)

  io.close(file)
end

function getTypeValues(table)
  local file = assert(io.open("scripts\\types.txt", "r"))
  io.input(file)

  getValues(table)

  io.close(file)
end

