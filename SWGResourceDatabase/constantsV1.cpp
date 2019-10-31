//class header
#include "constantsV1.hpp"

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

//class code

std::string SWGResourceClassString(SWG_resource_classes e)
{
    switch (e)
    {
    case SWG_resource_classes::ALUMINUM:
        return "aluminum";
    case SWG_resource_classes::BONE:
        return "bone";
    case SWG_resource_classes::BONE_AVIAN:
        return "bone_avian";
    case SWG_resource_classes::BONE_HORN:
        return "bone_horn";
    case SWG_resource_classes::CEREAL:
        return "cereal";
    case SWG_resource_classes::CHEMICAL:
        return "chemical";
    case SWG_resource_classes::COPPER:
        return "copper";
    case SWG_resource_classes::CORN:
        return "corn";
    case SWG_resource_classes::CORN_DOMESTICATED:
        return "corn_domesticated";
    case SWG_resource_classes::CORN_WILD:
        return "corn_wild";
    case SWG_resource_classes::CREATURE_FOOD:
        return "creature_food";
    case SWG_resource_classes::CREATURE_RESOURCES:
        return "creature_resources";
    case SWG_resource_classes::CREATURE_STRUCTURAL:
        return "creature_structural";
    case SWG_resource_classes::ENERGY:
        return "energy";
    case SWG_resource_classes::ENERGY_RENEWABLE:
        return "energy_renewable";
    case SWG_resource_classes::ENERGY_RENEWABLE_SITE_LIMITED:
        return "energy_renewable_site_limited";
    case SWG_resource_classes::ENERGY_RENEWABLE_UNLIMITED:
        return "energy_renewable_unlimited";
    case SWG_resource_classes::ENERGY_RENEWABLE_UNLIMITED_SOLAR:
        return "energy_renewable_unlimited_solar";
    case SWG_resource_classes::ENERGY_RENEWABLE_UNLIMITED_WIND:
        return "energy_renewable_unlimited_wind";
    case SWG_resource_classes::FIBERPLAST:
        return "fiberplast";
    case SWG_resource_classes::FLORA_FOOD:
        return "flora_food";
    case SWG_resource_classes::FLORA_RESOURCES:
        return "flora_resources";
    case SWG_resource_classes::FLORA_STRUCTURAL:
        return "flora_structural";
    case SWG_resource_classes::FRUIT:
        return "fruit";
    case SWG_resource_classes::FRUIT_BERRIES:
        return "fruit_berries";
    case SWG_resource_classes::FRUIT_FLOWERS:
        return "fruit_flowers";
    case SWG_resource_classes::FRUIT_FRUITS:
        return "fruit_fruits";
    case SWG_resource_classes::FUEL_PETROCHEM_LIQUID:
        return "fuel_petrochem_liquid";
    case SWG_resource_classes::FUEL_PETROCHEM_LIQUID_KNOWN:
        return "fuel_petrochem_liquid_known";
    case SWG_resource_classes::FUEL_PETROCHEM_SOLID:
        return "fuel_petrochem_solid";
    case SWG_resource_classes::FUEL_PETROCHEM_SOLID_KNOWN:
        return "fuel_petrochem_solid_known";
    case SWG_resource_classes::GAS:
        return "gas";
    case SWG_resource_classes::GAS_INERT:
        return "gas_inert";
    case SWG_resource_classes::GAS_INERT_KNOWN:
        return "gas_inert_known";
    case SWG_resource_classes::GAS_REACTIVE:
        return "gas_reactive";
    case SWG_resource_classes::GAS_REACTIVE_KNOWN:
        return "gas_reactive_known";
    case SWG_resource_classes::GEMSTONE:
        return "gemstone";
    case SWG_resource_classes::GEMSTONE_ARMOPHOUS:
        return "gemstone_armophous";
    case SWG_resource_classes::GEMSTONE_CRYSTALLINE:
        return "gemstone_crystalline";
    case SWG_resource_classes::HIDE:
        return "hide";
    case SWG_resource_classes::HIDE_BRISTLEY:
        return "hide_bristley";
    case SWG_resource_classes::HIDE_LEATHERY:
        return "hide_leathery";
    case SWG_resource_classes::HIDE_SCALEY:
        return "hide_scaley";
    case SWG_resource_classes::HIDE_WOOLY:
        return "hide_wooly";
    case SWG_resource_classes::INORGANIC:
        return "inorganic";
    case SWG_resource_classes::IRON:
        return "iron";
    case SWG_resource_classes::MEAT:
        return "meat";
    case SWG_resource_classes::MEAT_AVIAN:
        return "meat_avian";
    case SWG_resource_classes::MEAT_CARNIVORE:
        return "meat_carnivore";
    case SWG_resource_classes::MEAT_DOMESTICATED:
        return "meat_domesticated";
    case SWG_resource_classes::MEAT_EGG:
        return "meat_egg";
    case SWG_resource_classes::MEAT_HERBIVORE:
        return "meat_herbivore";
    case SWG_resource_classes::MEAT_INSECT:
        return "meat_insect";
    case SWG_resource_classes::MEAT_REPTILLIAN:
        return "meat_reptillian";
    case SWG_resource_classes::MEAT_WILD:
        return "meat_wild";
    case SWG_resource_classes::METAL:
        return "metal";
    case SWG_resource_classes::METAL_FERROUS:
        return "metal_ferrous";
    case SWG_resource_classes::METAL_NONFERROUS:
        return "metal_nonferrous";
    case SWG_resource_classes::MILK:
        return "milk";
    case SWG_resource_classes::MILK_DOMESTICATED:
        return "milk_domesticated";
    case SWG_resource_classes::MILK_WILD:
        return "milk_wild";
    case SWG_resource_classes::MINERAL:
        return "mineral";
    case SWG_resource_classes::OATS:
        return "oats";
    case SWG_resource_classes::OATS_DOMESTICATED:
        return "oats_domesticated";
    case SWG_resource_classes::OATS_WILD:
        return "oats_wild";
    case SWG_resource_classes::ORE:
        return "ore";
    case SWG_resource_classes::ORE_CARBONATE:
        return "ore_carbonate";
    case SWG_resource_classes::ORE_EXTRUSIVE:
        return "ore_extrusive";
    case SWG_resource_classes::ORE_IGNEOUS:
        return "ore_igneous";
    case SWG_resource_classes::ORE_INTRUSIVE:
        return "ore_intrusive";
    case SWG_resource_classes::ORE_SEDIMENTARY:
        return "ore_sedimentary";
    case SWG_resource_classes::ORE_SILICLASTIC:
        return "ore_siliclastic";
    case SWG_resource_classes::ORGANIC:
        return "organic";
    case SWG_resource_classes::PETROCHEM_INERT:
        return "petrochem_inert";
    case SWG_resource_classes::RADIOACTIVE:
        return "radioactive";
    case SWG_resource_classes::RADIOACTIVE_KNOWN:
        return "radioactive_known";
    case SWG_resource_classes::RICE:
        return "rice";
    case SWG_resource_classes::RICE_DOMESTICATED:
        return "rice_domesticated";
    case SWG_resource_classes::RICE_WILD:
        return "rice_wild";
    case SWG_resource_classes::SEAFOOD:
        return "seafood";
    case SWG_resource_classes::SEAFOOD_CRUSTACEAN:
        return "seafood_crustacean";
    case SWG_resource_classes::SEAFOOD_FISH:
        return "seafood_fish";
    case SWG_resource_classes::SEAFOOD_MOLLUSK:
        return "seafood_mollusk";
    case SWG_resource_classes::SEEDS:
        return "seeds";
    case SWG_resource_classes::SOFTWOOD:
        return "softwood";
    case SWG_resource_classes::SOFTWOOD_EVERGREEN:
        return "softwood_evergreen";
    case SWG_resource_classes::STEEL:
        return "steel";
    case SWG_resource_classes::VEGETABLE:
        return "vegetable";
    case SWG_resource_classes::VEGETABLE_BEANS:
        return "vegetable_beans";
    case SWG_resource_classes::VEGETABLE_FUNGI:
        return "vegetable_fungi";
    case SWG_resource_classes::VEGETABLE_GREENS:
        return "vegetable_greens";
    case SWG_resource_classes::VEGETABLE_TUBERS:
        return "vegetable_tubers";
    case SWG_resource_classes::WATER:
        return "water";
    case SWG_resource_classes::WHEAT:
        return "wheat";
    case SWG_resource_classes::WHEAT_DOMESTICATED:
        return "wheat_domesticated";
    case SWG_resource_classes::WHEAT_WILD:
        return "wheat_wild";
    case SWG_resource_classes::WOOD:
        return "wood";
    case SWG_resource_classes::WOOD_DECIDUOUS:
        return "wood_deciduous";
    default:
        return "bad SWG_resource_classes enum";
    }
}

std::string SWGResourceClassStringPretty(SWG_resource_classes e)
{
    switch (e)
    {
    case SWG_resource_classes::ALUMINUM:
        return "Aluminum";
    case SWG_resource_classes::BONE:
        return "Bone";
    case SWG_resource_classes::BONE_AVIAN:
        return "Avian bone";
    case SWG_resource_classes::BONE_HORN:
        return "Horn";
    case SWG_resource_classes::CEREAL:
        return "Cereal";
    case SWG_resource_classes::CHEMICAL:
        return "Chemical";
    case SWG_resource_classes::COPPER:
        return "Copper";
    case SWG_resource_classes::CORN:
        return "Corn";
    case SWG_resource_classes::CORN_DOMESTICATED:
        return "Domesticated Corn";
    case SWG_resource_classes::CORN_WILD:
        return "Wild Corn";
    case SWG_resource_classes::CREATURE_FOOD:
        return "Creature Food";
    case SWG_resource_classes::CREATURE_RESOURCES:
        return "Creature Resources";
    case SWG_resource_classes::CREATURE_STRUCTURAL:
        return "Creature Structural";
    case SWG_resource_classes::ENERGY:
        return "Energy";
    case SWG_resource_classes::ENERGY_RENEWABLE:
        return "Renewable energy";
    case SWG_resource_classes::ENERGY_RENEWABLE_SITE_LIMITED:
        return "Site-Restricted Renewable Energy";
    case SWG_resource_classes::ENERGY_RENEWABLE_UNLIMITED:
        return "Non Site-Restricted Renewable Energy";
    case SWG_resource_classes::ENERGY_RENEWABLE_UNLIMITED_SOLAR:
        return "Solar Energy";
    case SWG_resource_classes::ENERGY_RENEWABLE_UNLIMITED_WIND:
        return "Wind Energy";
    case SWG_resource_classes::FIBERPLAST:
        return "Fiberplast";
    case SWG_resource_classes::FLORA_FOOD:
        return "Flora Food";
    case SWG_resource_classes::FLORA_RESOURCES:
        return "Flora Resources";
    case SWG_resource_classes::FLORA_STRUCTURAL:
        return "Flora Structural";
    case SWG_resource_classes::FRUIT:
        return "Fruit";
    case SWG_resource_classes::FRUIT_BERRIES:
        return "Berries";
    case SWG_resource_classes::FRUIT_FLOWERS:
        return "Flowers";
    case SWG_resource_classes::FRUIT_FRUITS:
        return "Fruits";
    case SWG_resource_classes::FUEL_PETROCHEM_LIQUID:
        return "Liquid Petrochem Fuel";
    case SWG_resource_classes::FUEL_PETROCHEM_LIQUID_KNOWN:
        return "Known Liquid Petrochem Fuel";
    case SWG_resource_classes::FUEL_PETROCHEM_SOLID:
        return "Solid Petrochem Fuel";
    case SWG_resource_classes::FUEL_PETROCHEM_SOLID_KNOWN:
        return "Known Solid Petrochem Fuel";
    case SWG_resource_classes::GAS:
        return "Gas";
    case SWG_resource_classes::GAS_INERT:
        return "Inert Gas";
    case SWG_resource_classes::GAS_INERT_KNOWN:
        return "Known Inert Gas";
    case SWG_resource_classes::GAS_REACTIVE:
        return "Reactive Gas";
    case SWG_resource_classes::GAS_REACTIVE_KNOWN:
        return "Known Reactive Gas";
    case SWG_resource_classes::GEMSTONE:
        return "Gemstone";
    case SWG_resource_classes::GEMSTONE_ARMOPHOUS:
        return "Amorphous Gemstone";
    case SWG_resource_classes::GEMSTONE_CRYSTALLINE:
        return "Crystalline Gemstone";
    case SWG_resource_classes::HIDE:
        return "Hide";
    case SWG_resource_classes::HIDE_BRISTLEY:
        return "Bristley Hide";
    case SWG_resource_classes::HIDE_LEATHERY:
        return "Leathery Hide";
    case SWG_resource_classes::HIDE_SCALEY:
        return "Scaley Hide";
    case SWG_resource_classes::HIDE_WOOLY:
        return "Wooly Hide";
    case SWG_resource_classes::INORGANIC:
        return "Inorganic";
    case SWG_resource_classes::IRON:
        return "Iron";
    case SWG_resource_classes::MEAT:
        return "Meat";
    case SWG_resource_classes::MEAT_AVIAN:
        return "Avian Meat";
    case SWG_resource_classes::MEAT_CARNIVORE:
        return "Carnivore Meat";
    case SWG_resource_classes::MEAT_DOMESTICATED:
        return "Domesticated Meat";
    case SWG_resource_classes::MEAT_EGG:
        return "Egg";
    case SWG_resource_classes::MEAT_HERBIVORE:
        return "Herbivore Meat";
    case SWG_resource_classes::MEAT_INSECT:
        return "Insect Meat";
    case SWG_resource_classes::MEAT_REPTILLIAN:
        return "Reptillian Meat";
    case SWG_resource_classes::MEAT_WILD:
        return "Wild Meat";
    case SWG_resource_classes::METAL:
        return "Metal";
    case SWG_resource_classes::METAL_FERROUS:
        return "Ferrous Metal";
    case SWG_resource_classes::METAL_NONFERROUS:
        return "Non-Ferrous Metal";
    case SWG_resource_classes::MILK:
        return "Milk";
    case SWG_resource_classes::MILK_DOMESTICATED:
        return "Domesticated Milk";
    case SWG_resource_classes::MILK_WILD:
        return "Wild Milk";
    case SWG_resource_classes::MINERAL:
        return "Mineral";
    case SWG_resource_classes::OATS:
        return "Oats";
    case SWG_resource_classes::OATS_DOMESTICATED:
        return "Domesticated Oats";
    case SWG_resource_classes::OATS_WILD:
        return "Wild Oats";
    case SWG_resource_classes::ORE:
        return "Low-Grade Ore";
    case SWG_resource_classes::ORE_CARBONATE:
        return "Carbonate Ore";
    case SWG_resource_classes::ORE_EXTRUSIVE:
        return "Extrusive Ore";
    case SWG_resource_classes::ORE_IGNEOUS:
        return "Igneous Ore";
    case SWG_resource_classes::ORE_INTRUSIVE:
        return "Intrusive Ore";
    case SWG_resource_classes::ORE_SEDIMENTARY:
        return "Sedimentary Ore";
    case SWG_resource_classes::ORE_SILICLASTIC:
        return "Siliclastic Ore";
    case SWG_resource_classes::ORGANIC:
        return "Organic";
    case SWG_resource_classes::PETROCHEM_INERT:
        return "Inert Petrochemical";
    case SWG_resource_classes::RADIOACTIVE:
        return "Radioactive";
    case SWG_resource_classes::RADIOACTIVE_KNOWN:
        return "Known Radioactive";
    case SWG_resource_classes::RICE:
        return "Rice";
    case SWG_resource_classes::RICE_DOMESTICATED:
        return "Domesticated Rice";
    case SWG_resource_classes::RICE_WILD:
        return "Wild Rice";
    case SWG_resource_classes::SEAFOOD:
        return "Seafood";
    case SWG_resource_classes::SEAFOOD_CRUSTACEAN:
        return "Crustacean";
    case SWG_resource_classes::SEAFOOD_FISH:
        return "Fish";
    case SWG_resource_classes::SEAFOOD_MOLLUSK:
        return "Mollusk";
    case SWG_resource_classes::SEEDS:
        return "Seeds";
    case SWG_resource_classes::SOFTWOOD:
        return "Soft Wood";
    case SWG_resource_classes::SOFTWOOD_EVERGREEN:
        return "Evergreen Soft Wood";
    case SWG_resource_classes::STEEL:
        return "Steel";
    case SWG_resource_classes::VEGETABLE:
        return "Vegetables";
    case SWG_resource_classes::VEGETABLE_BEANS:
        return "Beans";
    case SWG_resource_classes::VEGETABLE_FUNGI:
        return "Fungi";
    case SWG_resource_classes::VEGETABLE_GREENS:
        return "Greens";
    case SWG_resource_classes::VEGETABLE_TUBERS:
        return "Tubers";
    case SWG_resource_classes::WATER:
        return "Water";
    case SWG_resource_classes::WHEAT:
        return "Wheat";
    case SWG_resource_classes::WHEAT_DOMESTICATED:
        return "Domesticated Wheat";
    case SWG_resource_classes::WHEAT_WILD:
        return "Wild Wheat";
    case SWG_resource_classes::WOOD:
        return "Wood";
    case SWG_resource_classes::WOOD_DECIDUOUS:
        return "Hard Wood";
    default:
        return "bad SWG_resource_classes enum";
    }
}


