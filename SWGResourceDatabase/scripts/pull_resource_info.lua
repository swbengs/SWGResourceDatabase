--grab from resources table the classes, types, and pretty class names
--next split classes into unique classes, and save each into their own file

--create table that will say what all found classes are aka types of resource
local classes = {}
local classes_unique = {}
local types = {} --types that are defined as resource["type"]

for _, resource in ipairs(resources) do
  if types[resource["type"]] == nil then
    types[resource["type"]] = 1
  end
  for _, class in ipairs(resource["classes"]) do
    classes[class[2]] = class[1]
  end
end

--make classes table that is only unique. While doing so add pretty name for types as well
for key, value in pairs(classes) do
  if types[key] == nil then --add to unique
    classes_unique[key] = value
  else
    if types[key] == 1 then --only change it if it hasn't already been seet'
      types[key] = value
    end
  end
end

--can't sort hash part of a table directly. make new table with just the keys in an array
local sorted_classes = {}
local sorted_types = {}
for key, value in pairs(classes_unique) do
  table.insert(sorted_classes, key)
end

for key, value in pairs(types) do
  table.insert(sorted_types, key)
end

--sort ;)
table.sort(sorted_classes)
table.sort(sorted_types)

--traverse sorted keys with ipairs so it goes in order and print the goods
print("classes_unique")
for _, key in ipairs(sorted_classes) do
  print(key.." = "..classes_unique[key])
end
print("classes_unique end")
print("")

print("types")
for _, key in ipairs(sorted_types) do
  print(key.." = "..types[key])
end
print("types end")

