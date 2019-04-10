--create enums from supplied files

local classes = {}

getClassValues(classes)
for _, t in ipairs(classes) do
  printTable(t)
  print()
end