std::string SWGResourceTypeString(SWG_resource_types e)
{
    switch (e)
    {
    case SWG_resource_types::ALUMINUM_AGRINIUM:
        return "aluminum_agrinium";
    case SWG_resource_types::ALUMINUM_CHROMIUM:
        return "aluminum_chromium";
    case SWG_resource_types::ALUMINUM_DURALUMIN:
        return "aluminum_duralumin";
    case SWG_resource_types::ALUMINUM_LINKSTEEL:
        return "aluminum_linksteel";
    case SWG_resource_types::ALUMINUM_PEROVSKITIC:
        return "aluminum_perovskitic";
    case SWG_resource_types::ALUMINUM_PHRIK:
        return "aluminum_phrik";
    case SWG_resource_types::ALUMINUM_TITANIUM:
        return "aluminum_titanium";
    case SWG_resource_types::ARMOPHOUS_BALTARAN:
        return "armophous_baltaran";
    case SWG_resource_types::ARMOPHOUS_BARADIUM:
        return "armophous_baradium";
    case SWG_resource_types::ARMOPHOUS_BOSPRIDIUM:
        return "armophous_bospridium";
    case SWG_resource_types::ARMOPHOUS_PLEXITE:
        return "armophous_plexite";
    case SWG_resource_types::ARMOPHOUS_REGVIS:
        return "armophous_regvis";
    case SWG_resource_types::ARMOPHOUS_RUDIC:
        return "armophous_rudic";
    case SWG_resource_types::ARMOPHOUS_RYLL:
        return "armophous_ryll";
    case SWG_resource_types::ARMOPHOUS_SEDRELLIUM:
        return "armophous_sedrellium";
    case SWG_resource_types::ARMOPHOUS_STYGIUM:
        return "armophous_stygium";
    case SWG_resource_types::ARMOPHOUS_VENDUSII:
        return "armophous_vendusii";
    case SWG_resource_types::BONE_AVIAN_CORELLIA:
        return "bone_avian_corellia";
    case SWG_resource_types::BONE_AVIAN_DANTOOINE:
        return "bone_avian_dantooine";
    case SWG_resource_types::BONE_AVIAN_DATHOMIR:
        return "bone_avian_dathomir";
    case SWG_resource_types::BONE_AVIAN_ENDOR:
        return "bone_avian_endor";
    case SWG_resource_types::BONE_AVIAN_LOK:
        return "bone_avian_lok";
    case SWG_resource_types::BONE_AVIAN_NABOO:
        return "bone_avian_naboo";
    case SWG_resource_types::BONE_AVIAN_RORI:
        return "bone_avian_rori";
    case SWG_resource_types::BONE_AVIAN_TALUS:
        return "bone_avian_talus";
    case SWG_resource_types::BONE_AVIAN_TATOOINE:
        return "bone_avian_tatooine";
    case SWG_resource_types::BONE_AVIAN_YAVIN4:
        return "bone_avian_yavin4";
    case SWG_resource_types::BONE_HORN_CORELLIA:
        return "bone_horn_corellia";
    case SWG_resource_types::BONE_HORN_DANTOOINE:
        return "bone_horn_dantooine";
    case SWG_resource_types::BONE_HORN_DATHOMIR:
        return "bone_horn_dathomir";
    case SWG_resource_types::BONE_HORN_ENDOR:
        return "bone_horn_endor";
    case SWG_resource_types::BONE_HORN_LOK:
        return "bone_horn_lok";
    case SWG_resource_types::BONE_HORN_NABOO:
        return "bone_horn_naboo";
    case SWG_resource_types::BONE_HORN_RORI:
        return "bone_horn_rori";
    case SWG_resource_types::BONE_HORN_TALUS:
        return "bone_horn_talus";
    case SWG_resource_types::BONE_HORN_TATOOINE:
        return "bone_horn_tatooine";
    case SWG_resource_types::BONE_HORN_YAVIN4:
        return "bone_horn_yavin4";
    case SWG_resource_types::BONE_MAMMAL_CORELLIA:
        return "bone_mammal_corellia";
    case SWG_resource_types::BONE_MAMMAL_DANTOOINE:
        return "bone_mammal_dantooine";
    case SWG_resource_types::BONE_MAMMAL_DATHOMIR:
        return "bone_mammal_dathomir";
    case SWG_resource_types::BONE_MAMMAL_ENDOR:
        return "bone_mammal_endor";
    case SWG_resource_types::BONE_MAMMAL_LOK:
        return "bone_mammal_lok";
    case SWG_resource_types::BONE_MAMMAL_NABOO:
        return "bone_mammal_naboo";
    case SWG_resource_types::BONE_MAMMAL_RORI:
        return "bone_mammal_rori";
    case SWG_resource_types::BONE_MAMMAL_TALUS:
        return "bone_mammal_talus";
    case SWG_resource_types::BONE_MAMMAL_TATOOINE:
        return "bone_mammal_tatooine";
    case SWG_resource_types::BONE_MAMMAL_YAVIN4:
        return "bone_mammal_yavin4";
    case SWG_resource_types::COPPER_BEYRLLIUS:
        return "copper_beyrllius";
    case SWG_resource_types::COPPER_BOROCARBITIC:
        return "copper_borocarbitic";
    case SWG_resource_types::COPPER_CODOAN:
        return "copper_codoan";
    case SWG_resource_types::COPPER_DESH:
        return "copper_desh";
    case SWG_resource_types::COPPER_DIATIUM:
        return "copper_diatium";
    case SWG_resource_types::COPPER_KELSH:
        return "copper_kelsh";
    case SWG_resource_types::COPPER_MYTHRA:
        return "copper_mythra";
    case SWG_resource_types::COPPER_PLATINITE:
        return "copper_platinite";
    case SWG_resource_types::COPPER_POLYSTEEL:
        return "copper_polysteel";
    case SWG_resource_types::COPPER_THALLIUM:
        return "copper_thallium";
    case SWG_resource_types::CORN_DOMESTICATED_CORELLIA:
        return "corn_domesticated_corellia";
    case SWG_resource_types::CORN_DOMESTICATED_DANTOOINE:
        return "corn_domesticated_dantooine";
    case SWG_resource_types::CORN_DOMESTICATED_DATHOMIR:
        return "corn_domesticated_dathomir";
    case SWG_resource_types::CORN_DOMESTICATED_ENDOR:
        return "corn_domesticated_endor";
    case SWG_resource_types::CORN_DOMESTICATED_LOK:
        return "corn_domesticated_lok";
    case SWG_resource_types::CORN_DOMESTICATED_NABOO:
        return "corn_domesticated_naboo";
    case SWG_resource_types::CORN_DOMESTICATED_RORI:
        return "corn_domesticated_rori";
    case SWG_resource_types::CORN_DOMESTICATED_TALUS:
        return "corn_domesticated_talus";
    case SWG_resource_types::CORN_DOMESTICATED_TATOOINE:
        return "corn_domesticated_tatooine";
    case SWG_resource_types::CORN_DOMESTICATED_YAVIN4:
        return "corn_domesticated_yavin4";
    case SWG_resource_types::CORN_WILD_CORELLIA:
        return "corn_wild_corellia";
    case SWG_resource_types::CORN_WILD_DANTOOINE:
        return "corn_wild_dantooine";
    case SWG_resource_types::CORN_WILD_DATHOMIR:
        return "corn_wild_dathomir";
    case SWG_resource_types::CORN_WILD_ENDOR:
        return "corn_wild_endor";
    case SWG_resource_types::CORN_WILD_LOK:
        return "corn_wild_lok";
    case SWG_resource_types::CORN_WILD_NABOO:
        return "corn_wild_naboo";
    case SWG_resource_types::CORN_WILD_RORI:
        return "corn_wild_rori";
    case SWG_resource_types::CORN_WILD_TALUS:
        return "corn_wild_talus";
    case SWG_resource_types::CORN_WILD_TATOOINE:
        return "corn_wild_tatooine";
    case SWG_resource_types::CORN_WILD_YAVIN4:
        return "corn_wild_yavin4";
    case SWG_resource_types::CRYSTALLINE_BYROTHSIS:
        return "crystalline_byrothsis";
    case SWG_resource_types::CRYSTALLINE_GALLINORIAN:
        return "crystalline_gallinorian";
    case SWG_resource_types::CRYSTALLINE_GREEN_DIAMOND:
        return "crystalline_green_diamond";
    case SWG_resource_types::CRYSTALLINE_KEROL_FIREGEM:
        return "crystalline_kerol_firegem";
    case SWG_resource_types::CRYSTALLINE_LABOI_MINERAL_CRYSTAL:
        return "crystalline_laboi_mineral_crystal";
    case SWG_resource_types::CRYSTALLINE_SEAFAH_JEWEL:
        return "crystalline_seafah_jewel";
    case SWG_resource_types::CRYSTALLINE_SORMAHIL_FIREGEM:
        return "crystalline_sormahil_firegem";
    case SWG_resource_types::CRYSTALLINE_VERTEX:
        return "crystalline_vertex";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_GEOTHERMAL_CORELLIA:
        return "energy_renewable_site_limited_geothermal_corellia";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_GEOTHERMAL_DANTOOINE:
        return "energy_renewable_site_limited_geothermal_dantooine";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_GEOTHERMAL_DATHOMIR:
        return "energy_renewable_site_limited_geothermal_dathomir";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_GEOTHERMAL_ENDOR:
        return "energy_renewable_site_limited_geothermal_endor";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_GEOTHERMAL_LOK:
        return "energy_renewable_site_limited_geothermal_lok";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_GEOTHERMAL_NABOO:
        return "energy_renewable_site_limited_geothermal_naboo";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_GEOTHERMAL_RORI:
        return "energy_renewable_site_limited_geothermal_rori";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_GEOTHERMAL_TALUS:
        return "energy_renewable_site_limited_geothermal_talus";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_GEOTHERMAL_TATOOINE:
        return "energy_renewable_site_limited_geothermal_tatooine";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_GEOTHERMAL_YAVIN4:
        return "energy_renewable_site_limited_geothermal_yavin4";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_HYDRON3_CORELLIA:
        return "energy_renewable_site_limited_hydron3_corellia";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_HYDRON3_DANTOOINE:
        return "energy_renewable_site_limited_hydron3_dantooine";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_HYDRON3_DATHOMIR:
        return "energy_renewable_site_limited_hydron3_dathomir";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_HYDRON3_ENDOR:
        return "energy_renewable_site_limited_hydron3_endor";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_HYDRON3_LOK:
        return "energy_renewable_site_limited_hydron3_lok";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_HYDRON3_NABOO:
        return "energy_renewable_site_limited_hydron3_naboo";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_HYDRON3_RORI:
        return "energy_renewable_site_limited_hydron3_rori";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_HYDRON3_TALUS:
        return "energy_renewable_site_limited_hydron3_talus";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_HYDRON3_TATOOINE:
        return "energy_renewable_site_limited_hydron3_tatooine";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_HYDRON3_YAVIN4:
        return "energy_renewable_site_limited_hydron3_yavin4";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_TIDAL_CORELLIA:
        return "energy_renewable_site_limited_tidal_corellia";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_TIDAL_DANTOOINE:
        return "energy_renewable_site_limited_tidal_dantooine";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_TIDAL_DATHOMIR:
        return "energy_renewable_site_limited_tidal_dathomir";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_TIDAL_ENDOR:
        return "energy_renewable_site_limited_tidal_endor";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_TIDAL_LOK:
        return "energy_renewable_site_limited_tidal_lok";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_TIDAL_NABOO:
        return "energy_renewable_site_limited_tidal_naboo";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_TIDAL_RORI:
        return "energy_renewable_site_limited_tidal_rori";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_TIDAL_TALUS:
        return "energy_renewable_site_limited_tidal_talus";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_TIDAL_TATOOINE:
        return "energy_renewable_site_limited_tidal_tatooine";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_TIDAL_YAVIN4:
        return "energy_renewable_site_limited_tidal_yavin4";
    case SWG_resource_types::ENERGY_RENEWABLE_UNLIMITED_SOLAR_CORELLIA:
        return "energy_renewable_unlimited_solar_corellia";
    case SWG_resource_types::ENERGY_RENEWABLE_UNLIMITED_SOLAR_DANTOOINE:
        return "energy_renewable_unlimited_solar_dantooine";
    case SWG_resource_types::ENERGY_RENEWABLE_UNLIMITED_SOLAR_DATHOMIR:
        return "energy_renewable_unlimited_solar_dathomir";
    case SWG_resource_types::ENERGY_RENEWABLE_UNLIMITED_SOLAR_ENDOR:
        return "energy_renewable_unlimited_solar_endor";
    case SWG_resource_types::ENERGY_RENEWABLE_UNLIMITED_SOLAR_LOK:
        return "energy_renewable_unlimited_solar_lok";
    case SWG_resource_types::ENERGY_RENEWABLE_UNLIMITED_SOLAR_NABOO:
        return "energy_renewable_unlimited_solar_naboo";
    case SWG_resource_types::ENERGY_RENEWABLE_UNLIMITED_SOLAR_RORI:
        return "energy_renewable_unlimited_solar_rori";
    case SWG_resource_types::ENERGY_RENEWABLE_UNLIMITED_SOLAR_TALUS:
        return "energy_renewable_unlimited_solar_talus";
    case SWG_resource_types::ENERGY_RENEWABLE_UNLIMITED_SOLAR_TATOOINE:
        return "energy_renewable_unlimited_solar_tatooine";
    case SWG_resource_types::ENERGY_RENEWABLE_UNLIMITED_SOLAR_YAVIN4:
        return "energy_renewable_unlimited_solar_yavin4";
    case SWG_resource_types::ENERGY_RENEWABLE_UNLIMITED_WIND_CORELLIA:
        return "energy_renewable_unlimited_wind_corellia";
    case SWG_resource_types::ENERGY_RENEWABLE_UNLIMITED_WIND_DANTOOINE:
        return "energy_renewable_unlimited_wind_dantooine";
    case SWG_resource_types::ENERGY_RENEWABLE_UNLIMITED_WIND_DATHOMIR:
        return "energy_renewable_unlimited_wind_dathomir";
    case SWG_resource_types::ENERGY_RENEWABLE_UNLIMITED_WIND_ENDOR:
        return "energy_renewable_unlimited_wind_endor";
    case SWG_resource_types::ENERGY_RENEWABLE_UNLIMITED_WIND_LOK:
        return "energy_renewable_unlimited_wind_lok";
    case SWG_resource_types::ENERGY_RENEWABLE_UNLIMITED_WIND_NABOO:
        return "energy_renewable_unlimited_wind_naboo";
    case SWG_resource_types::ENERGY_RENEWABLE_UNLIMITED_WIND_RORI:
        return "energy_renewable_unlimited_wind_rori";
    case SWG_resource_types::ENERGY_RENEWABLE_UNLIMITED_WIND_TALUS:
        return "energy_renewable_unlimited_wind_talus";
    case SWG_resource_types::ENERGY_RENEWABLE_UNLIMITED_WIND_TATOOINE:
        return "energy_renewable_unlimited_wind_tatooine";
    case SWG_resource_types::ENERGY_RENEWABLE_UNLIMITED_WIND_YAVIN4:
        return "energy_renewable_unlimited_wind_yavin4";
    case SWG_resource_types::FIBERPLAST_CORELLIA:
        return "fiberplast_corellia";
    case SWG_resource_types::FIBERPLAST_DANTOOINE:
        return "fiberplast_dantooine";
    case SWG_resource_types::FIBERPLAST_DATHOMIR:
        return "fiberplast_dathomir";
    case SWG_resource_types::FIBERPLAST_ENDOR:
        return "fiberplast_endor";
    case SWG_resource_types::FIBERPLAST_GRAVITONIC:
        return "fiberplast_gravitonic";
    case SWG_resource_types::FIBERPLAST_LOK:
        return "fiberplast_lok";
    case SWG_resource_types::FIBERPLAST_NABOO:
        return "fiberplast_naboo";
    case SWG_resource_types::FIBERPLAST_RORI:
        return "fiberplast_rori";
    case SWG_resource_types::FIBERPLAST_TALUS:
        return "fiberplast_talus";
    case SWG_resource_types::FIBERPLAST_TATOOINE:
        return "fiberplast_tatooine";
    case SWG_resource_types::FIBERPLAST_YAVIN4:
        return "fiberplast_yavin4";
    case SWG_resource_types::FRUIT_BERRIES_CORELLIA:
        return "fruit_berries_corellia";
    case SWG_resource_types::FRUIT_BERRIES_DANTOOINE:
        return "fruit_berries_dantooine";
    case SWG_resource_types::FRUIT_BERRIES_DATHOMIR:
        return "fruit_berries_dathomir";
    case SWG_resource_types::FRUIT_BERRIES_ENDOR:
        return "fruit_berries_endor";
    case SWG_resource_types::FRUIT_BERRIES_LOK:
        return "fruit_berries_lok";
    case SWG_resource_types::FRUIT_BERRIES_NABOO:
        return "fruit_berries_naboo";
    case SWG_resource_types::FRUIT_BERRIES_RORI:
        return "fruit_berries_rori";
    case SWG_resource_types::FRUIT_BERRIES_TALUS:
        return "fruit_berries_talus";
    case SWG_resource_types::FRUIT_BERRIES_TATOOINE:
        return "fruit_berries_tatooine";
    case SWG_resource_types::FRUIT_BERRIES_YAVIN4:
        return "fruit_berries_yavin4";
    case SWG_resource_types::FRUIT_FLOWERS_CORELLIA:
        return "fruit_flowers_corellia";
    case SWG_resource_types::FRUIT_FLOWERS_DANTOOINE:
        return "fruit_flowers_dantooine";
    case SWG_resource_types::FRUIT_FLOWERS_DATHOMIR:
        return "fruit_flowers_dathomir";
    case SWG_resource_types::FRUIT_FLOWERS_ENDOR:
        return "fruit_flowers_endor";
    case SWG_resource_types::FRUIT_FLOWERS_LOK:
        return "fruit_flowers_lok";
    case SWG_resource_types::FRUIT_FLOWERS_NABOO:
        return "fruit_flowers_naboo";
    case SWG_resource_types::FRUIT_FLOWERS_RORI:
        return "fruit_flowers_rori";
    case SWG_resource_types::FRUIT_FLOWERS_TALUS:
        return "fruit_flowers_talus";
    case SWG_resource_types::FRUIT_FLOWERS_TATOOINE:
        return "fruit_flowers_tatooine";
    case SWG_resource_types::FRUIT_FLOWERS_YAVIN4:
        return "fruit_flowers_yavin4";
    case SWG_resource_types::FRUIT_FRUITS_CORELLIA:
        return "fruit_fruits_corellia";
    case SWG_resource_types::FRUIT_FRUITS_DANTOOINE:
        return "fruit_fruits_dantooine";
    case SWG_resource_types::FRUIT_FRUITS_DATHOMIR:
        return "fruit_fruits_dathomir";
    case SWG_resource_types::FRUIT_FRUITS_ENDOR:
        return "fruit_fruits_endor";
    case SWG_resource_types::FRUIT_FRUITS_LOK:
        return "fruit_fruits_lok";
    case SWG_resource_types::FRUIT_FRUITS_NABOO:
        return "fruit_fruits_naboo";
    case SWG_resource_types::FRUIT_FRUITS_RORI:
        return "fruit_fruits_rori";
    case SWG_resource_types::FRUIT_FRUITS_TALUS:
        return "fruit_fruits_talus";
    case SWG_resource_types::FRUIT_FRUITS_TATOOINE:
        return "fruit_fruits_tatooine";
    case SWG_resource_types::FRUIT_FRUITS_YAVIN4:
        return "fruit_fruits_yavin4";
    case SWG_resource_types::GAS_INERT_BILAL:
        return "gas_inert_bilal";
    case SWG_resource_types::GAS_INERT_CORTHEL:
        return "gas_inert_corthel";
    case SWG_resource_types::GAS_INERT_CULSION:
        return "gas_inert_culsion";
    case SWG_resource_types::GAS_INERT_DIOXIS:
        return "gas_inert_dioxis";
    case SWG_resource_types::GAS_INERT_HURLOTHROMBIC:
        return "gas_inert_hurlothrombic";
    case SWG_resource_types::GAS_INERT_HYDRON3:
        return "gas_inert_hydron3";
    case SWG_resource_types::GAS_INERT_KAYLON:
        return "gas_inert_kaylon";
    case SWG_resource_types::GAS_INERT_KORFAISE:
        return "gas_inert_korfaise";
    case SWG_resource_types::GAS_INERT_MALIUM:
        return "gas_inert_malium";
    case SWG_resource_types::GAS_INERT_METHANAGEN:
        return "gas_inert_methanagen";
    case SWG_resource_types::GAS_INERT_MIRTH:
        return "gas_inert_mirth";
    case SWG_resource_types::GAS_INERT_OBAH:
        return "gas_inert_obah";
    case SWG_resource_types::GAS_INERT_RETHIN:
        return "gas_inert_rethin";
    case SWG_resource_types::GAS_INERT_UNKNOWN:
        return "gas_inert_unknown";
    case SWG_resource_types::GAS_REACTIVE_ELETON:
        return "gas_reactive_eleton";
    case SWG_resource_types::GAS_REACTIVE_IROLUNN:
        return "gas_reactive_irolunn";
    case SWG_resource_types::GAS_REACTIVE_METHANE:
        return "gas_reactive_methane";
    case SWG_resource_types::GAS_REACTIVE_ORGANOMETALLIC:
        return "gas_reactive_organometallic";
    case SWG_resource_types::GAS_REACTIVE_ORVETH:
        return "gas_reactive_orveth";
    case SWG_resource_types::GAS_REACTIVE_SIG:
        return "gas_reactive_sig";
    case SWG_resource_types::GAS_REACTIVE_SKEVON:
        return "gas_reactive_skevon";
    case SWG_resource_types::GAS_REACTIVE_TOLIUM:
        return "gas_reactive_tolium";
    case SWG_resource_types::GAS_REACTIVE_UNKNOWN:
        return "gas_reactive_unknown";
    case SWG_resource_types::GEMSTONE_UNKNOWN:
        return "gemstone_unknown";
    case SWG_resource_types::HIDE_BRISTLEY_CORELLIA:
        return "hide_bristley_corellia";
    case SWG_resource_types::HIDE_BRISTLEY_DANTOOINE:
        return "hide_bristley_dantooine";
    case SWG_resource_types::HIDE_BRISTLEY_DATHOMIR:
        return "hide_bristley_dathomir";
    case SWG_resource_types::HIDE_BRISTLEY_ENDOR:
        return "hide_bristley_endor";
    case SWG_resource_types::HIDE_BRISTLEY_LOK:
        return "hide_bristley_lok";
    case SWG_resource_types::HIDE_BRISTLEY_NABOO:
        return "hide_bristley_naboo";
    case SWG_resource_types::HIDE_BRISTLEY_RORI:
        return "hide_bristley_rori";
    case SWG_resource_types::HIDE_BRISTLEY_TALUS:
        return "hide_bristley_talus";
    case SWG_resource_types::HIDE_BRISTLEY_TATOOINE:
        return "hide_bristley_tatooine";
    case SWG_resource_types::HIDE_BRISTLEY_YAVIN4:
        return "hide_bristley_yavin4";
    case SWG_resource_types::HIDE_LEATHERY_CORELLIA:
        return "hide_leathery_corellia";
    case SWG_resource_types::HIDE_LEATHERY_DANTOOINE:
        return "hide_leathery_dantooine";
    case SWG_resource_types::HIDE_LEATHERY_DATHOMIR:
        return "hide_leathery_dathomir";
    case SWG_resource_types::HIDE_LEATHERY_ENDOR:
        return "hide_leathery_endor";
    case SWG_resource_types::HIDE_LEATHERY_LOK:
        return "hide_leathery_lok";
    case SWG_resource_types::HIDE_LEATHERY_NABOO:
        return "hide_leathery_naboo";
    case SWG_resource_types::HIDE_LEATHERY_RORI:
        return "hide_leathery_rori";
    case SWG_resource_types::HIDE_LEATHERY_TALUS:
        return "hide_leathery_talus";
    case SWG_resource_types::HIDE_LEATHERY_TATOOINE:
        return "hide_leathery_tatooine";
    case SWG_resource_types::HIDE_LEATHERY_YAVIN4:
        return "hide_leathery_yavin4";
    case SWG_resource_types::HIDE_SCALEY_CORELLIA:
        return "hide_scaley_corellia";
    case SWG_resource_types::HIDE_SCALEY_DANTOOINE:
        return "hide_scaley_dantooine";
    case SWG_resource_types::HIDE_SCALEY_DATHOMIR:
        return "hide_scaley_dathomir";
    case SWG_resource_types::HIDE_SCALEY_ENDOR:
        return "hide_scaley_endor";
    case SWG_resource_types::HIDE_SCALEY_LOK:
        return "hide_scaley_lok";
    case SWG_resource_types::HIDE_SCALEY_NABOO:
        return "hide_scaley_naboo";
    case SWG_resource_types::HIDE_SCALEY_RORI:
        return "hide_scaley_rori";
    case SWG_resource_types::HIDE_SCALEY_TALUS:
        return "hide_scaley_talus";
    case SWG_resource_types::HIDE_SCALEY_TATOOINE:
        return "hide_scaley_tatooine";
    case SWG_resource_types::HIDE_SCALEY_YAVIN4:
        return "hide_scaley_yavin4";
    case SWG_resource_types::HIDE_WOOLY_CORELLIA:
        return "hide_wooly_corellia";
    case SWG_resource_types::HIDE_WOOLY_DANTOOINE:
        return "hide_wooly_dantooine";
    case SWG_resource_types::HIDE_WOOLY_DATHOMIR:
        return "hide_wooly_dathomir";
    case SWG_resource_types::HIDE_WOOLY_ENDOR:
        return "hide_wooly_endor";
    case SWG_resource_types::HIDE_WOOLY_LOK:
        return "hide_wooly_lok";
    case SWG_resource_types::HIDE_WOOLY_NABOO:
        return "hide_wooly_naboo";
    case SWG_resource_types::HIDE_WOOLY_RORI:
        return "hide_wooly_rori";
    case SWG_resource_types::HIDE_WOOLY_TALUS:
        return "hide_wooly_talus";
    case SWG_resource_types::HIDE_WOOLY_TATOOINE:
        return "hide_wooly_tatooine";
    case SWG_resource_types::HIDE_WOOLY_YAVIN4:
        return "hide_wooly_yavin4";
    case SWG_resource_types::IRON_AXIDITE:
        return "iron_axidite";
    case SWG_resource_types::IRON_BRONZIUM:
        return "iron_bronzium";
    case SWG_resource_types::IRON_COLAT:
        return "iron_colat";
    case SWG_resource_types::IRON_DOLOVITE:
        return "iron_dolovite";
    case SWG_resource_types::IRON_DOONIUM:
        return "iron_doonium";
    case SWG_resource_types::IRON_KAMMRIS:
        return "iron_kammris";
    case SWG_resource_types::IRON_PLUMBUM:
        return "iron_plumbum";
    case SWG_resource_types::IRON_POLONIUM:
        return "iron_polonium";
    case SWG_resource_types::MEAT_AVIAN_CORELLIA:
        return "meat_avian_corellia";
    case SWG_resource_types::MEAT_AVIAN_DANTOOINE:
        return "meat_avian_dantooine";
    case SWG_resource_types::MEAT_AVIAN_DATHOMIR:
        return "meat_avian_dathomir";
    case SWG_resource_types::MEAT_AVIAN_ENDOR:
        return "meat_avian_endor";
    case SWG_resource_types::MEAT_AVIAN_LOK:
        return "meat_avian_lok";
    case SWG_resource_types::MEAT_AVIAN_NABOO:
        return "meat_avian_naboo";
    case SWG_resource_types::MEAT_AVIAN_RORI:
        return "meat_avian_rori";
    case SWG_resource_types::MEAT_AVIAN_TALUS:
        return "meat_avian_talus";
    case SWG_resource_types::MEAT_AVIAN_TATOOINE:
        return "meat_avian_tatooine";
    case SWG_resource_types::MEAT_AVIAN_YAVIN4:
        return "meat_avian_yavin4";
    case SWG_resource_types::MEAT_CARNIVORE_CORELLIA:
        return "meat_carnivore_corellia";
    case SWG_resource_types::MEAT_CARNIVORE_DANTOOINE:
        return "meat_carnivore_dantooine";
    case SWG_resource_types::MEAT_CARNIVORE_DATHOMIR:
        return "meat_carnivore_dathomir";
    case SWG_resource_types::MEAT_CARNIVORE_ENDOR:
        return "meat_carnivore_endor";
    case SWG_resource_types::MEAT_CARNIVORE_LOK:
        return "meat_carnivore_lok";
    case SWG_resource_types::MEAT_CARNIVORE_NABOO:
        return "meat_carnivore_naboo";
    case SWG_resource_types::MEAT_CARNIVORE_RORI:
        return "meat_carnivore_rori";
    case SWG_resource_types::MEAT_CARNIVORE_TALUS:
        return "meat_carnivore_talus";
    case SWG_resource_types::MEAT_CARNIVORE_TATOOINE:
        return "meat_carnivore_tatooine";
    case SWG_resource_types::MEAT_CARNIVORE_YAVIN4:
        return "meat_carnivore_yavin4";
    case SWG_resource_types::MEAT_DOMESTICATED_CORELLIA:
        return "meat_domesticated_corellia";
    case SWG_resource_types::MEAT_DOMESTICATED_DANTOOINE:
        return "meat_domesticated_dantooine";
    case SWG_resource_types::MEAT_DOMESTICATED_DATHOMIR:
        return "meat_domesticated_dathomir";
    case SWG_resource_types::MEAT_DOMESTICATED_ENDOR:
        return "meat_domesticated_endor";
    case SWG_resource_types::MEAT_DOMESTICATED_LOK:
        return "meat_domesticated_lok";
    case SWG_resource_types::MEAT_DOMESTICATED_NABOO:
        return "meat_domesticated_naboo";
    case SWG_resource_types::MEAT_DOMESTICATED_RORI:
        return "meat_domesticated_rori";
    case SWG_resource_types::MEAT_DOMESTICATED_TALUS:
        return "meat_domesticated_talus";
    case SWG_resource_types::MEAT_DOMESTICATED_TATOOINE:
        return "meat_domesticated_tatooine";
    case SWG_resource_types::MEAT_DOMESTICATED_YAVIN4:
        return "meat_domesticated_yavin4";
    case SWG_resource_types::MEAT_EGG_CORELLIA:
        return "meat_egg_corellia";
    case SWG_resource_types::MEAT_EGG_DANTOOINE:
        return "meat_egg_dantooine";
    case SWG_resource_types::MEAT_EGG_DATHOMIR:
        return "meat_egg_dathomir";
    case SWG_resource_types::MEAT_EGG_ENDOR:
        return "meat_egg_endor";
    case SWG_resource_types::MEAT_EGG_LOK:
        return "meat_egg_lok";
    case SWG_resource_types::MEAT_EGG_NABOO:
        return "meat_egg_naboo";
    case SWG_resource_types::MEAT_EGG_RORI:
        return "meat_egg_rori";
    case SWG_resource_types::MEAT_EGG_TALUS:
        return "meat_egg_talus";
    case SWG_resource_types::MEAT_EGG_TATOOINE:
        return "meat_egg_tatooine";
    case SWG_resource_types::MEAT_EGG_YAVIN4:
        return "meat_egg_yavin4";
    case SWG_resource_types::MEAT_HERBIVORE_CORELLIA:
        return "meat_herbivore_corellia";
    case SWG_resource_types::MEAT_HERBIVORE_DANTOOINE:
        return "meat_herbivore_dantooine";
    case SWG_resource_types::MEAT_HERBIVORE_DATHOMIR:
        return "meat_herbivore_dathomir";
    case SWG_resource_types::MEAT_HERBIVORE_ENDOR:
        return "meat_herbivore_endor";
    case SWG_resource_types::MEAT_HERBIVORE_LOK:
        return "meat_herbivore_lok";
    case SWG_resource_types::MEAT_HERBIVORE_NABOO:
        return "meat_herbivore_naboo";
    case SWG_resource_types::MEAT_HERBIVORE_RORI:
        return "meat_herbivore_rori";
    case SWG_resource_types::MEAT_HERBIVORE_TALUS:
        return "meat_herbivore_talus";
    case SWG_resource_types::MEAT_HERBIVORE_TATOOINE:
        return "meat_herbivore_tatooine";
    case SWG_resource_types::MEAT_HERBIVORE_YAVIN4:
        return "meat_herbivore_yavin4";
    case SWG_resource_types::MEAT_INSECT_CORELLIA:
        return "meat_insect_corellia";
    case SWG_resource_types::MEAT_INSECT_DANTOOINE:
        return "meat_insect_dantooine";
    case SWG_resource_types::MEAT_INSECT_DATHOMIR:
        return "meat_insect_dathomir";
    case SWG_resource_types::MEAT_INSECT_ENDOR:
        return "meat_insect_endor";
    case SWG_resource_types::MEAT_INSECT_LOK:
        return "meat_insect_lok";
    case SWG_resource_types::MEAT_INSECT_NABOO:
        return "meat_insect_naboo";
    case SWG_resource_types::MEAT_INSECT_RORI:
        return "meat_insect_rori";
    case SWG_resource_types::MEAT_INSECT_TALUS:
        return "meat_insect_talus";
    case SWG_resource_types::MEAT_INSECT_TATOOINE:
        return "meat_insect_tatooine";
    case SWG_resource_types::MEAT_INSECT_YAVIN4:
        return "meat_insect_yavin4";
    case SWG_resource_types::MEAT_REPTILIAN_CORELLIA:
        return "meat_reptilian_corellia";
    case SWG_resource_types::MEAT_REPTILIAN_DANTOOINE:
        return "meat_reptilian_dantooine";
    case SWG_resource_types::MEAT_REPTILIAN_DATHOMIR:
        return "meat_reptilian_dathomir";
    case SWG_resource_types::MEAT_REPTILIAN_ENDOR:
        return "meat_reptilian_endor";
    case SWG_resource_types::MEAT_REPTILIAN_LOK:
        return "meat_reptilian_lok";
    case SWG_resource_types::MEAT_REPTILIAN_NABOO:
        return "meat_reptilian_naboo";
    case SWG_resource_types::MEAT_REPTILIAN_RORI:
        return "meat_reptilian_rori";
    case SWG_resource_types::MEAT_REPTILIAN_TALUS:
        return "meat_reptilian_talus";
    case SWG_resource_types::MEAT_REPTILIAN_TATOOINE:
        return "meat_reptilian_tatooine";
    case SWG_resource_types::MEAT_REPTILIAN_YAVIN4:
        return "meat_reptilian_yavin4";
    case SWG_resource_types::MEAT_WILD_CORELLIA:
        return "meat_wild_corellia";
    case SWG_resource_types::MEAT_WILD_DANTOOINE:
        return "meat_wild_dantooine";
    case SWG_resource_types::MEAT_WILD_DATHOMIR:
        return "meat_wild_dathomir";
    case SWG_resource_types::MEAT_WILD_ENDOR:
        return "meat_wild_endor";
    case SWG_resource_types::MEAT_WILD_LOK:
        return "meat_wild_lok";
    case SWG_resource_types::MEAT_WILD_NABOO:
        return "meat_wild_naboo";
    case SWG_resource_types::MEAT_WILD_RORI:
        return "meat_wild_rori";
    case SWG_resource_types::MEAT_WILD_TALUS:
        return "meat_wild_talus";
    case SWG_resource_types::MEAT_WILD_TATOOINE:
        return "meat_wild_tatooine";
    case SWG_resource_types::MEAT_WILD_YAVIN4:
        return "meat_wild_yavin4";
    case SWG_resource_types::METAL_FERROUS_UNKNOWN:
        return "metal_ferrous_unknown";
    case SWG_resource_types::METAL_NONFERROUS_UNKNOWN:
        return "metal_nonferrous_unknown";
    case SWG_resource_types::MILK_DOMESTICATED_CORELLIA:
        return "milk_domesticated_corellia";
    case SWG_resource_types::MILK_DOMESTICATED_DANTOOINE:
        return "milk_domesticated_dantooine";
    case SWG_resource_types::MILK_DOMESTICATED_DATHOMIR:
        return "milk_domesticated_dathomir";
    case SWG_resource_types::MILK_DOMESTICATED_ENDOR:
        return "milk_domesticated_endor";
    case SWG_resource_types::MILK_DOMESTICATED_LOK:
        return "milk_domesticated_lok";
    case SWG_resource_types::MILK_DOMESTICATED_NABOO:
        return "milk_domesticated_naboo";
    case SWG_resource_types::MILK_DOMESTICATED_RORI:
        return "milk_domesticated_rori";
    case SWG_resource_types::MILK_DOMESTICATED_TALUS:
        return "milk_domesticated_talus";
    case SWG_resource_types::MILK_DOMESTICATED_TATOOINE:
        return "milk_domesticated_tatooine";
    case SWG_resource_types::MILK_DOMESTICATED_YAVIN4:
        return "milk_domesticated_yavin4";
    case SWG_resource_types::MILK_WILD_CORELLIA:
        return "milk_wild_corellia";
    case SWG_resource_types::MILK_WILD_DANTOOINE:
        return "milk_wild_dantooine";
    case SWG_resource_types::MILK_WILD_DATHOMIR:
        return "milk_wild_dathomir";
    case SWG_resource_types::MILK_WILD_ENDOR:
        return "milk_wild_endor";
    case SWG_resource_types::MILK_WILD_LOK:
        return "milk_wild_lok";
    case SWG_resource_types::MILK_WILD_NABOO:
        return "milk_wild_naboo";
    case SWG_resource_types::MILK_WILD_RORI:
        return "milk_wild_rori";
    case SWG_resource_types::MILK_WILD_TALUS:
        return "milk_wild_talus";
    case SWG_resource_types::MILK_WILD_TATOOINE:
        return "milk_wild_tatooine";
    case SWG_resource_types::MILK_WILD_YAVIN4:
        return "milk_wild_yavin4";
    case SWG_resource_types::OATS_DOMESTICATED_CORELLIA:
        return "oats_domesticated_corellia";
    case SWG_resource_types::OATS_DOMESTICATED_DANTOOINE:
        return "oats_domesticated_dantooine";
    case SWG_resource_types::OATS_DOMESTICATED_DATHOMIR:
        return "oats_domesticated_dathomir";
    case SWG_resource_types::OATS_DOMESTICATED_ENDOR:
        return "oats_domesticated_endor";
    case SWG_resource_types::OATS_DOMESTICATED_LOK:
        return "oats_domesticated_lok";
    case SWG_resource_types::OATS_DOMESTICATED_NABOO:
        return "oats_domesticated_naboo";
    case SWG_resource_types::OATS_DOMESTICATED_RORI:
        return "oats_domesticated_rori";
    case SWG_resource_types::OATS_DOMESTICATED_TALUS:
        return "oats_domesticated_talus";
    case SWG_resource_types::OATS_DOMESTICATED_TATOOINE:
        return "oats_domesticated_tatooine";
    case SWG_resource_types::OATS_DOMESTICATED_YAVIN4:
        return "oats_domesticated_yavin4";
    case SWG_resource_types::OATS_WILD_CORELLIA:
        return "oats_wild_corellia";
    case SWG_resource_types::OATS_WILD_DANTOOINE:
        return "oats_wild_dantooine";
    case SWG_resource_types::OATS_WILD_DATHOMIR:
        return "oats_wild_dathomir";
    case SWG_resource_types::OATS_WILD_ENDOR:
        return "oats_wild_endor";
    case SWG_resource_types::OATS_WILD_LOK:
        return "oats_wild_lok";
    case SWG_resource_types::OATS_WILD_NABOO:
        return "oats_wild_naboo";
    case SWG_resource_types::OATS_WILD_RORI:
        return "oats_wild_rori";
    case SWG_resource_types::OATS_WILD_TALUS:
        return "oats_wild_talus";
    case SWG_resource_types::OATS_WILD_TATOOINE:
        return "oats_wild_tatooine";
    case SWG_resource_types::OATS_WILD_YAVIN4:
        return "oats_wild_yavin4";
    case SWG_resource_types::ORE_CARBONATE_ALANTIUM:
        return "ore_carbonate_alantium";
    case SWG_resource_types::ORE_CARBONATE_BARTHIERIUM:
        return "ore_carbonate_barthierium";
    case SWG_resource_types::ORE_CARBONATE_CHROMITE:
        return "ore_carbonate_chromite";
    case SWG_resource_types::ORE_CARBONATE_FRASIUM:
        return "ore_carbonate_frasium";
    case SWG_resource_types::ORE_CARBONATE_LOMMITE:
        return "ore_carbonate_lommite";
    case SWG_resource_types::ORE_CARBONATE_OSTRINE:
        return "ore_carbonate_ostrine";
    case SWG_resource_types::ORE_CARBONATE_VARIUM:
        return "ore_carbonate_varium";
    case SWG_resource_types::ORE_CARBONATE_ZINSIAM:
        return "ore_carbonate_zinsiam";
    case SWG_resource_types::ORE_EXTRUSIVE_BENE:
        return "ore_extrusive_bene";
    case SWG_resource_types::ORE_EXTRUSIVE_CHRONAMITE:
        return "ore_extrusive_chronamite";
    case SWG_resource_types::ORE_EXTRUSIVE_ILIMIUM:
        return "ore_extrusive_ilimium";
    case SWG_resource_types::ORE_EXTRUSIVE_KALONTERIUM:
        return "ore_extrusive_kalonterium";
    case SWG_resource_types::ORE_EXTRUSIVE_KESCHEL:
        return "ore_extrusive_keschel";
    case SWG_resource_types::ORE_EXTRUSIVE_LIDIUM:
        return "ore_extrusive_lidium";
    case SWG_resource_types::ORE_EXTRUSIVE_MARANIUM:
        return "ore_extrusive_maranium";
    case SWG_resource_types::ORE_EXTRUSIVE_PHOLOKITE:
        return "ore_extrusive_pholokite";
    case SWG_resource_types::ORE_EXTRUSIVE_QUADRENIUM:
        return "ore_extrusive_quadrenium";
    case SWG_resource_types::ORE_EXTRUSIVE_VINTRIUM:
        return "ore_extrusive_vintrium";
    case SWG_resource_types::ORE_IGNEOUS_UNKNOWN:
        return "ore_igneous_unknown";
    case SWG_resource_types::ORE_INTRUSIVE_BERUBIUM:
        return "ore_intrusive_berubium";
    case SWG_resource_types::ORE_INTRUSIVE_CHANLON:
        return "ore_intrusive_chanlon";
    case SWG_resource_types::ORE_INTRUSIVE_CORINTIUM:
        return "ore_intrusive_corintium";
    case SWG_resource_types::ORE_INTRUSIVE_DERILLIUM:
        return "ore_intrusive_derillium";
    case SWG_resource_types::ORE_INTRUSIVE_DYLINIUM:
        return "ore_intrusive_dylinium";
    case SWG_resource_types::ORE_INTRUSIVE_HOLLINIUM:
        return "ore_intrusive_hollinium";
    case SWG_resource_types::ORE_INTRUSIVE_IONITE:
        return "ore_intrusive_ionite";
    case SWG_resource_types::ORE_INTRUSIVE_KATRIUM:
        return "ore_intrusive_katrium";
    case SWG_resource_types::ORE_INTRUSIVE_ORIDIUM:
        return "ore_intrusive_oridium";
    case SWG_resource_types::ORE_SEDIMENTARY_UNKNOWN:
        return "ore_sedimentary_unknown";
    case SWG_resource_types::ORE_SILICLASTIC_ARDANIUM:
        return "ore_siliclastic_ardanium";
    case SWG_resource_types::ORE_SILICLASTIC_CORTOSIS:
        return "ore_siliclastic_cortosis";
    case SWG_resource_types::ORE_SILICLASTIC_CRISM:
        return "ore_siliclastic_crism";
    case SWG_resource_types::ORE_SILICLASTIC_FERMIONIC:
        return "ore_siliclastic_fermionic";
    case SWG_resource_types::ORE_SILICLASTIC_MALAB:
        return "ore_siliclastic_malab";
    case SWG_resource_types::ORE_SILICLASTIC_ROBINDUN:
        return "ore_siliclastic_robindun";
    case SWG_resource_types::ORE_SILICLASTIC_TERTIAN:
        return "ore_siliclastic_tertian";
    case SWG_resource_types::PETROCHEM_FUEL_LIQUID_TYPE1:
        return "petrochem_fuel_liquid_type1";
    case SWG_resource_types::PETROCHEM_FUEL_LIQUID_TYPE2:
        return "petrochem_fuel_liquid_type2";
    case SWG_resource_types::PETROCHEM_FUEL_LIQUID_TYPE3:
        return "petrochem_fuel_liquid_type3";
    case SWG_resource_types::PETROCHEM_FUEL_LIQUID_TYPE4:
        return "petrochem_fuel_liquid_type4";
    case SWG_resource_types::PETROCHEM_FUEL_LIQUID_TYPE5:
        return "petrochem_fuel_liquid_type5";
    case SWG_resource_types::PETROCHEM_FUEL_LIQUID_TYPE6:
        return "petrochem_fuel_liquid_type6";
    case SWG_resource_types::PETROCHEM_FUEL_LIQUID_TYPE7:
        return "petrochem_fuel_liquid_type7";
    case SWG_resource_types::PETROCHEM_FUEL_LIQUID_UNKNOWN:
        return "petrochem_fuel_liquid_unknown";
    case SWG_resource_types::PETROCHEM_FUEL_SOLID_TYPE1:
        return "petrochem_fuel_solid_type1";
    case SWG_resource_types::PETROCHEM_FUEL_SOLID_TYPE2:
        return "petrochem_fuel_solid_type2";
    case SWG_resource_types::PETROCHEM_FUEL_SOLID_TYPE3:
        return "petrochem_fuel_solid_type3";
    case SWG_resource_types::PETROCHEM_FUEL_SOLID_TYPE4:
        return "petrochem_fuel_solid_type4";
    case SWG_resource_types::PETROCHEM_FUEL_SOLID_TYPE5:
        return "petrochem_fuel_solid_type5";
    case SWG_resource_types::PETROCHEM_FUEL_SOLID_TYPE6:
        return "petrochem_fuel_solid_type6";
    case SWG_resource_types::PETROCHEM_FUEL_SOLID_TYPE7:
        return "petrochem_fuel_solid_type7";
    case SWG_resource_types::PETROCHEM_FUEL_SOLID_UNKNOWN:
        return "petrochem_fuel_solid_unknown";
    case SWG_resource_types::PETROCHEM_INERT_LUBRICATING_OIL:
        return "petrochem_inert_lubricating_oil";
    case SWG_resource_types::PETROCHEM_INERT_POLYMER:
        return "petrochem_inert_polymer";
    case SWG_resource_types::RADIOACTIVE_POLYMETRIC:
        return "radioactive_polymetric";
    case SWG_resource_types::RADIOACTIVE_TYPE1:
        return "radioactive_type1";
    case SWG_resource_types::RADIOACTIVE_TYPE2:
        return "radioactive_type2";
    case SWG_resource_types::RADIOACTIVE_TYPE3:
        return "radioactive_type3";
    case SWG_resource_types::RADIOACTIVE_TYPE4:
        return "radioactive_type4";
    case SWG_resource_types::RADIOACTIVE_TYPE5:
        return "radioactive_type5";
    case SWG_resource_types::RADIOACTIVE_TYPE6:
        return "radioactive_type6";
    case SWG_resource_types::RADIOACTIVE_TYPE7:
        return "radioactive_type7";
    case SWG_resource_types::RADIOACTIVE_UNKNOWN:
        return "radioactive_unknown";
    case SWG_resource_types::RICE_DOMESTICATED_CORELLIA:
        return "rice_domesticated_corellia";
    case SWG_resource_types::RICE_DOMESTICATED_DANTOOINE:
        return "rice_domesticated_dantooine";
    case SWG_resource_types::RICE_DOMESTICATED_DATHOMIR:
        return "rice_domesticated_dathomir";
    case SWG_resource_types::RICE_DOMESTICATED_ENDOR:
        return "rice_domesticated_endor";
    case SWG_resource_types::RICE_DOMESTICATED_LOK:
        return "rice_domesticated_lok";
    case SWG_resource_types::RICE_DOMESTICATED_NABOO:
        return "rice_domesticated_naboo";
    case SWG_resource_types::RICE_DOMESTICATED_RORI:
        return "rice_domesticated_rori";
    case SWG_resource_types::RICE_DOMESTICATED_TALUS:
        return "rice_domesticated_talus";
    case SWG_resource_types::RICE_DOMESTICATED_TATOOINE:
        return "rice_domesticated_tatooine";
    case SWG_resource_types::RICE_DOMESTICATED_YAVIN4:
        return "rice_domesticated_yavin4";
    case SWG_resource_types::RICE_WILD_CORELLIA:
        return "rice_wild_corellia";
    case SWG_resource_types::RICE_WILD_DANTOOINE:
        return "rice_wild_dantooine";
    case SWG_resource_types::RICE_WILD_DATHOMIR:
        return "rice_wild_dathomir";
    case SWG_resource_types::RICE_WILD_ENDOR:
        return "rice_wild_endor";
    case SWG_resource_types::RICE_WILD_LOK:
        return "rice_wild_lok";
    case SWG_resource_types::RICE_WILD_NABOO:
        return "rice_wild_naboo";
    case SWG_resource_types::RICE_WILD_RORI:
        return "rice_wild_rori";
    case SWG_resource_types::RICE_WILD_TALUS:
        return "rice_wild_talus";
    case SWG_resource_types::RICE_WILD_TATOOINE:
        return "rice_wild_tatooine";
    case SWG_resource_types::RICE_WILD_YAVIN4:
        return "rice_wild_yavin4";
    case SWG_resource_types::SEAFOOD_CRUSTACEAN_CORELLIA:
        return "seafood_crustacean_corellia";
    case SWG_resource_types::SEAFOOD_CRUSTACEAN_DANTOOINE:
        return "seafood_crustacean_dantooine";
    case SWG_resource_types::SEAFOOD_CRUSTACEAN_DATHOMIR:
        return "seafood_crustacean_dathomir";
    case SWG_resource_types::SEAFOOD_CRUSTACEAN_ENDOR:
        return "seafood_crustacean_endor";
    case SWG_resource_types::SEAFOOD_CRUSTACEAN_LOK:
        return "seafood_crustacean_lok";
    case SWG_resource_types::SEAFOOD_CRUSTACEAN_NABOO:
        return "seafood_crustacean_naboo";
    case SWG_resource_types::SEAFOOD_CRUSTACEAN_RORI:
        return "seafood_crustacean_rori";
    case SWG_resource_types::SEAFOOD_CRUSTACEAN_TALUS:
        return "seafood_crustacean_talus";
    case SWG_resource_types::SEAFOOD_CRUSTACEAN_TATOOINE:
        return "seafood_crustacean_tatooine";
    case SWG_resource_types::SEAFOOD_CRUSTACEAN_YAVIN4:
        return "seafood_crustacean_yavin4";
    case SWG_resource_types::SEAFOOD_FISH_CORELLIA:
        return "seafood_fish_corellia";
    case SWG_resource_types::SEAFOOD_FISH_DANTOOINE:
        return "seafood_fish_dantooine";
    case SWG_resource_types::SEAFOOD_FISH_DATHOMIR:
        return "seafood_fish_dathomir";
    case SWG_resource_types::SEAFOOD_FISH_ENDOR:
        return "seafood_fish_endor";
    case SWG_resource_types::SEAFOOD_FISH_LOK:
        return "seafood_fish_lok";
    case SWG_resource_types::SEAFOOD_FISH_NABOO:
        return "seafood_fish_naboo";
    case SWG_resource_types::SEAFOOD_FISH_RORI:
        return "seafood_fish_rori";
    case SWG_resource_types::SEAFOOD_FISH_TALUS:
        return "seafood_fish_talus";
    case SWG_resource_types::SEAFOOD_FISH_TATOOINE:
        return "seafood_fish_tatooine";
    case SWG_resource_types::SEAFOOD_FISH_YAVIN4:
        return "seafood_fish_yavin4";
    case SWG_resource_types::SEAFOOD_MOLLUSK_CORELLIA:
        return "seafood_mollusk_corellia";
    case SWG_resource_types::SEAFOOD_MOLLUSK_DANTOOINE:
        return "seafood_mollusk_dantooine";
    case SWG_resource_types::SEAFOOD_MOLLUSK_DATHOMIR:
        return "seafood_mollusk_dathomir";
    case SWG_resource_types::SEAFOOD_MOLLUSK_ENDOR:
        return "seafood_mollusk_endor";
    case SWG_resource_types::SEAFOOD_MOLLUSK_LOK:
        return "seafood_mollusk_lok";
    case SWG_resource_types::SEAFOOD_MOLLUSK_NABOO:
        return "seafood_mollusk_naboo";
    case SWG_resource_types::SEAFOOD_MOLLUSK_RORI:
        return "seafood_mollusk_rori";
    case SWG_resource_types::SEAFOOD_MOLLUSK_TALUS:
        return "seafood_mollusk_talus";
    case SWG_resource_types::SEAFOOD_MOLLUSK_TATOOINE:
        return "seafood_mollusk_tatooine";
    case SWG_resource_types::SEAFOOD_MOLLUSK_YAVIN4:
        return "seafood_mollusk_yavin4";
    case SWG_resource_types::SOFTWOOD_CONIFER_CORELLIA:
        return "softwood_conifer_corellia";
    case SWG_resource_types::SOFTWOOD_CONIFER_DANTOOINE:
        return "softwood_conifer_dantooine";
    case SWG_resource_types::SOFTWOOD_CONIFER_DATHOMIR:
        return "softwood_conifer_dathomir";
    case SWG_resource_types::SOFTWOOD_CONIFER_ENDOR:
        return "softwood_conifer_endor";
    case SWG_resource_types::SOFTWOOD_CONIFER_LOK:
        return "softwood_conifer_lok";
    case SWG_resource_types::SOFTWOOD_CONIFER_NABOO:
        return "softwood_conifer_naboo";
    case SWG_resource_types::SOFTWOOD_CONIFER_RORI:
        return "softwood_conifer_rori";
    case SWG_resource_types::SOFTWOOD_CONIFER_TALUS:
        return "softwood_conifer_talus";
    case SWG_resource_types::SOFTWOOD_CONIFER_TATOOINE:
        return "softwood_conifer_tatooine";
    case SWG_resource_types::SOFTWOOD_CONIFER_YAVIN4:
        return "softwood_conifer_yavin4";
    case SWG_resource_types::SOFTWOOD_EVERGREEN_CORELLIA:
        return "softwood_evergreen_corellia";
    case SWG_resource_types::SOFTWOOD_EVERGREEN_DANTOOINE:
        return "softwood_evergreen_dantooine";
    case SWG_resource_types::SOFTWOOD_EVERGREEN_DATHOMIR:
        return "softwood_evergreen_dathomir";
    case SWG_resource_types::SOFTWOOD_EVERGREEN_ENDOR:
        return "softwood_evergreen_endor";
    case SWG_resource_types::SOFTWOOD_EVERGREEN_LOK:
        return "softwood_evergreen_lok";
    case SWG_resource_types::SOFTWOOD_EVERGREEN_NABOO:
        return "softwood_evergreen_naboo";
    case SWG_resource_types::SOFTWOOD_EVERGREEN_RORI:
        return "softwood_evergreen_rori";
    case SWG_resource_types::SOFTWOOD_EVERGREEN_TALUS:
        return "softwood_evergreen_talus";
    case SWG_resource_types::SOFTWOOD_EVERGREEN_TATOOINE:
        return "softwood_evergreen_tatooine";
    case SWG_resource_types::SOFTWOOD_EVERGREEN_YAVIN4:
        return "softwood_evergreen_yavin4";
    case SWG_resource_types::STEEL_ARVESHIAN:
        return "steel_arveshian";
    case SWG_resource_types::STEEL_BICORBANTIUM:
        return "steel_bicorbantium";
    case SWG_resource_types::STEEL_CARBONITE:
        return "steel_carbonite";
    case SWG_resource_types::STEEL_CUBIRIAN:
        return "steel_cubirian";
    case SWG_resource_types::STEEL_DITANIUM:
        return "steel_ditanium";
    case SWG_resource_types::STEEL_DURALLOY:
        return "steel_duralloy";
    case SWG_resource_types::STEEL_DURANIUM:
        return "steel_duranium";
    case SWG_resource_types::STEEL_KIIRIUM:
        return "steel_kiirium";
    case SWG_resource_types::STEEL_NEUTRONIUM:
        return "steel_neutronium";
    case SWG_resource_types::STEEL_QUADRANIUM:
        return "steel_quadranium";
    case SWG_resource_types::STEEL_RHODIUM:
        return "steel_rhodium";
    case SWG_resource_types::STEEL_THORANIUM:
        return "steel_thoranium";
    case SWG_resource_types::VEGETABLE_BEANS_CORELLIA:
        return "vegetable_beans_corellia";
    case SWG_resource_types::VEGETABLE_BEANS_DANTOOINE:
        return "vegetable_beans_dantooine";
    case SWG_resource_types::VEGETABLE_BEANS_DATHOMIR:
        return "vegetable_beans_dathomir";
    case SWG_resource_types::VEGETABLE_BEANS_ENDOR:
        return "vegetable_beans_endor";
    case SWG_resource_types::VEGETABLE_BEANS_LOK:
        return "vegetable_beans_lok";
    case SWG_resource_types::VEGETABLE_BEANS_NABOO:
        return "vegetable_beans_naboo";
    case SWG_resource_types::VEGETABLE_BEANS_RORI:
        return "vegetable_beans_rori";
    case SWG_resource_types::VEGETABLE_BEANS_TALUS:
        return "vegetable_beans_talus";
    case SWG_resource_types::VEGETABLE_BEANS_TATOOINE:
        return "vegetable_beans_tatooine";
    case SWG_resource_types::VEGETABLE_BEANS_YAVIN4:
        return "vegetable_beans_yavin4";
    case SWG_resource_types::VEGETABLE_FUNGI_CORELLIA:
        return "vegetable_fungi_corellia";
    case SWG_resource_types::VEGETABLE_FUNGI_DANTOOINE:
        return "vegetable_fungi_dantooine";
    case SWG_resource_types::VEGETABLE_FUNGI_DATHOMIR:
        return "vegetable_fungi_dathomir";
    case SWG_resource_types::VEGETABLE_FUNGI_ENDOR:
        return "vegetable_fungi_endor";
    case SWG_resource_types::VEGETABLE_FUNGI_LOK:
        return "vegetable_fungi_lok";
    case SWG_resource_types::VEGETABLE_FUNGI_NABOO:
        return "vegetable_fungi_naboo";
    case SWG_resource_types::VEGETABLE_FUNGI_RORI:
        return "vegetable_fungi_rori";
    case SWG_resource_types::VEGETABLE_FUNGI_TALUS:
        return "vegetable_fungi_talus";
    case SWG_resource_types::VEGETABLE_FUNGI_TATOOINE:
        return "vegetable_fungi_tatooine";
    case SWG_resource_types::VEGETABLE_FUNGI_YAVIN4:
        return "vegetable_fungi_yavin4";
    case SWG_resource_types::VEGETABLE_GREENS_CORELLIA:
        return "vegetable_greens_corellia";
    case SWG_resource_types::VEGETABLE_GREENS_DANTOOINE:
        return "vegetable_greens_dantooine";
    case SWG_resource_types::VEGETABLE_GREENS_DATHOMIR:
        return "vegetable_greens_dathomir";
    case SWG_resource_types::VEGETABLE_GREENS_ENDOR:
        return "vegetable_greens_endor";
    case SWG_resource_types::VEGETABLE_GREENS_LOK:
        return "vegetable_greens_lok";
    case SWG_resource_types::VEGETABLE_GREENS_NABOO:
        return "vegetable_greens_naboo";
    case SWG_resource_types::VEGETABLE_GREENS_RORI:
        return "vegetable_greens_rori";
    case SWG_resource_types::VEGETABLE_GREENS_TALUS:
        return "vegetable_greens_talus";
    case SWG_resource_types::VEGETABLE_GREENS_TATOOINE:
        return "vegetable_greens_tatooine";
    case SWG_resource_types::VEGETABLE_GREENS_YAVIN4:
        return "vegetable_greens_yavin4";
    case SWG_resource_types::VEGETABLE_TUBERS_CORELLIA:
        return "vegetable_tubers_corellia";
    case SWG_resource_types::VEGETABLE_TUBERS_DANTOOINE:
        return "vegetable_tubers_dantooine";
    case SWG_resource_types::VEGETABLE_TUBERS_DATHOMIR:
        return "vegetable_tubers_dathomir";
    case SWG_resource_types::VEGETABLE_TUBERS_ENDOR:
        return "vegetable_tubers_endor";
    case SWG_resource_types::VEGETABLE_TUBERS_LOK:
        return "vegetable_tubers_lok";
    case SWG_resource_types::VEGETABLE_TUBERS_NABOO:
        return "vegetable_tubers_naboo";
    case SWG_resource_types::VEGETABLE_TUBERS_RORI:
        return "vegetable_tubers_rori";
    case SWG_resource_types::VEGETABLE_TUBERS_TALUS:
        return "vegetable_tubers_talus";
    case SWG_resource_types::VEGETABLE_TUBERS_TATOOINE:
        return "vegetable_tubers_tatooine";
    case SWG_resource_types::VEGETABLE_TUBERS_YAVIN4:
        return "vegetable_tubers_yavin4";
    case SWG_resource_types::WATER_VAPOR_CORELLIA:
        return "water_vapor_corellia";
    case SWG_resource_types::WATER_VAPOR_DANTOOINE:
        return "water_vapor_dantooine";
    case SWG_resource_types::WATER_VAPOR_DATHOMIR:
        return "water_vapor_dathomir";
    case SWG_resource_types::WATER_VAPOR_ENDOR:
        return "water_vapor_endor";
    case SWG_resource_types::WATER_VAPOR_LOK:
        return "water_vapor_lok";
    case SWG_resource_types::WATER_VAPOR_NABOO:
        return "water_vapor_naboo";
    case SWG_resource_types::WATER_VAPOR_RORI:
        return "water_vapor_rori";
    case SWG_resource_types::WATER_VAPOR_TALUS:
        return "water_vapor_talus";
    case SWG_resource_types::WATER_VAPOR_TATOOINE:
        return "water_vapor_tatooine";
    case SWG_resource_types::WATER_VAPOR_YAVIN4:
        return "water_vapor_yavin4";
    case SWG_resource_types::WHEAT_DOMESTICATED_CORELLIA:
        return "wheat_domesticated_corellia";
    case SWG_resource_types::WHEAT_DOMESTICATED_DANTOOINE:
        return "wheat_domesticated_dantooine";
    case SWG_resource_types::WHEAT_DOMESTICATED_DATHOMIR:
        return "wheat_domesticated_dathomir";
    case SWG_resource_types::WHEAT_DOMESTICATED_ENDOR:
        return "wheat_domesticated_endor";
    case SWG_resource_types::WHEAT_DOMESTICATED_LOK:
        return "wheat_domesticated_lok";
    case SWG_resource_types::WHEAT_DOMESTICATED_NABOO:
        return "wheat_domesticated_naboo";
    case SWG_resource_types::WHEAT_DOMESTICATED_RORI:
        return "wheat_domesticated_rori";
    case SWG_resource_types::WHEAT_DOMESTICATED_TALUS:
        return "wheat_domesticated_talus";
    case SWG_resource_types::WHEAT_DOMESTICATED_TATOOINE:
        return "wheat_domesticated_tatooine";
    case SWG_resource_types::WHEAT_DOMESTICATED_YAVIN4:
        return "wheat_domesticated_yavin4";
    case SWG_resource_types::WHEAT_WILD_CORELLIA:
        return "wheat_wild_corellia";
    case SWG_resource_types::WHEAT_WILD_DANTOOINE:
        return "wheat_wild_dantooine";
    case SWG_resource_types::WHEAT_WILD_DATHOMIR:
        return "wheat_wild_dathomir";
    case SWG_resource_types::WHEAT_WILD_ENDOR:
        return "wheat_wild_endor";
    case SWG_resource_types::WHEAT_WILD_LOK:
        return "wheat_wild_lok";
    case SWG_resource_types::WHEAT_WILD_NABOO:
        return "wheat_wild_naboo";
    case SWG_resource_types::WHEAT_WILD_RORI:
        return "wheat_wild_rori";
    case SWG_resource_types::WHEAT_WILD_TALUS:
        return "wheat_wild_talus";
    case SWG_resource_types::WHEAT_WILD_TATOOINE:
        return "wheat_wild_tatooine";
    case SWG_resource_types::WHEAT_WILD_YAVIN4:
        return "wheat_wild_yavin4";
    case SWG_resource_types::WOOD_DECIDUOUS_CORELLIA:
        return "wood_deciduous_corellia";
    case SWG_resource_types::WOOD_DECIDUOUS_DANTOOINE:
        return "wood_deciduous_dantooine";
    case SWG_resource_types::WOOD_DECIDUOUS_DATHOMIR:
        return "wood_deciduous_dathomir";
    case SWG_resource_types::WOOD_DECIDUOUS_ENDOR:
        return "wood_deciduous_endor";
    case SWG_resource_types::WOOD_DECIDUOUS_LOK:
        return "wood_deciduous_lok";
    case SWG_resource_types::WOOD_DECIDUOUS_NABOO:
        return "wood_deciduous_naboo";
    case SWG_resource_types::WOOD_DECIDUOUS_RORI:
        return "wood_deciduous_rori";
    case SWG_resource_types::WOOD_DECIDUOUS_TALUS:
        return "wood_deciduous_talus";
    case SWG_resource_types::WOOD_DECIDUOUS_TATOOINE:
        return "wood_deciduous_tatooine";
    case SWG_resource_types::WOOD_DECIDUOUS_YAVIN4:
        return "wood_deciduous_yavin4";
    default:
        return "bad SWG_resource_types enum";
    }
}

std::string SWGResourceTypeStringPretty(SWG_resource_types e)
{
    switch (e)
    {
    case SWG_resource_types::ALUMINUM_AGRINIUM:
        return "Agrinium Aluminum";
    case SWG_resource_types::ALUMINUM_CHROMIUM:
        return "Chromium Aluminum";
    case SWG_resource_types::ALUMINUM_DURALUMIN:
        return "Duralumin Aluminum";
    case SWG_resource_types::ALUMINUM_LINKSTEEL:
        return "Link-Steel Aluminum";
    case SWG_resource_types::ALUMINUM_PEROVSKITIC:
        return "Perovskitic Aluminum";
    case SWG_resource_types::ALUMINUM_PHRIK:
        return "Phrik Aluminum";
    case SWG_resource_types::ALUMINUM_TITANIUM:
        return "Titanium Aluminum";
    case SWG_resource_types::ARMOPHOUS_BALTARAN:
        return "Bal'ta'ran Crystal Amorphous Gemstone";
    case SWG_resource_types::ARMOPHOUS_BARADIUM:
        return "Baradium Amorphous Gemstone";
    case SWG_resource_types::ARMOPHOUS_BOSPRIDIUM:
        return "Bospridium Amorphous Gemstone";
    case SWG_resource_types::ARMOPHOUS_PLEXITE:
        return "Plexite Amorphous Gemstone";
    case SWG_resource_types::ARMOPHOUS_REGVIS:
        return "Regvis Amorphous Gemstone";
    case SWG_resource_types::ARMOPHOUS_RUDIC:
        return "Rudic Amorphous Gemstone";
    case SWG_resource_types::ARMOPHOUS_RYLL:
        return "Ryll Amorphous Gemstone";
    case SWG_resource_types::ARMOPHOUS_SEDRELLIUM:
        return "Sedrellium Amorphous Gemstone";
    case SWG_resource_types::ARMOPHOUS_STYGIUM:
        return "Stygium Amorphous Gemstone";
    case SWG_resource_types::ARMOPHOUS_VENDUSII:
        return "Vendusii Crystal Amorphous Gemstone";
    case SWG_resource_types::BONE_AVIAN_CORELLIA:
        return "Corellian Avian Bones";
    case SWG_resource_types::BONE_AVIAN_DANTOOINE:
        return "Dantooine Avian Bones";
    case SWG_resource_types::BONE_AVIAN_DATHOMIR:
        return "Dathomirian Avian Bones";
    case SWG_resource_types::BONE_AVIAN_ENDOR:
        return "Endorian Avian Bones";
    case SWG_resource_types::BONE_AVIAN_LOK:
        return "Lokian Avian Bones";
    case SWG_resource_types::BONE_AVIAN_NABOO:
        return "Nabooian Avian Bones";
    case SWG_resource_types::BONE_AVIAN_RORI:
        return "Rori Avian Bones";
    case SWG_resource_types::BONE_AVIAN_TALUS:
        return "Talusian Avian Bones";
    case SWG_resource_types::BONE_AVIAN_TATOOINE:
        return "Tatooinian Avian Bones";
    case SWG_resource_types::BONE_AVIAN_YAVIN4:
        return "Yavinian Avian Bones";
    case SWG_resource_types::BONE_HORN_CORELLIA:
        return "Corellian Horn";
    case SWG_resource_types::BONE_HORN_DANTOOINE:
        return "Dantooine Horn";
    case SWG_resource_types::BONE_HORN_DATHOMIR:
        return "Dothomirian Horn";
    case SWG_resource_types::BONE_HORN_ENDOR:
        return "Endorian Horn";
    case SWG_resource_types::BONE_HORN_LOK:
        return "Lokian Horn";
    case SWG_resource_types::BONE_HORN_NABOO:
        return "Nabooian Horn";
    case SWG_resource_types::BONE_HORN_RORI:
        return "Rori Horn";
    case SWG_resource_types::BONE_HORN_TALUS:
        return "Talusian Horn";
    case SWG_resource_types::BONE_HORN_TATOOINE:
        return "Tatooinian Horn";
    case SWG_resource_types::BONE_HORN_YAVIN4:
        return "Yavinian Horn";
    case SWG_resource_types::BONE_MAMMAL_CORELLIA:
        return "Corellian Animal Bones";
    case SWG_resource_types::BONE_MAMMAL_DANTOOINE:
        return "Dantooine Animal Bones";
    case SWG_resource_types::BONE_MAMMAL_DATHOMIR:
        return "Dathomirian Animal Bones";
    case SWG_resource_types::BONE_MAMMAL_ENDOR:
        return "Endorian Animal Bones";
    case SWG_resource_types::BONE_MAMMAL_LOK:
        return "Lokian  Animal Bones";
    case SWG_resource_types::BONE_MAMMAL_NABOO:
        return "Nabooian  Animal Bones";
    case SWG_resource_types::BONE_MAMMAL_RORI:
        return "Rori  Animal Bones";
    case SWG_resource_types::BONE_MAMMAL_TALUS:
        return "Talusian  Animal Bones";
    case SWG_resource_types::BONE_MAMMAL_TATOOINE:
        return "Tatooinian  Animal Bones";
    case SWG_resource_types::BONE_MAMMAL_YAVIN4:
        return "Yavinian  Animal Bones";
    case SWG_resource_types::COPPER_BEYRLLIUS:
        return "Beyrllius Copper";
    case SWG_resource_types::COPPER_BOROCARBITIC:
        return "Conductive Borcarbitic Copper";
    case SWG_resource_types::COPPER_CODOAN:
        return "Codoan Copper";
    case SWG_resource_types::COPPER_DESH:
        return "Desh Copper";
    case SWG_resource_types::COPPER_DIATIUM:
        return "Diatium Copper";
    case SWG_resource_types::COPPER_KELSH:
        return "Kelsh Copper";
    case SWG_resource_types::COPPER_MYTHRA:
        return "Mythra Copper";
    case SWG_resource_types::COPPER_PLATINITE:
        return "Platinite Copper";
    case SWG_resource_types::COPPER_POLYSTEEL:
        return "Polysteel Copper";
    case SWG_resource_types::COPPER_THALLIUM:
        return "Thallium Copper";
    case SWG_resource_types::CORN_DOMESTICATED_CORELLIA:
        return "Corellian Domesticated Corn";
    case SWG_resource_types::CORN_DOMESTICATED_DANTOOINE:
        return "Dantooine Domesticated Corn";
    case SWG_resource_types::CORN_DOMESTICATED_DATHOMIR:
        return "Dathomirian Domesticated Corn";
    case SWG_resource_types::CORN_DOMESTICATED_ENDOR:
        return "Endorian Domesticated Corn";
    case SWG_resource_types::CORN_DOMESTICATED_LOK:
        return "Lokian Domesticated Corn";
    case SWG_resource_types::CORN_DOMESTICATED_NABOO:
        return "Nabooian Domesticated Corn";
    case SWG_resource_types::CORN_DOMESTICATED_RORI:
        return "Rori Domesticated Corn";
    case SWG_resource_types::CORN_DOMESTICATED_TALUS:
        return "Talusian Domesticated Corn";
    case SWG_resource_types::CORN_DOMESTICATED_TATOOINE:
        return "Tatooinian Domesticated Corn";
    case SWG_resource_types::CORN_DOMESTICATED_YAVIN4:
        return "Yavinian Domesticated Corn";
    case SWG_resource_types::CORN_WILD_CORELLIA:
        return "Corellian Wild Corn";
    case SWG_resource_types::CORN_WILD_DANTOOINE:
        return "Dantooine Wild Corn";
    case SWG_resource_types::CORN_WILD_DATHOMIR:
        return "Dathomirian Wild Corn";
    case SWG_resource_types::CORN_WILD_ENDOR:
        return "Endorian Wild Corn";
    case SWG_resource_types::CORN_WILD_LOK:
        return "Lokian Wild Corn";
    case SWG_resource_types::CORN_WILD_NABOO:
        return "Nabooian Wild Corn";
    case SWG_resource_types::CORN_WILD_RORI:
        return "Rori Wild Corn";
    case SWG_resource_types::CORN_WILD_TALUS:
        return "Talusian Wild Corn";
    case SWG_resource_types::CORN_WILD_TATOOINE:
        return "Tatooinian Wild Corn";
    case SWG_resource_types::CORN_WILD_YAVIN4:
        return "Yavinian Wild Corn";
    case SWG_resource_types::CRYSTALLINE_BYROTHSIS:
        return "Byrothsis Crystalline Gemstone";
    case SWG_resource_types::CRYSTALLINE_GALLINORIAN:
        return "Gallinorian Rainbow Gem Crystalline Gemstone";
    case SWG_resource_types::CRYSTALLINE_GREEN_DIAMOND:
        return "Green Diamond Crystalline Gemstone";
    case SWG_resource_types::CRYSTALLINE_KEROL_FIREGEM:
        return "Kerol Fire-Gem Crystalline Gemstone";
    case SWG_resource_types::CRYSTALLINE_LABOI_MINERAL_CRYSTAL:
        return "Laboi Mineral Crystal Crystalline Gemstone";
    case SWG_resource_types::CRYSTALLINE_SEAFAH_JEWEL:
        return "Seafah Jewel Crystalline Gemstone";
    case SWG_resource_types::CRYSTALLINE_SORMAHIL_FIREGEM:
        return "Sormahil Fire Gem Crystalline Gemstone";
    case SWG_resource_types::CRYSTALLINE_VERTEX:
        return "Vertex Crystalline Gemstone";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_GEOTHERMAL_CORELLIA:
        return "Corellian Geothermal Renewable Energy";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_GEOTHERMAL_DANTOOINE:
        return "Dantooine Geothermal Renewable Energy";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_GEOTHERMAL_DATHOMIR:
        return "Dathomirian Geothermal Renewable Energy";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_GEOTHERMAL_ENDOR:
        return "Endorian Geothermal Renewable Energy";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_GEOTHERMAL_LOK:
        return "Lokian Geothermal Renewable Energy";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_GEOTHERMAL_NABOO:
        return "Nabooian Geothermal Renewable Energy";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_GEOTHERMAL_RORI:
        return "Rori Geothermal Renewable Energy";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_GEOTHERMAL_TALUS:
        return "Talusian Geothermal Renewable Energy";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_GEOTHERMAL_TATOOINE:
        return "Tatooinian Geothermal Renewable Energy";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_GEOTHERMAL_YAVIN4:
        return "Yavinian Geothermal Renewable Energy";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_HYDRON3_CORELLIA:
        return "Corellian Hydron-3 Renewable Energy";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_HYDRON3_DANTOOINE:
        return "Dantooine Hydron-3 Renewable Energy";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_HYDRON3_DATHOMIR:
        return "Dathomirian Hydron-3 Renewable Energy";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_HYDRON3_ENDOR:
        return "Endorian Hydron-3 Renewable Energy";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_HYDRON3_LOK:
        return "Lokian Hydron-3 Renewable Energy";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_HYDRON3_NABOO:
        return "Nabooian Hydron-3 Renewable Energy";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_HYDRON3_RORI:
        return "Rori Hydron-3 Renewable Energy";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_HYDRON3_TALUS:
        return "Talusian Hydron-3 Renewable Energy";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_HYDRON3_TATOOINE:
        return "Tatooinian Hydron-3 Renewable Energy";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_HYDRON3_YAVIN4:
        return "Yavinian Hydron-3 Renewable Energy";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_TIDAL_CORELLIA:
        return "Corellian Tidal Renewable Energy";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_TIDAL_DANTOOINE:
        return "Dantooine Tidal Renewable Energy";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_TIDAL_DATHOMIR:
        return "Dathomirian Tidal Renewable Energy";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_TIDAL_ENDOR:
        return "Endor Tidal Renewable Energy";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_TIDAL_LOK:
        return "Lokian Tidal Renewable Energy";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_TIDAL_NABOO:
        return "Naboo Tidal Renewable Energy";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_TIDAL_RORI:
        return "Rori Tidal Renewable Energy";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_TIDAL_TALUS:
        return "Talusian Tidal Renewable Energy";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_TIDAL_TATOOINE:
        return "Tatooinian Tidal Renewable Energy";
    case SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_TIDAL_YAVIN4:
        return "Yavinian Tidal Renewable Energy";
    case SWG_resource_types::ENERGY_RENEWABLE_UNLIMITED_SOLAR_CORELLIA:
        return "Corellian Solar Renewable Energy";
    case SWG_resource_types::ENERGY_RENEWABLE_UNLIMITED_SOLAR_DANTOOINE:
        return "Dantooine Solar Renewable Energy";
    case SWG_resource_types::ENERGY_RENEWABLE_UNLIMITED_SOLAR_DATHOMIR:
        return "Dathomirian Solar Renewable Energy";
    case SWG_resource_types::ENERGY_RENEWABLE_UNLIMITED_SOLAR_ENDOR:
        return "Endorian Solar Renewable Energy";
    case SWG_resource_types::ENERGY_RENEWABLE_UNLIMITED_SOLAR_LOK:
        return "Lokian Solar Renewable Energy";
    case SWG_resource_types::ENERGY_RENEWABLE_UNLIMITED_SOLAR_NABOO:
        return "Nabooian Solar Renewable Energy";
    case SWG_resource_types::ENERGY_RENEWABLE_UNLIMITED_SOLAR_RORI:
        return "Rori Solar Renewable Energy";
    case SWG_resource_types::ENERGY_RENEWABLE_UNLIMITED_SOLAR_TALUS:
        return "Talusian Solar Renewable Energy";
    case SWG_resource_types::ENERGY_RENEWABLE_UNLIMITED_SOLAR_TATOOINE:
        return "Tatooinian Solar Renewable Energy";
    case SWG_resource_types::ENERGY_RENEWABLE_UNLIMITED_SOLAR_YAVIN4:
        return "Yavinian Solar Renewable Energy";
    case SWG_resource_types::ENERGY_RENEWABLE_UNLIMITED_WIND_CORELLIA:
        return "Corellian Wind Renewable Energy";
    case SWG_resource_types::ENERGY_RENEWABLE_UNLIMITED_WIND_DANTOOINE:
        return "Dantooine Wind Renewable Energy";
    case SWG_resource_types::ENERGY_RENEWABLE_UNLIMITED_WIND_DATHOMIR:
        return "Dathomirian Wind Renewable Energy";
    case SWG_resource_types::ENERGY_RENEWABLE_UNLIMITED_WIND_ENDOR:
        return "Endorian Wind Renewable Energy";
    case SWG_resource_types::ENERGY_RENEWABLE_UNLIMITED_WIND_LOK:
        return "Lokian Wind Renewable Energy";
    case SWG_resource_types::ENERGY_RENEWABLE_UNLIMITED_WIND_NABOO:
        return "Nabooian Wind Renewable Energy";
    case SWG_resource_types::ENERGY_RENEWABLE_UNLIMITED_WIND_RORI:
        return "Rori Wind Renewable Energy";
    case SWG_resource_types::ENERGY_RENEWABLE_UNLIMITED_WIND_TALUS:
        return "Talusian Wind Renewable Energy";
    case SWG_resource_types::ENERGY_RENEWABLE_UNLIMITED_WIND_TATOOINE:
        return "Tatooinian Wind Renewable Energy";
    case SWG_resource_types::ENERGY_RENEWABLE_UNLIMITED_WIND_YAVIN4:
        return "Yavinian Wind Renewable Energy";
    case SWG_resource_types::FIBERPLAST_CORELLIA:
        return "Corellia Fiberplast";
    case SWG_resource_types::FIBERPLAST_DANTOOINE:
        return "Dantooine Fiberplast";
    case SWG_resource_types::FIBERPLAST_DATHOMIR:
        return "Dathomirian Fiberplast";
    case SWG_resource_types::FIBERPLAST_ENDOR:
        return "Endorian Fiberplast";
    case SWG_resource_types::FIBERPLAST_GRAVITONIC:
        return "Gravitonic Fiberplast";
    case SWG_resource_types::FIBERPLAST_LOK:
        return "Lokian Fiberplast";
    case SWG_resource_types::FIBERPLAST_NABOO:
        return "Nabooian Fiberplast";
    case SWG_resource_types::FIBERPLAST_RORI:
        return "Rori Fiberplast";
    case SWG_resource_types::FIBERPLAST_TALUS:
        return "Talusian Fiberplast";
    case SWG_resource_types::FIBERPLAST_TATOOINE:
        return "Tatooinian Fiberplast";
    case SWG_resource_types::FIBERPLAST_YAVIN4:
        return "Yavinian Fiberplast";
    case SWG_resource_types::FRUIT_BERRIES_CORELLIA:
        return "Corellia Berry Fruit";
    case SWG_resource_types::FRUIT_BERRIES_DANTOOINE:
        return "Dantooine Berry Fruit";
    case SWG_resource_types::FRUIT_BERRIES_DATHOMIR:
        return "Dathomirian Berry Fruit";
    case SWG_resource_types::FRUIT_BERRIES_ENDOR:
        return "Endorian Berry Fruit";
    case SWG_resource_types::FRUIT_BERRIES_LOK:
        return "Lokian Berry Fruit";
    case SWG_resource_types::FRUIT_BERRIES_NABOO:
        return "Nabooian Berry Fruit";
    case SWG_resource_types::FRUIT_BERRIES_RORI:
        return "Rori Berry Fruit";
    case SWG_resource_types::FRUIT_BERRIES_TALUS:
        return "Talusian Berry Fruit";
    case SWG_resource_types::FRUIT_BERRIES_TATOOINE:
        return "Tatooinian Berry Fruit";
    case SWG_resource_types::FRUIT_BERRIES_YAVIN4:
        return "Yavinian Berry Fruit";
    case SWG_resource_types::FRUIT_FLOWERS_CORELLIA:
        return "Corellia Flower Fruit";
    case SWG_resource_types::FRUIT_FLOWERS_DANTOOINE:
        return "Dantooine Flower Fruit";
    case SWG_resource_types::FRUIT_FLOWERS_DATHOMIR:
        return "Dathomirian Flower Fruit";
    case SWG_resource_types::FRUIT_FLOWERS_ENDOR:
        return "Endorian Flower Fruit";
    case SWG_resource_types::FRUIT_FLOWERS_LOK:
        return "Lokian Flower Fruit";
    case SWG_resource_types::FRUIT_FLOWERS_NABOO:
        return "Nabooian Flower Fruit";
    case SWG_resource_types::FRUIT_FLOWERS_RORI:
        return "Rori Flower Fruit";
    case SWG_resource_types::FRUIT_FLOWERS_TALUS:
        return "Talusian Flower Fruit";
    case SWG_resource_types::FRUIT_FLOWERS_TATOOINE:
        return "Tatooinian Flower Fruit";
    case SWG_resource_types::FRUIT_FLOWERS_YAVIN4:
        return "Yavinian Flower Fruit";
    case SWG_resource_types::FRUIT_FRUITS_CORELLIA:
        return "Corellian Fruit";
    case SWG_resource_types::FRUIT_FRUITS_DANTOOINE:
        return "Dantooine Fruit";
    case SWG_resource_types::FRUIT_FRUITS_DATHOMIR:
        return "Dathomirian Fruit";
    case SWG_resource_types::FRUIT_FRUITS_ENDOR:
        return "Endorian Fruit";
    case SWG_resource_types::FRUIT_FRUITS_LOK:
        return "Lokian Fruit";
    case SWG_resource_types::FRUIT_FRUITS_NABOO:
        return "Nabooian Fruit";
    case SWG_resource_types::FRUIT_FRUITS_RORI:
        return "Rori Fruit";
    case SWG_resource_types::FRUIT_FRUITS_TALUS:
        return "Talusian Fruit";
    case SWG_resource_types::FRUIT_FRUITS_TATOOINE:
        return "Tatooinian Fruit";
    case SWG_resource_types::FRUIT_FRUITS_YAVIN4:
        return "Yavinian Fruit";
    case SWG_resource_types::GAS_INERT_BILAL:
        return "Bilal gas Inert Gas";
    case SWG_resource_types::GAS_INERT_CORTHEL:
        return "Corthel Inert Gas";
    case SWG_resource_types::GAS_INERT_CULSION:
        return "Culsion Inert Gas";
    case SWG_resource_types::GAS_INERT_DIOXIS:
        return "Dioxis Inert Gas";
    case SWG_resource_types::GAS_INERT_HURLOTHROMBIC:
        return "Hurlothrombic Inert Gas";
    case SWG_resource_types::GAS_INERT_HYDRON3:
        return "Hydron-3 Inert Gas";
    case SWG_resource_types::GAS_INERT_KAYLON:
        return "Kaylon Inert Gas";
    case SWG_resource_types::GAS_INERT_KORFAISE:
        return "Korfaise Inert Gas";
    case SWG_resource_types::GAS_INERT_MALIUM:
        return "Malium Inert Gas";
    case SWG_resource_types::GAS_INERT_METHANAGEN:
        return "Methanagen Inert Gas";
    case SWG_resource_types::GAS_INERT_MIRTH:
        return "Mirth Inert Gas";
    case SWG_resource_types::GAS_INERT_OBAH:
        return "Obah Inert Gas";
    case SWG_resource_types::GAS_INERT_RETHIN:
        return "Rethin Inert Gas";
    case SWG_resource_types::GAS_INERT_UNKNOWN:
        return "Unknown Inert Gas";
    case SWG_resource_types::GAS_REACTIVE_ELETON:
        return "Eleton Reactive Gas";
    case SWG_resource_types::GAS_REACTIVE_IROLUNN:
        return "Irolunn Reactive Gas";
    case SWG_resource_types::GAS_REACTIVE_METHANE:
        return "Methane Reactive Gas";
    case SWG_resource_types::GAS_REACTIVE_ORGANOMETALLIC:
        return "Unstable Organometallic Reactive Gas";
    case SWG_resource_types::GAS_REACTIVE_ORVETH:
        return "Orveth Reactive Gas";
    case SWG_resource_types::GAS_REACTIVE_SIG:
        return "Sig Reactive Gas";
    case SWG_resource_types::GAS_REACTIVE_SKEVON:
        return "Skevon Reactive Gas";
    case SWG_resource_types::GAS_REACTIVE_TOLIUM:
        return "Tolium Reactive Gas";
    case SWG_resource_types::GAS_REACTIVE_UNKNOWN:
        return "Unknown Reactive Gas";
    case SWG_resource_types::GEMSTONE_UNKNOWN:
        return "Unknown Gem Type";
    case SWG_resource_types::HIDE_BRISTLEY_CORELLIA:
        return "Corellian Bristley Hide";
    case SWG_resource_types::HIDE_BRISTLEY_DANTOOINE:
        return "Dantooine Bristley Hide";
    case SWG_resource_types::HIDE_BRISTLEY_DATHOMIR:
        return "Dathomirian Bristley Hide";
    case SWG_resource_types::HIDE_BRISTLEY_ENDOR:
        return "Endorian Bristley Hide";
    case SWG_resource_types::HIDE_BRISTLEY_LOK:
        return "Lokian Bristley Hide";
    case SWG_resource_types::HIDE_BRISTLEY_NABOO:
        return "Nabooian Bristley Hide";
    case SWG_resource_types::HIDE_BRISTLEY_RORI:
        return "Rori Bristley Hide";
    case SWG_resource_types::HIDE_BRISTLEY_TALUS:
        return "Talusian Bristley Hide";
    case SWG_resource_types::HIDE_BRISTLEY_TATOOINE:
        return "Tatooinian Bristley Hide";
    case SWG_resource_types::HIDE_BRISTLEY_YAVIN4:
        return "Yavinian Bristley Hide";
    case SWG_resource_types::HIDE_LEATHERY_CORELLIA:
        return "Corellian Leathery Hide";
    case SWG_resource_types::HIDE_LEATHERY_DANTOOINE:
        return "Dantooine Leathery Hide";
    case SWG_resource_types::HIDE_LEATHERY_DATHOMIR:
        return "Dathomirian Leathery Hide";
    case SWG_resource_types::HIDE_LEATHERY_ENDOR:
        return "Endorian Leathery Hide";
    case SWG_resource_types::HIDE_LEATHERY_LOK:
        return "Lokian Leathery Hide";
    case SWG_resource_types::HIDE_LEATHERY_NABOO:
        return "Nabooian Leathery Hide";
    case SWG_resource_types::HIDE_LEATHERY_RORI:
        return "Rori Leathery Hide";
    case SWG_resource_types::HIDE_LEATHERY_TALUS:
        return "Talusian Leathery Hide";
    case SWG_resource_types::HIDE_LEATHERY_TATOOINE:
        return "Tatooinian Leathery Hide";
    case SWG_resource_types::HIDE_LEATHERY_YAVIN4:
        return "Yavinian Leathery Hide";
    case SWG_resource_types::HIDE_SCALEY_CORELLIA:
        return "Corellian Scaley Hide";
    case SWG_resource_types::HIDE_SCALEY_DANTOOINE:
        return "Dantooine Scaley Hide";
    case SWG_resource_types::HIDE_SCALEY_DATHOMIR:
        return "Dathomirian Scaley Hide";
    case SWG_resource_types::HIDE_SCALEY_ENDOR:
        return "Endorian Scaley Hide";
    case SWG_resource_types::HIDE_SCALEY_LOK:
        return "Lokian Scaley Hide";
    case SWG_resource_types::HIDE_SCALEY_NABOO:
        return "Nabooian Scaley Hide";
    case SWG_resource_types::HIDE_SCALEY_RORI:
        return "Rori Scaley Hide";
    case SWG_resource_types::HIDE_SCALEY_TALUS:
        return "Talusian Scaley Hide";
    case SWG_resource_types::HIDE_SCALEY_TATOOINE:
        return "Tatooinian Scaley Hide";
    case SWG_resource_types::HIDE_SCALEY_YAVIN4:
        return "Yavinian Scaley Hide";
    case SWG_resource_types::HIDE_WOOLY_CORELLIA:
        return "Corellian Wooly Hide";
    case SWG_resource_types::HIDE_WOOLY_DANTOOINE:
        return "Dantooine Wooly Hide";
    case SWG_resource_types::HIDE_WOOLY_DATHOMIR:
        return "Dathomirian Wooly Hide";
    case SWG_resource_types::HIDE_WOOLY_ENDOR:
        return "Endorian Wooly Hide";
    case SWG_resource_types::HIDE_WOOLY_LOK:
        return "Lokian Wooly Hide";
    case SWG_resource_types::HIDE_WOOLY_NABOO:
        return "Nabooian Wooly Hide";
    case SWG_resource_types::HIDE_WOOLY_RORI:
        return "Rori Wooly Hide";
    case SWG_resource_types::HIDE_WOOLY_TALUS:
        return "Talusian Wooly Hide";
    case SWG_resource_types::HIDE_WOOLY_TATOOINE:
        return "Tatooinian Wooly Hide";
    case SWG_resource_types::HIDE_WOOLY_YAVIN4:
        return "Yavinian Wooly Hide";
    case SWG_resource_types::IRON_AXIDITE:
        return "Axidite Iron";
    case SWG_resource_types::IRON_BRONZIUM:
        return "Bronzium Iron";
    case SWG_resource_types::IRON_COLAT:
        return "Colat Iron";
    case SWG_resource_types::IRON_DOLOVITE:
        return "Dolovite Iron";
    case SWG_resource_types::IRON_DOONIUM:
        return "Doonium Iron";
    case SWG_resource_types::IRON_KAMMRIS:
        return "Kammris Iron";
    case SWG_resource_types::IRON_PLUMBUM:
        return "Plumbum Iron";
    case SWG_resource_types::IRON_POLONIUM:
        return "Polonium Iron";
    case SWG_resource_types::MEAT_AVIAN_CORELLIA:
        return "Corellian Avian Meat";
    case SWG_resource_types::MEAT_AVIAN_DANTOOINE:
        return "Dantooine Avian Meat";
    case SWG_resource_types::MEAT_AVIAN_DATHOMIR:
        return "Dathomirian Avian Meat";
    case SWG_resource_types::MEAT_AVIAN_ENDOR:
        return "Endorian Avian Meat";
    case SWG_resource_types::MEAT_AVIAN_LOK:
        return "Lokian Avian Meat";
    case SWG_resource_types::MEAT_AVIAN_NABOO:
        return "Nabooian Avian Meat";
    case SWG_resource_types::MEAT_AVIAN_RORI:
        return "Rori Avian Meat";
    case SWG_resource_types::MEAT_AVIAN_TALUS:
        return "Talusian Avian Meat";
    case SWG_resource_types::MEAT_AVIAN_TATOOINE:
        return "Tatooinian Avian Meat";
    case SWG_resource_types::MEAT_AVIAN_YAVIN4:
        return "Yavinian Avian Meat";
    case SWG_resource_types::MEAT_CARNIVORE_CORELLIA:
        return "Corellian Carnivore Meat";
    case SWG_resource_types::MEAT_CARNIVORE_DANTOOINE:
        return "Dantooine Carnivore Meat";
    case SWG_resource_types::MEAT_CARNIVORE_DATHOMIR:
        return "Dathomirian Carnivore Meat";
    case SWG_resource_types::MEAT_CARNIVORE_ENDOR:
        return "Endorian Carnivore Meat";
    case SWG_resource_types::MEAT_CARNIVORE_LOK:
        return "Lokian Carnivore Meat";
    case SWG_resource_types::MEAT_CARNIVORE_NABOO:
        return "Nabooian Carnivore Meat";
    case SWG_resource_types::MEAT_CARNIVORE_RORI:
        return "Rori Carnivore Meat";
    case SWG_resource_types::MEAT_CARNIVORE_TALUS:
        return "Talusian Carnivore Meat";
    case SWG_resource_types::MEAT_CARNIVORE_TATOOINE:
        return "Tatooinian Carnivore Meat";
    case SWG_resource_types::MEAT_CARNIVORE_YAVIN4:
        return "Yavinian Carnivore Meat";
    case SWG_resource_types::MEAT_DOMESTICATED_CORELLIA:
        return "Corellian Domesticated Meat";
    case SWG_resource_types::MEAT_DOMESTICATED_DANTOOINE:
        return "Dantooine Domesticated Meat";
    case SWG_resource_types::MEAT_DOMESTICATED_DATHOMIR:
        return "Dathomirian Domesticated Meat";
    case SWG_resource_types::MEAT_DOMESTICATED_ENDOR:
        return "Endorian Domesticated Meat";
    case SWG_resource_types::MEAT_DOMESTICATED_LOK:
        return "Lokian Domesticated Meat";
    case SWG_resource_types::MEAT_DOMESTICATED_NABOO:
        return "Nabooian Domesticated Meat";
    case SWG_resource_types::MEAT_DOMESTICATED_RORI:
        return "Rori Domesticated Meat";
    case SWG_resource_types::MEAT_DOMESTICATED_TALUS:
        return "Talusian Domesticated Meat";
    case SWG_resource_types::MEAT_DOMESTICATED_TATOOINE:
        return "Tatooinian Domesticated Meat";
    case SWG_resource_types::MEAT_DOMESTICATED_YAVIN4:
        return "Yavinian Domesticated Meat";
    case SWG_resource_types::MEAT_EGG_CORELLIA:
        return "Corellian Egg";
    case SWG_resource_types::MEAT_EGG_DANTOOINE:
        return "Dantooine Egg";
    case SWG_resource_types::MEAT_EGG_DATHOMIR:
        return "Dathomirian Egg";
    case SWG_resource_types::MEAT_EGG_ENDOR:
        return "Endorian Egg";
    case SWG_resource_types::MEAT_EGG_LOK:
        return "Lokian Egg";
    case SWG_resource_types::MEAT_EGG_NABOO:
        return "Nabooian Egg";
    case SWG_resource_types::MEAT_EGG_RORI:
        return "Rori Egg";
    case SWG_resource_types::MEAT_EGG_TALUS:
        return "Talusian Egg";
    case SWG_resource_types::MEAT_EGG_TATOOINE:
        return "Tatooinian Egg";
    case SWG_resource_types::MEAT_EGG_YAVIN4:
        return "Yavinian Egg";
    case SWG_resource_types::MEAT_HERBIVORE_CORELLIA:
        return "Corellian Herbivore Meat";
    case SWG_resource_types::MEAT_HERBIVORE_DANTOOINE:
        return "Dantooine Herbivore Meat";
    case SWG_resource_types::MEAT_HERBIVORE_DATHOMIR:
        return "Dathomirian Herbivore Meat";
    case SWG_resource_types::MEAT_HERBIVORE_ENDOR:
        return "Endorian Herbivore Meat";
    case SWG_resource_types::MEAT_HERBIVORE_LOK:
        return "Lokian Herbivore Meat";
    case SWG_resource_types::MEAT_HERBIVORE_NABOO:
        return "Nabooian Herbivore Meat";
    case SWG_resource_types::MEAT_HERBIVORE_RORI:
        return "Rori Herbivore Meat";
    case SWG_resource_types::MEAT_HERBIVORE_TALUS:
        return "Talusian Herbivore Meat";
    case SWG_resource_types::MEAT_HERBIVORE_TATOOINE:
        return "Tatooinian Herbivore Meat";
    case SWG_resource_types::MEAT_HERBIVORE_YAVIN4:
        return "Yavinian Herbivore Meat";
    case SWG_resource_types::MEAT_INSECT_CORELLIA:
        return "Corellian Insect Meat";
    case SWG_resource_types::MEAT_INSECT_DANTOOINE:
        return "Dantooine Insect Meat";
    case SWG_resource_types::MEAT_INSECT_DATHOMIR:
        return "Dathomirian Insect Meat";
    case SWG_resource_types::MEAT_INSECT_ENDOR:
        return "Endorian Insect Meat";
    case SWG_resource_types::MEAT_INSECT_LOK:
        return "Lokian Insect Meat";
    case SWG_resource_types::MEAT_INSECT_NABOO:
        return "Nabooian Insect Meat";
    case SWG_resource_types::MEAT_INSECT_RORI:
        return "Rori Insect Meat";
    case SWG_resource_types::MEAT_INSECT_TALUS:
        return "Talusian Insect Meat";
    case SWG_resource_types::MEAT_INSECT_TATOOINE:
        return "Tatooinian Insect Meat";
    case SWG_resource_types::MEAT_INSECT_YAVIN4:
        return "Yavinian Insect Meat";
    case SWG_resource_types::MEAT_REPTILIAN_CORELLIA:
        return "Corellian Reptillian Meat";
    case SWG_resource_types::MEAT_REPTILIAN_DANTOOINE:
        return "Dantooine Reptillian Meat";
    case SWG_resource_types::MEAT_REPTILIAN_DATHOMIR:
        return "Dathomirian Reptillian Meat";
    case SWG_resource_types::MEAT_REPTILIAN_ENDOR:
        return "Endorian Reptillian Meat";
    case SWG_resource_types::MEAT_REPTILIAN_LOK:
        return "Lokian Reptillian Meat";
    case SWG_resource_types::MEAT_REPTILIAN_NABOO:
        return "Nabooian Reptillian Meat";
    case SWG_resource_types::MEAT_REPTILIAN_RORI:
        return "Rori Reptillian Meat";
    case SWG_resource_types::MEAT_REPTILIAN_TALUS:
        return "Talusian Reptillian Meat";
    case SWG_resource_types::MEAT_REPTILIAN_TATOOINE:
        return "Tatooinian Reptillian Meat";
    case SWG_resource_types::MEAT_REPTILIAN_YAVIN4:
        return "Yavinian Reptillian Meat";
    case SWG_resource_types::MEAT_WILD_CORELLIA:
        return "Corellian Wild Meat";
    case SWG_resource_types::MEAT_WILD_DANTOOINE:
        return "Dantooine Wild Meat";
    case SWG_resource_types::MEAT_WILD_DATHOMIR:
        return "Dathomirian Wild Meat";
    case SWG_resource_types::MEAT_WILD_ENDOR:
        return "Endorian Wild Meat";
    case SWG_resource_types::MEAT_WILD_LOK:
        return "Lokian Wild Meat";
    case SWG_resource_types::MEAT_WILD_NABOO:
        return "Nabooian Wild Meat";
    case SWG_resource_types::MEAT_WILD_RORI:
        return "Rori Wild Meat";
    case SWG_resource_types::MEAT_WILD_TALUS:
        return "Talusian Wild Meat";
    case SWG_resource_types::MEAT_WILD_TATOOINE:
        return "Tatooinian Wild Meat";
    case SWG_resource_types::MEAT_WILD_YAVIN4:
        return "Yavinian Wild Meat";
    case SWG_resource_types::METAL_FERROUS_UNKNOWN:
        return "Unknown Ferrous Metal";
    case SWG_resource_types::METAL_NONFERROUS_UNKNOWN:
        return "Unknown Non-Ferrous Metal";
    case SWG_resource_types::MILK_DOMESTICATED_CORELLIA:
        return "Corellian Domesticated Milk";
    case SWG_resource_types::MILK_DOMESTICATED_DANTOOINE:
        return "Dantooine Domesticated Milk";
    case SWG_resource_types::MILK_DOMESTICATED_DATHOMIR:
        return "Dathomirian  Domesticated Milk";
    case SWG_resource_types::MILK_DOMESTICATED_ENDOR:
        return "Endorian Domesticated Milk";
    case SWG_resource_types::MILK_DOMESTICATED_LOK:
        return "Lokian Domesticated Milk";
    case SWG_resource_types::MILK_DOMESTICATED_NABOO:
        return "Nabooian Domesticated Milk";
    case SWG_resource_types::MILK_DOMESTICATED_RORI:
        return "Rori Domesticated Milk";
    case SWG_resource_types::MILK_DOMESTICATED_TALUS:
        return "Talusian Domesticated Milk";
    case SWG_resource_types::MILK_DOMESTICATED_TATOOINE:
        return "Tatooinian Domesticated Milk";
    case SWG_resource_types::MILK_DOMESTICATED_YAVIN4:
        return "Yavinian Domesticated Milk";
    case SWG_resource_types::MILK_WILD_CORELLIA:
        return "Corellian Wild Milk";
    case SWG_resource_types::MILK_WILD_DANTOOINE:
        return "Dantooine Wild Milk";
    case SWG_resource_types::MILK_WILD_DATHOMIR:
        return "Dathomirian Wild Milk";
    case SWG_resource_types::MILK_WILD_ENDOR:
        return "Endorian Wild Milk";
    case SWG_resource_types::MILK_WILD_LOK:
        return "Lokian Wild Milk";
    case SWG_resource_types::MILK_WILD_NABOO:
        return "Nabooian Wild Milk";
    case SWG_resource_types::MILK_WILD_RORI:
        return "Rori Wild Milk";
    case SWG_resource_types::MILK_WILD_TALUS:
        return "Talusian Wild Milk";
    case SWG_resource_types::MILK_WILD_TATOOINE:
        return "Tatooinian Wild Milk";
    case SWG_resource_types::MILK_WILD_YAVIN4:
        return "Yavin IV Wild Milk";
    case SWG_resource_types::OATS_DOMESTICATED_CORELLIA:
        return "Corellian Domesticated Oats";
    case SWG_resource_types::OATS_DOMESTICATED_DANTOOINE:
        return "Dantooine Domesticated Oats";
    case SWG_resource_types::OATS_DOMESTICATED_DATHOMIR:
        return "Dathomirian Domesticated Oats";
    case SWG_resource_types::OATS_DOMESTICATED_ENDOR:
        return "Endorian Domesticated Oats";
    case SWG_resource_types::OATS_DOMESTICATED_LOK:
        return "Lokian Domesticated Oats";
    case SWG_resource_types::OATS_DOMESTICATED_NABOO:
        return "Nabooian Domesticated Oats";
    case SWG_resource_types::OATS_DOMESTICATED_RORI:
        return "Rori Domesticated Oats";
    case SWG_resource_types::OATS_DOMESTICATED_TALUS:
        return "Talusian Domesticated Oats";
    case SWG_resource_types::OATS_DOMESTICATED_TATOOINE:
        return "Tatooinian Domesticated Oats";
    case SWG_resource_types::OATS_DOMESTICATED_YAVIN4:
        return "Yavinian Domesticated Oats";
    case SWG_resource_types::OATS_WILD_CORELLIA:
        return "Corellian Wild Oats";
    case SWG_resource_types::OATS_WILD_DANTOOINE:
        return "Dantooine Wild Oats";
    case SWG_resource_types::OATS_WILD_DATHOMIR:
        return "Dathomirian Wild Oats";
    case SWG_resource_types::OATS_WILD_ENDOR:
        return "Endorian Wild Oats";
    case SWG_resource_types::OATS_WILD_LOK:
        return "Lokian Wild Oats";
    case SWG_resource_types::OATS_WILD_NABOO:
        return "Nabooian Wild Oats";
    case SWG_resource_types::OATS_WILD_RORI:
        return "Rori Wild Oats";
    case SWG_resource_types::OATS_WILD_TALUS:
        return "Talusian Wild Oats";
    case SWG_resource_types::OATS_WILD_TATOOINE:
        return "Tatooinian Wild Oats";
    case SWG_resource_types::OATS_WILD_YAVIN4:
        return "Yavinian Wild Oats";
    case SWG_resource_types::ORE_CARBONATE_ALANTIUM:
        return "Alantium Carbonate Ore";
    case SWG_resource_types::ORE_CARBONATE_BARTHIERIUM:
        return "Barthierium Carbonate Ore";
    case SWG_resource_types::ORE_CARBONATE_CHROMITE:
        return "Chromite Carbonate Ore";
    case SWG_resource_types::ORE_CARBONATE_FRASIUM:
        return "Frasium Carbonate Ore";
    case SWG_resource_types::ORE_CARBONATE_LOMMITE:
        return "Lommite Carbonate Ore";
    case SWG_resource_types::ORE_CARBONATE_OSTRINE:
        return "Ostrine Carbonate Ore";
    case SWG_resource_types::ORE_CARBONATE_VARIUM:
        return "Varium Carbonate Ore";
    case SWG_resource_types::ORE_CARBONATE_ZINSIAM:
        return "Zinsiam Carbonate Ore";
    case SWG_resource_types::ORE_EXTRUSIVE_BENE:
        return "Bene Extrusive Ore";
    case SWG_resource_types::ORE_EXTRUSIVE_CHRONAMITE:
        return "Chronamite Extrusive Ore";
    case SWG_resource_types::ORE_EXTRUSIVE_ILIMIUM:
        return "Ilimium Extrusive Ore";
    case SWG_resource_types::ORE_EXTRUSIVE_KALONTERIUM:
        return "Kalonterium Extrusive Ore";
    case SWG_resource_types::ORE_EXTRUSIVE_KESCHEL:
        return "Keschel Extrusive Ore";
    case SWG_resource_types::ORE_EXTRUSIVE_LIDIUM:
        return "Lidium Extrusive Ore";
    case SWG_resource_types::ORE_EXTRUSIVE_MARANIUM:
        return "Maranium Extrusive Ore";
    case SWG_resource_types::ORE_EXTRUSIVE_PHOLOKITE:
        return "Pholokite Extrusive Ore";
    case SWG_resource_types::ORE_EXTRUSIVE_QUADRENIUM:
        return "Quadrenium Extrusive Ore";
    case SWG_resource_types::ORE_EXTRUSIVE_VINTRIUM:
        return "Vintrium Extrusive Ore";
    case SWG_resource_types::ORE_IGNEOUS_UNKNOWN:
        return "Unknown Igneous Ore";
    case SWG_resource_types::ORE_INTRUSIVE_BERUBIUM:
        return "Berubium Intrusive Ore";
    case SWG_resource_types::ORE_INTRUSIVE_CHANLON:
        return "Chanlon Intrusive Ore";
    case SWG_resource_types::ORE_INTRUSIVE_CORINTIUM:
        return "Corintium Intrusive Ore";
    case SWG_resource_types::ORE_INTRUSIVE_DERILLIUM:
        return "Derillium Intrusive Ore";
    case SWG_resource_types::ORE_INTRUSIVE_DYLINIUM:
        return "Dylinium Intrusive Ore";
    case SWG_resource_types::ORE_INTRUSIVE_HOLLINIUM:
        return "Hollinium Intrusive Ore";
    case SWG_resource_types::ORE_INTRUSIVE_IONITE:
        return "Ionite Intrusive Ore";
    case SWG_resource_types::ORE_INTRUSIVE_KATRIUM:
        return "Katrium Intrusive Ore";
    case SWG_resource_types::ORE_INTRUSIVE_ORIDIUM:
        return "Oridium Intrusive Ore";
    case SWG_resource_types::ORE_SEDIMENTARY_UNKNOWN:
        return "Unknown Sedimentary Ore";
    case SWG_resource_types::ORE_SILICLASTIC_ARDANIUM:
        return "Ardanium Siliclastic Ore";
    case SWG_resource_types::ORE_SILICLASTIC_CORTOSIS:
        return "Cortosis Siliclastic Ore";
    case SWG_resource_types::ORE_SILICLASTIC_CRISM:
        return "Crism Siliclastic Ore";
    case SWG_resource_types::ORE_SILICLASTIC_FERMIONIC:
        return "Fermionic Siliclastic Ore";
    case SWG_resource_types::ORE_SILICLASTIC_MALAB:
        return "Malab Siliclastic Ore";
    case SWG_resource_types::ORE_SILICLASTIC_ROBINDUN:
        return "Robindun Siliclastic Ore";
    case SWG_resource_types::ORE_SILICLASTIC_TERTIAN:
        return "Tertian Siliclastic Ore";
    case SWG_resource_types::PETROCHEM_FUEL_LIQUID_TYPE1:
        return "Class 1 Liquid Petro Fuel";
    case SWG_resource_types::PETROCHEM_FUEL_LIQUID_TYPE2:
        return "Class 2 Liquid Petro Fuel";
    case SWG_resource_types::PETROCHEM_FUEL_LIQUID_TYPE3:
        return "Class 3 Liquid Petro Fuel";
    case SWG_resource_types::PETROCHEM_FUEL_LIQUID_TYPE4:
        return "Class 4 Liquid Petro Fuel";
    case SWG_resource_types::PETROCHEM_FUEL_LIQUID_TYPE5:
        return "Class 5 Liquid Petro Fuel";
    case SWG_resource_types::PETROCHEM_FUEL_LIQUID_TYPE6:
        return "Class 6 Liquid Petro Fuel";
    case SWG_resource_types::PETROCHEM_FUEL_LIQUID_TYPE7:
        return "Class 7 Liquid Petro Fuel";
    case SWG_resource_types::PETROCHEM_FUEL_LIQUID_UNKNOWN:
        return "Unknown Liquid Petrochem Fuel";
    case SWG_resource_types::PETROCHEM_FUEL_SOLID_TYPE1:
        return "Class 1 Solid Petro Fuel";
    case SWG_resource_types::PETROCHEM_FUEL_SOLID_TYPE2:
        return "Class 2 Solid Petro Fuel";
    case SWG_resource_types::PETROCHEM_FUEL_SOLID_TYPE3:
        return "Class 3 Solid Petro Fuel";
    case SWG_resource_types::PETROCHEM_FUEL_SOLID_TYPE4:
        return "Class 4 Solid Petro Fuel";
    case SWG_resource_types::PETROCHEM_FUEL_SOLID_TYPE5:
        return "Class 5 Solid Petro Fuel";
    case SWG_resource_types::PETROCHEM_FUEL_SOLID_TYPE6:
        return "Class 6 Solid Petro Fuel";
    case SWG_resource_types::PETROCHEM_FUEL_SOLID_TYPE7:
        return "Class 7 Solid Petro Fuel";
    case SWG_resource_types::PETROCHEM_FUEL_SOLID_UNKNOWN:
        return "Unknown Solid Petrochem Fuel";
    case SWG_resource_types::PETROCHEM_INERT_LUBRICATING_OIL:
        return "Lubricating Oil";
    case SWG_resource_types::PETROCHEM_INERT_POLYMER:
        return "Polymer";
    case SWG_resource_types::RADIOACTIVE_POLYMETRIC:
        return "High Grade Polymetric Radioactive";
    case SWG_resource_types::RADIOACTIVE_TYPE1:
        return "Class 1 Radioactive";
    case SWG_resource_types::RADIOACTIVE_TYPE2:
        return "Class 2 Radioactive";
    case SWG_resource_types::RADIOACTIVE_TYPE3:
        return "Class 3 Radioactive";
    case SWG_resource_types::RADIOACTIVE_TYPE4:
        return "Class 4 Radioactive";
    case SWG_resource_types::RADIOACTIVE_TYPE5:
        return "Class 5 Radioactive";
    case SWG_resource_types::RADIOACTIVE_TYPE6:
        return "Class 6 Radioactive";
    case SWG_resource_types::RADIOACTIVE_TYPE7:
        return "Class 7 Radioactive";
    case SWG_resource_types::RADIOACTIVE_UNKNOWN:
        return "Unknown Radioactive";
    case SWG_resource_types::RICE_DOMESTICATED_CORELLIA:
        return "Corellian Domesticated Rice";
    case SWG_resource_types::RICE_DOMESTICATED_DANTOOINE:
        return "Dantooine Domesticated Rice";
    case SWG_resource_types::RICE_DOMESTICATED_DATHOMIR:
        return "Dathomirian Domesticated Rice";
    case SWG_resource_types::RICE_DOMESTICATED_ENDOR:
        return "Endorian Domesticated Rice";
    case SWG_resource_types::RICE_DOMESTICATED_LOK:
        return "Lokian Domesticated Rice";
    case SWG_resource_types::RICE_DOMESTICATED_NABOO:
        return "Nabooian Domesticated Rice";
    case SWG_resource_types::RICE_DOMESTICATED_RORI:
        return "Rori Domesticated Rice";
    case SWG_resource_types::RICE_DOMESTICATED_TALUS:
        return "Talusian Domesticated Rice";
    case SWG_resource_types::RICE_DOMESTICATED_TATOOINE:
        return "Tatooinian Domesticated Rice";
    case SWG_resource_types::RICE_DOMESTICATED_YAVIN4:
        return "Yavinian Domesticated Rice";
    case SWG_resource_types::RICE_WILD_CORELLIA:
        return "Corellian Wild Rice";
    case SWG_resource_types::RICE_WILD_DANTOOINE:
        return "Dantooine Wild Rice";
    case SWG_resource_types::RICE_WILD_DATHOMIR:
        return "Dathomirian Wild Rice";
    case SWG_resource_types::RICE_WILD_ENDOR:
        return "Endorian Wild Rice";
    case SWG_resource_types::RICE_WILD_LOK:
        return "Lokian Wild Rice";
    case SWG_resource_types::RICE_WILD_NABOO:
        return "Nabooian Wild Rice";
    case SWG_resource_types::RICE_WILD_RORI:
        return "Rori Wild Rice";
    case SWG_resource_types::RICE_WILD_TALUS:
        return "Talusian Wild Rice";
    case SWG_resource_types::RICE_WILD_TATOOINE:
        return "Tatooinian Wild Rice";
    case SWG_resource_types::RICE_WILD_YAVIN4:
        return "Yavinian Wild Rice";
    case SWG_resource_types::SEAFOOD_CRUSTACEAN_CORELLIA:
        return "Corellia Crustacean Meat";
    case SWG_resource_types::SEAFOOD_CRUSTACEAN_DANTOOINE:
        return "Dantooine Crustacean Meat";
    case SWG_resource_types::SEAFOOD_CRUSTACEAN_DATHOMIR:
        return "Dathomirian Crustacean Meat";
    case SWG_resource_types::SEAFOOD_CRUSTACEAN_ENDOR:
        return "Endorian Crustacean Meat";
    case SWG_resource_types::SEAFOOD_CRUSTACEAN_LOK:
        return "Lokian Crustacean Meat";
    case SWG_resource_types::SEAFOOD_CRUSTACEAN_NABOO:
        return "Nabooian Crustacean Meat";
    case SWG_resource_types::SEAFOOD_CRUSTACEAN_RORI:
        return "Rori Crustacean Meat";
    case SWG_resource_types::SEAFOOD_CRUSTACEAN_TALUS:
        return "Talusian Crustacean Meat";
    case SWG_resource_types::SEAFOOD_CRUSTACEAN_TATOOINE:
        return "Tatooinian Crustacean Meat";
    case SWG_resource_types::SEAFOOD_CRUSTACEAN_YAVIN4:
        return "Yavinian Crustacean Meat";
    case SWG_resource_types::SEAFOOD_FISH_CORELLIA:
        return "Corellian Fish Meat";
    case SWG_resource_types::SEAFOOD_FISH_DANTOOINE:
        return "Dantooine Fish Meat";
    case SWG_resource_types::SEAFOOD_FISH_DATHOMIR:
        return "Dathomirian Fish Meat";
    case SWG_resource_types::SEAFOOD_FISH_ENDOR:
        return "Endorian Fish Meat";
    case SWG_resource_types::SEAFOOD_FISH_LOK:
        return "Lokian Fish Meat";
    case SWG_resource_types::SEAFOOD_FISH_NABOO:
        return "Nabooian Fish Meat";
    case SWG_resource_types::SEAFOOD_FISH_RORI:
        return "Rori Fish Meat";
    case SWG_resource_types::SEAFOOD_FISH_TALUS:
        return "Talusian Fish Meat";
    case SWG_resource_types::SEAFOOD_FISH_TATOOINE:
        return "Tatooinian Fish Meat";
    case SWG_resource_types::SEAFOOD_FISH_YAVIN4:
        return "Yavinian Fish Meat";
    case SWG_resource_types::SEAFOOD_MOLLUSK_CORELLIA:
        return "Corellia Mollusk Meat";
    case SWG_resource_types::SEAFOOD_MOLLUSK_DANTOOINE:
        return "Dantooine Mollusk Meat";
    case SWG_resource_types::SEAFOOD_MOLLUSK_DATHOMIR:
        return "Dathomirian Mollusk Meat";
    case SWG_resource_types::SEAFOOD_MOLLUSK_ENDOR:
        return "Endorian Mollusk Meat";
    case SWG_resource_types::SEAFOOD_MOLLUSK_LOK:
        return "Lokian Mollusk Meat";
    case SWG_resource_types::SEAFOOD_MOLLUSK_NABOO:
        return "Nabooian Mollusk Meat";
    case SWG_resource_types::SEAFOOD_MOLLUSK_RORI:
        return "Rori Mollusk Meat";
    case SWG_resource_types::SEAFOOD_MOLLUSK_TALUS:
        return "Talusian Mollusk Meat";
    case SWG_resource_types::SEAFOOD_MOLLUSK_TATOOINE:
        return "Tatooinian Mollusk Meat";
    case SWG_resource_types::SEAFOOD_MOLLUSK_YAVIN4:
        return "Yavinian Mollusk Meat";
    case SWG_resource_types::SOFTWOOD_CONIFER_CORELLIA:
        return "Corellian Conifer Wood";
    case SWG_resource_types::SOFTWOOD_CONIFER_DANTOOINE:
        return "Dantooine Conifer Wood";
    case SWG_resource_types::SOFTWOOD_CONIFER_DATHOMIR:
        return "Dathomirian Conifer Wood";
    case SWG_resource_types::SOFTWOOD_CONIFER_ENDOR:
        return "Endorian Conifer Wood";
    case SWG_resource_types::SOFTWOOD_CONIFER_LOK:
        return "Lokian Conifer Wood";
    case SWG_resource_types::SOFTWOOD_CONIFER_NABOO:
        return "Nabooian Conifer Wood";
    case SWG_resource_types::SOFTWOOD_CONIFER_RORI:
        return "Rori Conifer Wood";
    case SWG_resource_types::SOFTWOOD_CONIFER_TALUS:
        return "Talusian Conifer Wood";
    case SWG_resource_types::SOFTWOOD_CONIFER_TATOOINE:
        return "Tatooinian Conifer Wood";
    case SWG_resource_types::SOFTWOOD_CONIFER_YAVIN4:
        return "Yavinian Conifer Wood";
    case SWG_resource_types::SOFTWOOD_EVERGREEN_CORELLIA:
        return "Corellia Evergreen Wood";
    case SWG_resource_types::SOFTWOOD_EVERGREEN_DANTOOINE:
        return "Dantooine Evergreen Wood";
    case SWG_resource_types::SOFTWOOD_EVERGREEN_DATHOMIR:
        return "Dathomirian Evergreen Wood";
    case SWG_resource_types::SOFTWOOD_EVERGREEN_ENDOR:
        return "Endorian Evergreen Wood";
    case SWG_resource_types::SOFTWOOD_EVERGREEN_LOK:
        return "Lokian Evergreen Wood";
    case SWG_resource_types::SOFTWOOD_EVERGREEN_NABOO:
        return "Nabooian Evergreen Wood";
    case SWG_resource_types::SOFTWOOD_EVERGREEN_RORI:
        return "Rori Evergreen Wood";
    case SWG_resource_types::SOFTWOOD_EVERGREEN_TALUS:
        return "Talusian Evergreen Wood";
    case SWG_resource_types::SOFTWOOD_EVERGREEN_TATOOINE:
        return "Tatooinian Evergreen Wood";
    case SWG_resource_types::SOFTWOOD_EVERGREEN_YAVIN4:
        return "Yavinian Evergreen Wood";
    case SWG_resource_types::STEEL_ARVESHIAN:
        return "Hardened Arveshium Steel";
    case SWG_resource_types::STEEL_BICORBANTIUM:
        return "Crystallized Bicorbantium Steel";
    case SWG_resource_types::STEEL_CARBONITE:
        return "Carbonite Steel";
    case SWG_resource_types::STEEL_CUBIRIAN:
        return "Cubirian Steel";
    case SWG_resource_types::STEEL_DITANIUM:
        return "Ditanium Steel";
    case SWG_resource_types::STEEL_DURALLOY:
        return "Duralloy Steel";
    case SWG_resource_types::STEEL_DURANIUM:
        return "Duranium Steel";
    case SWG_resource_types::STEEL_KIIRIUM:
        return "Kiirium Steel";
    case SWG_resource_types::STEEL_NEUTRONIUM:
        return "Neutronium Steel";
    case SWG_resource_types::STEEL_QUADRANIUM:
        return "Quadranium Steel";
    case SWG_resource_types::STEEL_RHODIUM:
        return "Rhodium Steel";
    case SWG_resource_types::STEEL_THORANIUM:
        return "Thoranium Steel";
    case SWG_resource_types::VEGETABLE_BEANS_CORELLIA:
        return "Corellian Vegetable Beans";
    case SWG_resource_types::VEGETABLE_BEANS_DANTOOINE:
        return "Dantooine Vegetable Beans";
    case SWG_resource_types::VEGETABLE_BEANS_DATHOMIR:
        return "Dathomirian Vegetable Beans";
    case SWG_resource_types::VEGETABLE_BEANS_ENDOR:
        return "Endorian Vegetable Beans";
    case SWG_resource_types::VEGETABLE_BEANS_LOK:
        return "Lokian Vegetable Beans";
    case SWG_resource_types::VEGETABLE_BEANS_NABOO:
        return "Nabooian Vegetable Beans";
    case SWG_resource_types::VEGETABLE_BEANS_RORI:
        return "Rori Vegetable Beans";
    case SWG_resource_types::VEGETABLE_BEANS_TALUS:
        return "Talusian Vegetable Beans";
    case SWG_resource_types::VEGETABLE_BEANS_TATOOINE:
        return "Tatooinian Vegetable Beans";
    case SWG_resource_types::VEGETABLE_BEANS_YAVIN4:
        return "Yavinian Vegetable Beans";
    case SWG_resource_types::VEGETABLE_FUNGI_CORELLIA:
        return "Corellian Vegetable Fungus";
    case SWG_resource_types::VEGETABLE_FUNGI_DANTOOINE:
        return "Dantooine Vegetable Fungus";
    case SWG_resource_types::VEGETABLE_FUNGI_DATHOMIR:
        return "Dathomirian Vegetable Fungus";
    case SWG_resource_types::VEGETABLE_FUNGI_ENDOR:
        return "Endorian Vegetable Fungus";
    case SWG_resource_types::VEGETABLE_FUNGI_LOK:
        return "Lokian Vegetable Fungus";
    case SWG_resource_types::VEGETABLE_FUNGI_NABOO:
        return "Nabooian Vegetable Fungus";
    case SWG_resource_types::VEGETABLE_FUNGI_RORI:
        return "Rori Vegetable Fungus";
    case SWG_resource_types::VEGETABLE_FUNGI_TALUS:
        return "Talusian Vegetable Fungus";
    case SWG_resource_types::VEGETABLE_FUNGI_TATOOINE:
        return "Tatooinian Vegetable Fungus";
    case SWG_resource_types::VEGETABLE_FUNGI_YAVIN4:
        return "Yavinian Vegetable Fungus";
    case SWG_resource_types::VEGETABLE_GREENS_CORELLIA:
        return "Corellian Vegetable Greens";
    case SWG_resource_types::VEGETABLE_GREENS_DANTOOINE:
        return "Dantooine Vegetable Greens";
    case SWG_resource_types::VEGETABLE_GREENS_DATHOMIR:
        return "Dathomirian Vegetable Greens";
    case SWG_resource_types::VEGETABLE_GREENS_ENDOR:
        return "Endorian Vegetable Greens";
    case SWG_resource_types::VEGETABLE_GREENS_LOK:
        return "Lokian Vegetable Greens";
    case SWG_resource_types::VEGETABLE_GREENS_NABOO:
        return "Nabooian Vegetable Greens";
    case SWG_resource_types::VEGETABLE_GREENS_RORI:
        return "Rori Vegetable Greens";
    case SWG_resource_types::VEGETABLE_GREENS_TALUS:
        return "Talusian Vegetable Greens";
    case SWG_resource_types::VEGETABLE_GREENS_TATOOINE:
        return "Tatooinian Vegetable Greens";
    case SWG_resource_types::VEGETABLE_GREENS_YAVIN4:
        return "Yavinian Vegetable Greens";
    case SWG_resource_types::VEGETABLE_TUBERS_CORELLIA:
        return "Corellian Vegetable Tubers";
    case SWG_resource_types::VEGETABLE_TUBERS_DANTOOINE:
        return "Dantooine Vegetable Tubers";
    case SWG_resource_types::VEGETABLE_TUBERS_DATHOMIR:
        return "Dathomirian Vegetable Tubers";
    case SWG_resource_types::VEGETABLE_TUBERS_ENDOR:
        return "Endorian Vegetable Tubers";
    case SWG_resource_types::VEGETABLE_TUBERS_LOK:
        return "Lokian Vegetable Tubers";
    case SWG_resource_types::VEGETABLE_TUBERS_NABOO:
        return "Nabooian Vegetable Tubers";
    case SWG_resource_types::VEGETABLE_TUBERS_RORI:
        return "Rori Vegetable Tubers";
    case SWG_resource_types::VEGETABLE_TUBERS_TALUS:
        return "Talusian Vegetable Tubers";
    case SWG_resource_types::VEGETABLE_TUBERS_TATOOINE:
        return "Tatooinian Vegetable Tubers";
    case SWG_resource_types::VEGETABLE_TUBERS_YAVIN4:
        return "Yavinian Vegetable Tubers";
    case SWG_resource_types::WATER_VAPOR_CORELLIA:
        return "Corellian Water Vapor";
    case SWG_resource_types::WATER_VAPOR_DANTOOINE:
        return "Dantooine Water Vapor";
    case SWG_resource_types::WATER_VAPOR_DATHOMIR:
        return "Dathomir Water Vapor";
    case SWG_resource_types::WATER_VAPOR_ENDOR:
        return "Endorian Water Vapor";
    case SWG_resource_types::WATER_VAPOR_LOK:
        return "Lokian Water Vapor";
    case SWG_resource_types::WATER_VAPOR_NABOO:
        return "Nabooian Water Vapor";
    case SWG_resource_types::WATER_VAPOR_RORI:
        return "Rori Water Vapor";
    case SWG_resource_types::WATER_VAPOR_TALUS:
        return "Talusian Water Vapor";
    case SWG_resource_types::WATER_VAPOR_TATOOINE:
        return "Tatooinian Water Vapor";
    case SWG_resource_types::WATER_VAPOR_YAVIN4:
        return "Yavinian Water Vapor";
    case SWG_resource_types::WHEAT_DOMESTICATED_CORELLIA:
        return "Corellian Domesticated Wheat";
    case SWG_resource_types::WHEAT_DOMESTICATED_DANTOOINE:
        return "Dantooine Domesticated Wheat";
    case SWG_resource_types::WHEAT_DOMESTICATED_DATHOMIR:
        return "Dathomirian Domesticated Wheat";
    case SWG_resource_types::WHEAT_DOMESTICATED_ENDOR:
        return "Endorian Domesticated Wheat";
    case SWG_resource_types::WHEAT_DOMESTICATED_LOK:
        return "Lokian Domesticated Wheat";
    case SWG_resource_types::WHEAT_DOMESTICATED_NABOO:
        return "Nabooian Domesticated Wheat";
    case SWG_resource_types::WHEAT_DOMESTICATED_RORI:
        return "Rori Domesticated Wheat";
    case SWG_resource_types::WHEAT_DOMESTICATED_TALUS:
        return "Talusian Domesticated Wheat";
    case SWG_resource_types::WHEAT_DOMESTICATED_TATOOINE:
        return "Tatooinian Domesticated Wheat";
    case SWG_resource_types::WHEAT_DOMESTICATED_YAVIN4:
        return "Yavinian Domesticated Wheat";
    case SWG_resource_types::WHEAT_WILD_CORELLIA:
        return "Corellian Wild Wheat";
    case SWG_resource_types::WHEAT_WILD_DANTOOINE:
        return "Dantooine Wild Wheat";
    case SWG_resource_types::WHEAT_WILD_DATHOMIR:
        return "Dathomir Wild Wheat";
    case SWG_resource_types::WHEAT_WILD_ENDOR:
        return "Endorian Wild Wheat";
    case SWG_resource_types::WHEAT_WILD_LOK:
        return "Lokian Wild Wheat";
    case SWG_resource_types::WHEAT_WILD_NABOO:
        return "Nabooian Wild Wheat";
    case SWG_resource_types::WHEAT_WILD_RORI:
        return "Rori Wild Wheat";
    case SWG_resource_types::WHEAT_WILD_TALUS:
        return "Talusian Wild Wheat";
    case SWG_resource_types::WHEAT_WILD_TATOOINE:
        return "Tatooinian Wild Wheat";
    case SWG_resource_types::WHEAT_WILD_YAVIN4:
        return "Yavinian Wild Wheat";
    case SWG_resource_types::WOOD_DECIDUOUS_CORELLIA:
        return "Corellian Deciduous Wood";
    case SWG_resource_types::WOOD_DECIDUOUS_DANTOOINE:
        return "Dantooine Deciduous Wood";
    case SWG_resource_types::WOOD_DECIDUOUS_DATHOMIR:
        return "Dathomirian Deciduous Wood";
    case SWG_resource_types::WOOD_DECIDUOUS_ENDOR:
        return "Endorian Deciduous Wood";
    case SWG_resource_types::WOOD_DECIDUOUS_LOK:
        return "Lokian Deciduous Wood";
    case SWG_resource_types::WOOD_DECIDUOUS_NABOO:
        return "Nabooian Deciduous Wood";
    case SWG_resource_types::WOOD_DECIDUOUS_RORI:
        return "Rori Deciduous Wood";
    case SWG_resource_types::WOOD_DECIDUOUS_TALUS:
        return "Talusian Deciduous Wood";
    case SWG_resource_types::WOOD_DECIDUOUS_TATOOINE:
        return "Tatooinian Deciduous Wood";
    case SWG_resource_types::WOOD_DECIDUOUS_YAVIN4:
        return "Yavinian Deciduous Wood";
    default:
        return "bad SWG_resource_types enum";
    }
}


std::string SWGAttributesString(SWG_attributes e)
{
    switch (e)
    {
    case SWG_attributes::CR:
        return "CR";
    case SWG_attributes::CD:
        return "CD";
    case SWG_attributes::DR:
        return "DR";
    case SWG_attributes::FL:
        return "FL";
    case SWG_attributes::HR:
        return "HR";
    case SWG_attributes::MA:
        return "MA";
    case SWG_attributes::OQ:
        return "OQ";
    case SWG_attributes::PE:
        return "PE";
    case SWG_attributes::SR:
        return "SR";
    case SWG_attributes::UT:
        return "UT";
    default:
        return "bad SWG_attributes enum";
    }
}

std::string SWGAttributesStringFull(SWG_attributes e)
{
    switch (e)
    {
    case SWG_attributes::CR:
        return "cold_resistance";
    case SWG_attributes::CD:
        return "conductivity";
    case SWG_attributes::DR:
        return "decay_resistance";
    case SWG_attributes::FL:
        return "flavor";
    case SWG_attributes::HR:
        return "heat_resistance";
    case SWG_attributes::MA:
        return "malleability";
    case SWG_attributes::OQ:
        return "overall_quality";
    case SWG_attributes::PE:
        return "potential_energy";
    case SWG_attributes::SR:
        return "shock_resistance";
    case SWG_attributes::UT:
        return "unit_toughness";
    default:
        return "bad SWG_attributes enum";
    }
}

std::unordered_map<std::string, SWG_resource_classes> getReverseOfClassesString()
{
    std::unordered_map<std::string, SWG_resource_classes> temp;
    temp.reserve(static_cast<size_t>(SWG_resource_classes::SWG_resource_classes_count));

    for (size_t i = 0; i < static_cast<size_t>(SWG_resource_classes::SWG_resource_classes_count); i++)
    {
        SWG_resource_classes m = static_cast<SWG_resource_classes>(i); //so we only have to do one cast
        temp[SWGResourceClassString(m)] = m; //get string and put into table
    }

    return temp;
}

std::unordered_map<std::string, SWG_resource_classes> getReverseOfClassesPrettyString()
{
    std::unordered_map<std::string, SWG_resource_classes> temp;
    temp.reserve(static_cast<size_t>(SWG_resource_classes::SWG_resource_classes_count));

    for (size_t i = 0; i < static_cast<size_t>(SWG_resource_classes::SWG_resource_classes_count); i++)
    {
        SWG_resource_classes m = static_cast<SWG_resource_classes>(i); //so we only have to do one cast
        temp[SWGResourceClassStringPretty(m)] = m; //get string and put into table
    }

    return temp;
}

std::unordered_map<std::string, SWG_resource_types> getReverseOfTypesString()
{
    std::unordered_map<std::string, SWG_resource_types> temp;
    temp.reserve(static_cast<size_t>(SWG_resource_types::SWG_resource_types_count));

    for (size_t i = 0; i < static_cast<size_t>(SWG_resource_types::SWG_resource_types_count); i++)
    {
        SWG_resource_types m = static_cast<SWG_resource_types>(i); //so we only have to do one cast
        temp[SWGResourceTypeString(m)] = m; //get string and put into table
    }

    return temp;
}

std::unordered_map<std::string, SWG_resource_types> getReverseOfTypesPrettyString()
{
    std::unordered_map<std::string, SWG_resource_types> temp;
    temp.reserve(static_cast<size_t>(SWG_resource_types::SWG_resource_types_count));

    for (size_t i = 0; i < static_cast<size_t>(SWG_resource_types::SWG_resource_types_count); i++)
    {
        SWG_resource_types m = static_cast<SWG_resource_types>(i); //so we only have to do one cast
        temp[SWGResourceTypeStringPretty(m)] = m; //get string and put into table
    }

    return temp;
}
