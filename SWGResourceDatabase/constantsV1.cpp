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
    case ALUMINUM:
        return "aluminum";
    case BONE:
        return "bone";
    case BONE_AVIAN:
        return "bone_avian";
    case BONE_HORN:
        return "bone_horn";
    case CEREAL:
        return "cereal";
    case CHEMICAL:
        return "chemical";
    case COPPER:
        return "copper";
    case CORN:
        return "corn";
    case CORN_DOMESTICATED:
        return "corn_domesticated";
    case CORN_WILD:
        return "corn_wild";
    case CREATURE_FOOD:
        return "creature_food";
    case CREATURE_RESOURCES:
        return "creature_resources";
    case CREATURE_STRUCTURAL:
        return "creature_structural";
    case ENERGY:
        return "energy";
    case ENERGY_RENEWABLE:
        return "energy_renewable";
    case ENERGY_RENEWABLE_SITE_LIMITED:
        return "energy_renewable_site_limited";
    case ENERGY_RENEWABLE_UNLIMITED:
        return "energy_renewable_unlimited";
    case ENERGY_RENEWABLE_UNLIMITED_SOLAR:
        return "energy_renewable_unlimited_solar";
    case ENERGY_RENEWABLE_UNLIMITED_WIND:
        return "energy_renewable_unlimited_wind";
    case FIBERPLAST:
        return "fiberplast";
    case FLORA_FOOD:
        return "flora_food";
    case FLORA_RESOURCES:
        return "flora_resources";
    case FLORA_STRUCTURAL:
        return "flora_structural";
    case FRUIT:
        return "fruit";
    case FRUIT_BERRIES:
        return "fruit_berries";
    case FRUIT_FLOWERS:
        return "fruit_flowers";
    case FRUIT_FRUITS:
        return "fruit_fruits";
    case FUEL_PETROCHEM_LIQUID:
        return "fuel_petrochem_liquid";
    case FUEL_PETROCHEM_LIQUID_KNOWN:
        return "fuel_petrochem_liquid_known";
    case FUEL_PETROCHEM_SOLID:
        return "fuel_petrochem_solid";
    case FUEL_PETROCHEM_SOLID_KNOWN:
        return "fuel_petrochem_solid_known";
    case GAS:
        return "gas";
    case GAS_INERT:
        return "gas_inert";
    case GAS_INERT_KNOWN:
        return "gas_inert_known";
    case GAS_REACTIVE:
        return "gas_reactive";
    case GAS_REACTIVE_KNOWN:
        return "gas_reactive_known";
    case GEMSTONE:
        return "gemstone";
    case GEMSTONE_ARMOPHOUS:
        return "gemstone_armophous";
    case GEMSTONE_CRYSTALLINE:
        return "gemstone_crystalline";
    case HIDE:
        return "hide";
    case HIDE_BRISTLEY:
        return "hide_bristley";
    case HIDE_LEATHERY:
        return "hide_leathery";
    case HIDE_SCALEY:
        return "hide_scaley";
    case HIDE_WOOLY:
        return "hide_wooly";
    case INORGANIC:
        return "inorganic";
    case IRON:
        return "iron";
    case MEAT:
        return "meat";
    case MEAT_AVIAN:
        return "meat_avian";
    case MEAT_CARNIVORE:
        return "meat_carnivore";
    case MEAT_DOMESTICATED:
        return "meat_domesticated";
    case MEAT_EGG:
        return "meat_egg";
    case MEAT_HERBIVORE:
        return "meat_herbivore";
    case MEAT_INSECT:
        return "meat_insect";
    case MEAT_REPTILLIAN:
        return "meat_reptillian";
    case MEAT_WILD:
        return "meat_wild";
    case METAL:
        return "metal";
    case METAL_FERROUS:
        return "metal_ferrous";
    case METAL_NONFERROUS:
        return "metal_nonferrous";
    case MILK:
        return "milk";
    case MILK_DOMESTICATED:
        return "milk_domesticated";
    case MILK_WILD:
        return "milk_wild";
    case MINERAL:
        return "mineral";
    case OATS:
        return "oats";
    case OATS_DOMESTICATED:
        return "oats_domesticated";
    case OATS_WILD:
        return "oats_wild";
    case ORE:
        return "ore";
    case ORE_CARBONATE:
        return "ore_carbonate";
    case ORE_EXTRUSIVE:
        return "ore_extrusive";
    case ORE_IGNEOUS:
        return "ore_igneous";
    case ORE_INTRUSIVE:
        return "ore_intrusive";
    case ORE_SEDIMENTARY:
        return "ore_sedimentary";
    case ORE_SILICLASTIC:
        return "ore_siliclastic";
    case ORGANIC:
        return "organic";
    case PETROCHEM_INERT:
        return "petrochem_inert";
    case RADIOACTIVE:
        return "radioactive";
    case RADIOACTIVE_KNOWN:
        return "radioactive_known";
    case RICE:
        return "rice";
    case RICE_DOMESTICATED:
        return "rice_domesticated";
    case RICE_WILD:
        return "rice_wild";
    case SEAFOOD:
        return "seafood";
    case SEAFOOD_CRUSTACEAN:
        return "seafood_crustacean";
    case SEAFOOD_FISH:
        return "seafood_fish";
    case SEAFOOD_MOLLUSK:
        return "seafood_mollusk";
    case SEEDS:
        return "seeds";
    case SOFTWOOD:
        return "softwood";
    case SOFTWOOD_EVERGREEN:
        return "softwood_evergreen";
    case STEEL:
        return "steel";
    case VEGETABLE:
        return "vegetable";
    case VEGETABLE_BEANS:
        return "vegetable_beans";
    case VEGETABLE_FUNGI:
        return "vegetable_fungi";
    case VEGETABLE_GREENS:
        return "vegetable_greens";
    case VEGETABLE_TUBERS:
        return "vegetable_tubers";
    case WATER:
        return "water";
    case WHEAT:
        return "wheat";
    case WHEAT_DOMESTICATED:
        return "wheat_domesticated";
    case WHEAT_WILD:
        return "wheat_wild";
    case WOOD:
        return "wood";
    case WOOD_DECIDUOUS:
        return "wood_deciduous";
    default:
        return "bad SWG_resource_classes enum";
    }
}

std::string SWGResourceClassStringPretty(SWG_resource_classes e)
{
    switch (e)
    {
    case ALUMINUM:
        return "Aluminum";
    case BONE:
        return "Bone";
    case BONE_AVIAN:
        return "Avian bone";
    case BONE_HORN:
        return "Horn";
    case CEREAL:
        return "Cereal";
    case CHEMICAL:
        return "Chemical";
    case COPPER:
        return "Copper";
    case CORN:
        return "Corn";
    case CORN_DOMESTICATED:
        return "Domesticated Corn";
    case CORN_WILD:
        return "Wild Corn";
    case CREATURE_FOOD:
        return "Creature Food";
    case CREATURE_RESOURCES:
        return "Creature Resources";
    case CREATURE_STRUCTURAL:
        return "Creature Structural";
    case ENERGY:
        return "Energy";
    case ENERGY_RENEWABLE:
        return "Renewable energy";
    case ENERGY_RENEWABLE_SITE_LIMITED:
        return "Site-Restricted Renewable Energy";
    case ENERGY_RENEWABLE_UNLIMITED:
        return "Non Site-Restricted Renewable Energy";
    case ENERGY_RENEWABLE_UNLIMITED_SOLAR:
        return "Solar Energy";
    case ENERGY_RENEWABLE_UNLIMITED_WIND:
        return "Wind Energy";
    case FIBERPLAST:
        return "Fiberplast";
    case FLORA_FOOD:
        return "Flora Food";
    case FLORA_RESOURCES:
        return "Flora Resources";
    case FLORA_STRUCTURAL:
        return "Flora Structural";
    case FRUIT:
        return "Fruit";
    case FRUIT_BERRIES:
        return "Berries";
    case FRUIT_FLOWERS:
        return "Flowers";
    case FRUIT_FRUITS:
        return "Fruits";
    case FUEL_PETROCHEM_LIQUID:
        return "Liquid Petrochem Fuel";
    case FUEL_PETROCHEM_LIQUID_KNOWN:
        return "Known Liquid Petrochem Fuel";
    case FUEL_PETROCHEM_SOLID:
        return "Solid Petrochem Fuel";
    case FUEL_PETROCHEM_SOLID_KNOWN:
        return "Known Solid Petrochem Fuel";
    case GAS:
        return "Gas";
    case GAS_INERT:
        return "Inert Gas";
    case GAS_INERT_KNOWN:
        return "Known Inert Gas";
    case GAS_REACTIVE:
        return "Reactive Gas";
    case GAS_REACTIVE_KNOWN:
        return "Known Reactive Gas";
    case GEMSTONE:
        return "Gemstone";
    case GEMSTONE_ARMOPHOUS:
        return "Amorphous Gemstone";
    case GEMSTONE_CRYSTALLINE:
        return "Crystalline Gemstone";
    case HIDE:
        return "Hide";
    case HIDE_BRISTLEY:
        return "Bristley Hide";
    case HIDE_LEATHERY:
        return "Leathery Hide";
    case HIDE_SCALEY:
        return "Scaley Hide";
    case HIDE_WOOLY:
        return "Wooly Hide";
    case INORGANIC:
        return "Inorganic";
    case IRON:
        return "Iron";
    case MEAT:
        return "Meat";
    case MEAT_AVIAN:
        return "Avian Meat";
    case MEAT_CARNIVORE:
        return "Carnivore Meat";
    case MEAT_DOMESTICATED:
        return "Domesticated Meat";
    case MEAT_EGG:
        return "Egg";
    case MEAT_HERBIVORE:
        return "Herbivore Meat";
    case MEAT_INSECT:
        return "Insect Meat";
    case MEAT_REPTILLIAN:
        return "Reptillian Meat";
    case MEAT_WILD:
        return "Wild Meat";
    case METAL:
        return "Metal";
    case METAL_FERROUS:
        return "Ferrous Metal";
    case METAL_NONFERROUS:
        return "Non-Ferrous Metal";
    case MILK:
        return "Milk";
    case MILK_DOMESTICATED:
        return "Domesticated Milk";
    case MILK_WILD:
        return "Wild Milk";
    case MINERAL:
        return "Mineral";
    case OATS:
        return "Oats";
    case OATS_DOMESTICATED:
        return "Domesticated Oats";
    case OATS_WILD:
        return "Wild Oats";
    case ORE:
        return "Low-Grade Ore";
    case ORE_CARBONATE:
        return "Carbonate Ore";
    case ORE_EXTRUSIVE:
        return "Extrusive Ore";
    case ORE_IGNEOUS:
        return "Igneous Ore";
    case ORE_INTRUSIVE:
        return "Intrusive Ore";
    case ORE_SEDIMENTARY:
        return "Sedimentary Ore";
    case ORE_SILICLASTIC:
        return "Siliclastic Ore";
    case ORGANIC:
        return "Organic";
    case PETROCHEM_INERT:
        return "Inert Petrochemical";
    case RADIOACTIVE:
        return "Radioactive";
    case RADIOACTIVE_KNOWN:
        return "Known Radioactive";
    case RICE:
        return "Rice";
    case RICE_DOMESTICATED:
        return "Domesticated Rice";
    case RICE_WILD:
        return "Wild Rice";
    case SEAFOOD:
        return "Seafood";
    case SEAFOOD_CRUSTACEAN:
        return "Crustacean";
    case SEAFOOD_FISH:
        return "Fish";
    case SEAFOOD_MOLLUSK:
        return "Mollusk";
    case SEEDS:
        return "Seeds";
    case SOFTWOOD:
        return "Soft Wood";
    case SOFTWOOD_EVERGREEN:
        return "Evergreen Soft Wood";
    case STEEL:
        return "Steel";
    case VEGETABLE:
        return "Vegetables";
    case VEGETABLE_BEANS:
        return "Beans";
    case VEGETABLE_FUNGI:
        return "Fungi";
    case VEGETABLE_GREENS:
        return "Greens";
    case VEGETABLE_TUBERS:
        return "Tubers";
    case WATER:
        return "Water";
    case WHEAT:
        return "Wheat";
    case WHEAT_DOMESTICATED:
        return "Domesticated Wheat";
    case WHEAT_WILD:
        return "Wild Wheat";
    case WOOD:
        return "Wood";
    case WOOD_DECIDUOUS:
        return "Hard Wood";
    default:
        return "bad SWG_resource_classes enum";
    }
}

std::string SWGResourceTypeString(SWG_resource_types e)
{
    switch (e)
    {
    case ALUMINUM_AGRINIUM:
        return "aluminum_agrinium";
    case ALUMINUM_CHROMIUM:
        return "aluminum_chromium";
    case ALUMINUM_DURALUMIN:
        return "aluminum_duralumin";
    case ALUMINUM_LINKSTEEL:
        return "aluminum_linksteel";
    case ALUMINUM_PEROVSKITIC:
        return "aluminum_perovskitic";
    case ALUMINUM_PHRIK:
        return "aluminum_phrik";
    case ALUMINUM_TITANIUM:
        return "aluminum_titanium";
    case ARMOPHOUS_BALTARAN:
        return "armophous_baltaran";
    case ARMOPHOUS_BARADIUM:
        return "armophous_baradium";
    case ARMOPHOUS_BOSPRIDIUM:
        return "armophous_bospridium";
    case ARMOPHOUS_PLEXITE:
        return "armophous_plexite";
    case ARMOPHOUS_REGVIS:
        return "armophous_regvis";
    case ARMOPHOUS_RUDIC:
        return "armophous_rudic";
    case ARMOPHOUS_RYLL:
        return "armophous_ryll";
    case ARMOPHOUS_SEDRELLIUM:
        return "armophous_sedrellium";
    case ARMOPHOUS_STYGIUM:
        return "armophous_stygium";
    case ARMOPHOUS_VENDUSII:
        return "armophous_vendusii";
    case BONE_AVIAN_CORELLIA:
        return "bone_avian_corellia";
    case BONE_AVIAN_DANTOOINE:
        return "bone_avian_dantooine";
    case BONE_AVIAN_DATHOMIR:
        return "bone_avian_dathomir";
    case BONE_AVIAN_ENDOR:
        return "bone_avian_endor";
    case BONE_AVIAN_LOK:
        return "bone_avian_lok";
    case BONE_AVIAN_NABOO:
        return "bone_avian_naboo";
    case BONE_AVIAN_RORI:
        return "bone_avian_rori";
    case BONE_AVIAN_TALUS:
        return "bone_avian_talus";
    case BONE_AVIAN_TATOOINE:
        return "bone_avian_tatooine";
    case BONE_AVIAN_YAVIN4:
        return "bone_avian_yavin4";
    case BONE_HORN_CORELLIA:
        return "bone_horn_corellia";
    case BONE_HORN_DANTOOINE:
        return "bone_horn_dantooine";
    case BONE_HORN_DATHOMIR:
        return "bone_horn_dathomir";
    case BONE_HORN_ENDOR:
        return "bone_horn_endor";
    case BONE_HORN_LOK:
        return "bone_horn_lok";
    case BONE_HORN_NABOO:
        return "bone_horn_naboo";
    case BONE_HORN_RORI:
        return "bone_horn_rori";
    case BONE_HORN_TALUS:
        return "bone_horn_talus";
    case BONE_HORN_TATOOINE:
        return "bone_horn_tatooine";
    case BONE_HORN_YAVIN4:
        return "bone_horn_yavin4";
    case BONE_MAMMAL_CORELLIA:
        return "bone_mammal_corellia";
    case BONE_MAMMAL_DANTOOINE:
        return "bone_mammal_dantooine";
    case BONE_MAMMAL_DATHOMIR:
        return "bone_mammal_dathomir";
    case BONE_MAMMAL_ENDOR:
        return "bone_mammal_endor";
    case BONE_MAMMAL_LOK:
        return "bone_mammal_lok";
    case BONE_MAMMAL_NABOO:
        return "bone_mammal_naboo";
    case BONE_MAMMAL_RORI:
        return "bone_mammal_rori";
    case BONE_MAMMAL_TALUS:
        return "bone_mammal_talus";
    case BONE_MAMMAL_TATOOINE:
        return "bone_mammal_tatooine";
    case BONE_MAMMAL_YAVIN4:
        return "bone_mammal_yavin4";
    case COPPER_BEYRLLIUS:
        return "copper_beyrllius";
    case COPPER_BOROCARBITIC:
        return "copper_borocarbitic";
    case COPPER_CODOAN:
        return "copper_codoan";
    case COPPER_DESH:
        return "copper_desh";
    case COPPER_DIATIUM:
        return "copper_diatium";
    case COPPER_KELSH:
        return "copper_kelsh";
    case COPPER_MYTHRA:
        return "copper_mythra";
    case COPPER_PLATINITE:
        return "copper_platinite";
    case COPPER_POLYSTEEL:
        return "copper_polysteel";
    case COPPER_THALLIUM:
        return "copper_thallium";
    case CORN_DOMESTICATED_CORELLIA:
        return "corn_domesticated_corellia";
    case CORN_DOMESTICATED_DANTOOINE:
        return "corn_domesticated_dantooine";
    case CORN_DOMESTICATED_DATHOMIR:
        return "corn_domesticated_dathomir";
    case CORN_DOMESTICATED_ENDOR:
        return "corn_domesticated_endor";
    case CORN_DOMESTICATED_LOK:
        return "corn_domesticated_lok";
    case CORN_DOMESTICATED_NABOO:
        return "corn_domesticated_naboo";
    case CORN_DOMESTICATED_RORI:
        return "corn_domesticated_rori";
    case CORN_DOMESTICATED_TALUS:
        return "corn_domesticated_talus";
    case CORN_DOMESTICATED_TATOOINE:
        return "corn_domesticated_tatooine";
    case CORN_DOMESTICATED_YAVIN4:
        return "corn_domesticated_yavin4";
    case CORN_WILD_CORELLIA:
        return "corn_wild_corellia";
    case CORN_WILD_DANTOOINE:
        return "corn_wild_dantooine";
    case CORN_WILD_DATHOMIR:
        return "corn_wild_dathomir";
    case CORN_WILD_ENDOR:
        return "corn_wild_endor";
    case CORN_WILD_LOK:
        return "corn_wild_lok";
    case CORN_WILD_NABOO:
        return "corn_wild_naboo";
    case CORN_WILD_RORI:
        return "corn_wild_rori";
    case CORN_WILD_TALUS:
        return "corn_wild_talus";
    case CORN_WILD_TATOOINE:
        return "corn_wild_tatooine";
    case CORN_WILD_YAVIN4:
        return "corn_wild_yavin4";
    case CRYSTALLINE_BYROTHSIS:
        return "crystalline_byrothsis";
    case CRYSTALLINE_GALLINORIAN:
        return "crystalline_gallinorian";
    case CRYSTALLINE_GREEN_DIAMOND:
        return "crystalline_green_diamond";
    case CRYSTALLINE_KEROL_FIREGEM:
        return "crystalline_kerol_firegem";
    case CRYSTALLINE_LABOI_MINERAL_CRYSTAL:
        return "crystalline_laboi_mineral_crystal";
    case CRYSTALLINE_SEAFAH_JEWEL:
        return "crystalline_seafah_jewel";
    case CRYSTALLINE_SORMAHIL_FIREGEM:
        return "crystalline_sormahil_firegem";
    case CRYSTALLINE_VERTEX:
        return "crystalline_vertex";
    case ENERGY_RENEWABLE_SITE_LIMITED_GEOTHERMAL_CORELLIA:
        return "energy_renewable_site_limited_geothermal_corellia";
    case ENERGY_RENEWABLE_SITE_LIMITED_GEOTHERMAL_DANTOOINE:
        return "energy_renewable_site_limited_geothermal_dantooine";
    case ENERGY_RENEWABLE_SITE_LIMITED_GEOTHERMAL_DATHOMIR:
        return "energy_renewable_site_limited_geothermal_dathomir";
    case ENERGY_RENEWABLE_SITE_LIMITED_GEOTHERMAL_ENDOR:
        return "energy_renewable_site_limited_geothermal_endor";
    case ENERGY_RENEWABLE_SITE_LIMITED_GEOTHERMAL_LOK:
        return "energy_renewable_site_limited_geothermal_lok";
    case ENERGY_RENEWABLE_SITE_LIMITED_GEOTHERMAL_NABOO:
        return "energy_renewable_site_limited_geothermal_naboo";
    case ENERGY_RENEWABLE_SITE_LIMITED_GEOTHERMAL_RORI:
        return "energy_renewable_site_limited_geothermal_rori";
    case ENERGY_RENEWABLE_SITE_LIMITED_GEOTHERMAL_TALUS:
        return "energy_renewable_site_limited_geothermal_talus";
    case ENERGY_RENEWABLE_SITE_LIMITED_GEOTHERMAL_TATOOINE:
        return "energy_renewable_site_limited_geothermal_tatooine";
    case ENERGY_RENEWABLE_SITE_LIMITED_GEOTHERMAL_YAVIN4:
        return "energy_renewable_site_limited_geothermal_yavin4";
    case ENERGY_RENEWABLE_SITE_LIMITED_HYDRON3_CORELLIA:
        return "energy_renewable_site_limited_hydron3_corellia";
    case ENERGY_RENEWABLE_SITE_LIMITED_HYDRON3_DANTOOINE:
        return "energy_renewable_site_limited_hydron3_dantooine";
    case ENERGY_RENEWABLE_SITE_LIMITED_HYDRON3_DATHOMIR:
        return "energy_renewable_site_limited_hydron3_dathomir";
    case ENERGY_RENEWABLE_SITE_LIMITED_HYDRON3_ENDOR:
        return "energy_renewable_site_limited_hydron3_endor";
    case ENERGY_RENEWABLE_SITE_LIMITED_HYDRON3_LOK:
        return "energy_renewable_site_limited_hydron3_lok";
    case ENERGY_RENEWABLE_SITE_LIMITED_HYDRON3_NABOO:
        return "energy_renewable_site_limited_hydron3_naboo";
    case ENERGY_RENEWABLE_SITE_LIMITED_HYDRON3_RORI:
        return "energy_renewable_site_limited_hydron3_rori";
    case ENERGY_RENEWABLE_SITE_LIMITED_HYDRON3_TALUS:
        return "energy_renewable_site_limited_hydron3_talus";
    case ENERGY_RENEWABLE_SITE_LIMITED_HYDRON3_TATOOINE:
        return "energy_renewable_site_limited_hydron3_tatooine";
    case ENERGY_RENEWABLE_SITE_LIMITED_HYDRON3_YAVIN4:
        return "energy_renewable_site_limited_hydron3_yavin4";
    case ENERGY_RENEWABLE_SITE_LIMITED_TIDAL_CORELLIA:
        return "energy_renewable_site_limited_tidal_corellia";
    case ENERGY_RENEWABLE_SITE_LIMITED_TIDAL_DANTOOINE:
        return "energy_renewable_site_limited_tidal_dantooine";
    case ENERGY_RENEWABLE_SITE_LIMITED_TIDAL_DATHOMIR:
        return "energy_renewable_site_limited_tidal_dathomir";
    case ENERGY_RENEWABLE_SITE_LIMITED_TIDAL_ENDOR:
        return "energy_renewable_site_limited_tidal_endor";
    case ENERGY_RENEWABLE_SITE_LIMITED_TIDAL_LOK:
        return "energy_renewable_site_limited_tidal_lok";
    case ENERGY_RENEWABLE_SITE_LIMITED_TIDAL_NABOO:
        return "energy_renewable_site_limited_tidal_naboo";
    case ENERGY_RENEWABLE_SITE_LIMITED_TIDAL_RORI:
        return "energy_renewable_site_limited_tidal_rori";
    case ENERGY_RENEWABLE_SITE_LIMITED_TIDAL_TALUS:
        return "energy_renewable_site_limited_tidal_talus";
    case ENERGY_RENEWABLE_SITE_LIMITED_TIDAL_TATOOINE:
        return "energy_renewable_site_limited_tidal_tatooine";
    case ENERGY_RENEWABLE_SITE_LIMITED_TIDAL_YAVIN4:
        return "energy_renewable_site_limited_tidal_yavin4";
    case ENERGY_RENEWABLE_UNLIMITED_SOLAR_CORELLIA:
        return "energy_renewable_unlimited_solar_corellia";
    case ENERGY_RENEWABLE_UNLIMITED_SOLAR_DANTOOINE:
        return "energy_renewable_unlimited_solar_dantooine";
    case ENERGY_RENEWABLE_UNLIMITED_SOLAR_DATHOMIR:
        return "energy_renewable_unlimited_solar_dathomir";
    case ENERGY_RENEWABLE_UNLIMITED_SOLAR_ENDOR:
        return "energy_renewable_unlimited_solar_endor";
    case ENERGY_RENEWABLE_UNLIMITED_SOLAR_LOK:
        return "energy_renewable_unlimited_solar_lok";
    case ENERGY_RENEWABLE_UNLIMITED_SOLAR_NABOO:
        return "energy_renewable_unlimited_solar_naboo";
    case ENERGY_RENEWABLE_UNLIMITED_SOLAR_RORI:
        return "energy_renewable_unlimited_solar_rori";
    case ENERGY_RENEWABLE_UNLIMITED_SOLAR_TALUS:
        return "energy_renewable_unlimited_solar_talus";
    case ENERGY_RENEWABLE_UNLIMITED_SOLAR_TATOOINE:
        return "energy_renewable_unlimited_solar_tatooine";
    case ENERGY_RENEWABLE_UNLIMITED_SOLAR_YAVIN4:
        return "energy_renewable_unlimited_solar_yavin4";
    case ENERGY_RENEWABLE_UNLIMITED_WIND_CORELLIA:
        return "energy_renewable_unlimited_wind_corellia";
    case ENERGY_RENEWABLE_UNLIMITED_WIND_DANTOOINE:
        return "energy_renewable_unlimited_wind_dantooine";
    case ENERGY_RENEWABLE_UNLIMITED_WIND_DATHOMIR:
        return "energy_renewable_unlimited_wind_dathomir";
    case ENERGY_RENEWABLE_UNLIMITED_WIND_ENDOR:
        return "energy_renewable_unlimited_wind_endor";
    case ENERGY_RENEWABLE_UNLIMITED_WIND_LOK:
        return "energy_renewable_unlimited_wind_lok";
    case ENERGY_RENEWABLE_UNLIMITED_WIND_NABOO:
        return "energy_renewable_unlimited_wind_naboo";
    case ENERGY_RENEWABLE_UNLIMITED_WIND_RORI:
        return "energy_renewable_unlimited_wind_rori";
    case ENERGY_RENEWABLE_UNLIMITED_WIND_TALUS:
        return "energy_renewable_unlimited_wind_talus";
    case ENERGY_RENEWABLE_UNLIMITED_WIND_TATOOINE:
        return "energy_renewable_unlimited_wind_tatooine";
    case ENERGY_RENEWABLE_UNLIMITED_WIND_YAVIN4:
        return "energy_renewable_unlimited_wind_yavin4";
    case FIBERPLAST_CORELLIA:
        return "fiberplast_corellia";
    case FIBERPLAST_DANTOOINE:
        return "fiberplast_dantooine";
    case FIBERPLAST_DATHOMIR:
        return "fiberplast_dathomir";
    case FIBERPLAST_ENDOR:
        return "fiberplast_endor";
    case FIBERPLAST_GRAVITONIC:
        return "fiberplast_gravitonic";
    case FIBERPLAST_LOK:
        return "fiberplast_lok";
    case FIBERPLAST_NABOO:
        return "fiberplast_naboo";
    case FIBERPLAST_RORI:
        return "fiberplast_rori";
    case FIBERPLAST_TALUS:
        return "fiberplast_talus";
    case FIBERPLAST_TATOOINE:
        return "fiberplast_tatooine";
    case FIBERPLAST_YAVIN4:
        return "fiberplast_yavin4";
    case FRUIT_BERRIES_CORELLIA:
        return "fruit_berries_corellia";
    case FRUIT_BERRIES_DANTOOINE:
        return "fruit_berries_dantooine";
    case FRUIT_BERRIES_DATHOMIR:
        return "fruit_berries_dathomir";
    case FRUIT_BERRIES_ENDOR:
        return "fruit_berries_endor";
    case FRUIT_BERRIES_LOK:
        return "fruit_berries_lok";
    case FRUIT_BERRIES_NABOO:
        return "fruit_berries_naboo";
    case FRUIT_BERRIES_RORI:
        return "fruit_berries_rori";
    case FRUIT_BERRIES_TALUS:
        return "fruit_berries_talus";
    case FRUIT_BERRIES_TATOOINE:
        return "fruit_berries_tatooine";
    case FRUIT_BERRIES_YAVIN4:
        return "fruit_berries_yavin4";
    case FRUIT_FLOWERS_CORELLIA:
        return "fruit_flowers_corellia";
    case FRUIT_FLOWERS_DANTOOINE:
        return "fruit_flowers_dantooine";
    case FRUIT_FLOWERS_DATHOMIR:
        return "fruit_flowers_dathomir";
    case FRUIT_FLOWERS_ENDOR:
        return "fruit_flowers_endor";
    case FRUIT_FLOWERS_LOK:
        return "fruit_flowers_lok";
    case FRUIT_FLOWERS_NABOO:
        return "fruit_flowers_naboo";
    case FRUIT_FLOWERS_RORI:
        return "fruit_flowers_rori";
    case FRUIT_FLOWERS_TALUS:
        return "fruit_flowers_talus";
    case FRUIT_FLOWERS_TATOOINE:
        return "fruit_flowers_tatooine";
    case FRUIT_FLOWERS_YAVIN4:
        return "fruit_flowers_yavin4";
    case FRUIT_FRUITS_CORELLIA:
        return "fruit_fruits_corellia";
    case FRUIT_FRUITS_DANTOOINE:
        return "fruit_fruits_dantooine";
    case FRUIT_FRUITS_DATHOMIR:
        return "fruit_fruits_dathomir";
    case FRUIT_FRUITS_ENDOR:
        return "fruit_fruits_endor";
    case FRUIT_FRUITS_LOK:
        return "fruit_fruits_lok";
    case FRUIT_FRUITS_NABOO:
        return "fruit_fruits_naboo";
    case FRUIT_FRUITS_RORI:
        return "fruit_fruits_rori";
    case FRUIT_FRUITS_TALUS:
        return "fruit_fruits_talus";
    case FRUIT_FRUITS_TATOOINE:
        return "fruit_fruits_tatooine";
    case FRUIT_FRUITS_YAVIN4:
        return "fruit_fruits_yavin4";
    case GAS_INERT_BILAL:
        return "gas_inert_bilal";
    case GAS_INERT_CORTHEL:
        return "gas_inert_corthel";
    case GAS_INERT_CULSION:
        return "gas_inert_culsion";
    case GAS_INERT_DIOXIS:
        return "gas_inert_dioxis";
    case GAS_INERT_HURLOTHROMBIC:
        return "gas_inert_hurlothrombic";
    case GAS_INERT_HYDRON3:
        return "gas_inert_hydron3";
    case GAS_INERT_KAYLON:
        return "gas_inert_kaylon";
    case GAS_INERT_KORFAISE:
        return "gas_inert_korfaise";
    case GAS_INERT_MALIUM:
        return "gas_inert_malium";
    case GAS_INERT_METHANAGEN:
        return "gas_inert_methanagen";
    case GAS_INERT_MIRTH:
        return "gas_inert_mirth";
    case GAS_INERT_OBAH:
        return "gas_inert_obah";
    case GAS_INERT_RETHIN:
        return "gas_inert_rethin";
    case GAS_INERT_UNKNOWN:
        return "gas_inert_unknown";
    case GAS_REACTIVE_ELETON:
        return "gas_reactive_eleton";
    case GAS_REACTIVE_IROLUNN:
        return "gas_reactive_irolunn";
    case GAS_REACTIVE_METHANE:
        return "gas_reactive_methane";
    case GAS_REACTIVE_ORGANOMETALLIC:
        return "gas_reactive_organometallic";
    case GAS_REACTIVE_ORVETH:
        return "gas_reactive_orveth";
    case GAS_REACTIVE_SIG:
        return "gas_reactive_sig";
    case GAS_REACTIVE_SKEVON:
        return "gas_reactive_skevon";
    case GAS_REACTIVE_TOLIUM:
        return "gas_reactive_tolium";
    case GAS_REACTIVE_UNKNOWN:
        return "gas_reactive_unknown";
    case GEMSTONE_UNKNOWN:
        return "gemstone_unknown";
    case HIDE_BRISTLEY_CORELLIA:
        return "hide_bristley_corellia";
    case HIDE_BRISTLEY_DANTOOINE:
        return "hide_bristley_dantooine";
    case HIDE_BRISTLEY_DATHOMIR:
        return "hide_bristley_dathomir";
    case HIDE_BRISTLEY_ENDOR:
        return "hide_bristley_endor";
    case HIDE_BRISTLEY_LOK:
        return "hide_bristley_lok";
    case HIDE_BRISTLEY_NABOO:
        return "hide_bristley_naboo";
    case HIDE_BRISTLEY_RORI:
        return "hide_bristley_rori";
    case HIDE_BRISTLEY_TALUS:
        return "hide_bristley_talus";
    case HIDE_BRISTLEY_TATOOINE:
        return "hide_bristley_tatooine";
    case HIDE_BRISTLEY_YAVIN4:
        return "hide_bristley_yavin4";
    case HIDE_LEATHERY_CORELLIA:
        return "hide_leathery_corellia";
    case HIDE_LEATHERY_DANTOOINE:
        return "hide_leathery_dantooine";
    case HIDE_LEATHERY_DATHOMIR:
        return "hide_leathery_dathomir";
    case HIDE_LEATHERY_ENDOR:
        return "hide_leathery_endor";
    case HIDE_LEATHERY_LOK:
        return "hide_leathery_lok";
    case HIDE_LEATHERY_NABOO:
        return "hide_leathery_naboo";
    case HIDE_LEATHERY_RORI:
        return "hide_leathery_rori";
    case HIDE_LEATHERY_TALUS:
        return "hide_leathery_talus";
    case HIDE_LEATHERY_TATOOINE:
        return "hide_leathery_tatooine";
    case HIDE_LEATHERY_YAVIN4:
        return "hide_leathery_yavin4";
    case HIDE_SCALEY_CORELLIA:
        return "hide_scaley_corellia";
    case HIDE_SCALEY_DANTOOINE:
        return "hide_scaley_dantooine";
    case HIDE_SCALEY_DATHOMIR:
        return "hide_scaley_dathomir";
    case HIDE_SCALEY_ENDOR:
        return "hide_scaley_endor";
    case HIDE_SCALEY_LOK:
        return "hide_scaley_lok";
    case HIDE_SCALEY_NABOO:
        return "hide_scaley_naboo";
    case HIDE_SCALEY_RORI:
        return "hide_scaley_rori";
    case HIDE_SCALEY_TALUS:
        return "hide_scaley_talus";
    case HIDE_SCALEY_TATOOINE:
        return "hide_scaley_tatooine";
    case HIDE_SCALEY_YAVIN4:
        return "hide_scaley_yavin4";
    case HIDE_WOOLY_CORELLIA:
        return "hide_wooly_corellia";
    case HIDE_WOOLY_DANTOOINE:
        return "hide_wooly_dantooine";
    case HIDE_WOOLY_DATHOMIR:
        return "hide_wooly_dathomir";
    case HIDE_WOOLY_ENDOR:
        return "hide_wooly_endor";
    case HIDE_WOOLY_LOK:
        return "hide_wooly_lok";
    case HIDE_WOOLY_NABOO:
        return "hide_wooly_naboo";
    case HIDE_WOOLY_RORI:
        return "hide_wooly_rori";
    case HIDE_WOOLY_TALUS:
        return "hide_wooly_talus";
    case HIDE_WOOLY_TATOOINE:
        return "hide_wooly_tatooine";
    case HIDE_WOOLY_YAVIN4:
        return "hide_wooly_yavin4";
    case IRON_AXIDITE:
        return "iron_axidite";
    case IRON_BRONZIUM:
        return "iron_bronzium";
    case IRON_COLAT:
        return "iron_colat";
    case IRON_DOLOVITE:
        return "iron_dolovite";
    case IRON_DOONIUM:
        return "iron_doonium";
    case IRON_KAMMRIS:
        return "iron_kammris";
    case IRON_PLUMBUM:
        return "iron_plumbum";
    case IRON_POLONIUM:
        return "iron_polonium";
    case MEAT_AVIAN_CORELLIA:
        return "meat_avian_corellia";
    case MEAT_AVIAN_DANTOOINE:
        return "meat_avian_dantooine";
    case MEAT_AVIAN_DATHOMIR:
        return "meat_avian_dathomir";
    case MEAT_AVIAN_ENDOR:
        return "meat_avian_endor";
    case MEAT_AVIAN_LOK:
        return "meat_avian_lok";
    case MEAT_AVIAN_NABOO:
        return "meat_avian_naboo";
    case MEAT_AVIAN_RORI:
        return "meat_avian_rori";
    case MEAT_AVIAN_TALUS:
        return "meat_avian_talus";
    case MEAT_AVIAN_TATOOINE:
        return "meat_avian_tatooine";
    case MEAT_AVIAN_YAVIN4:
        return "meat_avian_yavin4";
    case MEAT_CARNIVORE_CORELLIA:
        return "meat_carnivore_corellia";
    case MEAT_CARNIVORE_DANTOOINE:
        return "meat_carnivore_dantooine";
    case MEAT_CARNIVORE_DATHOMIR:
        return "meat_carnivore_dathomir";
    case MEAT_CARNIVORE_ENDOR:
        return "meat_carnivore_endor";
    case MEAT_CARNIVORE_LOK:
        return "meat_carnivore_lok";
    case MEAT_CARNIVORE_NABOO:
        return "meat_carnivore_naboo";
    case MEAT_CARNIVORE_RORI:
        return "meat_carnivore_rori";
    case MEAT_CARNIVORE_TALUS:
        return "meat_carnivore_talus";
    case MEAT_CARNIVORE_TATOOINE:
        return "meat_carnivore_tatooine";
    case MEAT_CARNIVORE_YAVIN4:
        return "meat_carnivore_yavin4";
    case MEAT_DOMESTICATED_CORELLIA:
        return "meat_domesticated_corellia";
    case MEAT_DOMESTICATED_DANTOOINE:
        return "meat_domesticated_dantooine";
    case MEAT_DOMESTICATED_DATHOMIR:
        return "meat_domesticated_dathomir";
    case MEAT_DOMESTICATED_ENDOR:
        return "meat_domesticated_endor";
    case MEAT_DOMESTICATED_LOK:
        return "meat_domesticated_lok";
    case MEAT_DOMESTICATED_NABOO:
        return "meat_domesticated_naboo";
    case MEAT_DOMESTICATED_RORI:
        return "meat_domesticated_rori";
    case MEAT_DOMESTICATED_TALUS:
        return "meat_domesticated_talus";
    case MEAT_DOMESTICATED_TATOOINE:
        return "meat_domesticated_tatooine";
    case MEAT_DOMESTICATED_YAVIN4:
        return "meat_domesticated_yavin4";
    case MEAT_EGG_CORELLIA:
        return "meat_egg_corellia";
    case MEAT_EGG_DANTOOINE:
        return "meat_egg_dantooine";
    case MEAT_EGG_DATHOMIR:
        return "meat_egg_dathomir";
    case MEAT_EGG_ENDOR:
        return "meat_egg_endor";
    case MEAT_EGG_LOK:
        return "meat_egg_lok";
    case MEAT_EGG_NABOO:
        return "meat_egg_naboo";
    case MEAT_EGG_RORI:
        return "meat_egg_rori";
    case MEAT_EGG_TALUS:
        return "meat_egg_talus";
    case MEAT_EGG_TATOOINE:
        return "meat_egg_tatooine";
    case MEAT_EGG_YAVIN4:
        return "meat_egg_yavin4";
    case MEAT_HERBIVORE_CORELLIA:
        return "meat_herbivore_corellia";
    case MEAT_HERBIVORE_DANTOOINE:
        return "meat_herbivore_dantooine";
    case MEAT_HERBIVORE_DATHOMIR:
        return "meat_herbivore_dathomir";
    case MEAT_HERBIVORE_ENDOR:
        return "meat_herbivore_endor";
    case MEAT_HERBIVORE_LOK:
        return "meat_herbivore_lok";
    case MEAT_HERBIVORE_NABOO:
        return "meat_herbivore_naboo";
    case MEAT_HERBIVORE_RORI:
        return "meat_herbivore_rori";
    case MEAT_HERBIVORE_TALUS:
        return "meat_herbivore_talus";
    case MEAT_HERBIVORE_TATOOINE:
        return "meat_herbivore_tatooine";
    case MEAT_HERBIVORE_YAVIN4:
        return "meat_herbivore_yavin4";
    case MEAT_INSECT_CORELLIA:
        return "meat_insect_corellia";
    case MEAT_INSECT_DANTOOINE:
        return "meat_insect_dantooine";
    case MEAT_INSECT_DATHOMIR:
        return "meat_insect_dathomir";
    case MEAT_INSECT_ENDOR:
        return "meat_insect_endor";
    case MEAT_INSECT_LOK:
        return "meat_insect_lok";
    case MEAT_INSECT_NABOO:
        return "meat_insect_naboo";
    case MEAT_INSECT_RORI:
        return "meat_insect_rori";
    case MEAT_INSECT_TALUS:
        return "meat_insect_talus";
    case MEAT_INSECT_TATOOINE:
        return "meat_insect_tatooine";
    case MEAT_INSECT_YAVIN4:
        return "meat_insect_yavin4";
    case MEAT_REPTILIAN_CORELLIA:
        return "meat_reptilian_corellia";
    case MEAT_REPTILIAN_DANTOOINE:
        return "meat_reptilian_dantooine";
    case MEAT_REPTILIAN_DATHOMIR:
        return "meat_reptilian_dathomir";
    case MEAT_REPTILIAN_ENDOR:
        return "meat_reptilian_endor";
    case MEAT_REPTILIAN_LOK:
        return "meat_reptilian_lok";
    case MEAT_REPTILIAN_NABOO:
        return "meat_reptilian_naboo";
    case MEAT_REPTILIAN_RORI:
        return "meat_reptilian_rori";
    case MEAT_REPTILIAN_TALUS:
        return "meat_reptilian_talus";
    case MEAT_REPTILIAN_TATOOINE:
        return "meat_reptilian_tatooine";
    case MEAT_REPTILIAN_YAVIN4:
        return "meat_reptilian_yavin4";
    case MEAT_WILD_CORELLIA:
        return "meat_wild_corellia";
    case MEAT_WILD_DANTOOINE:
        return "meat_wild_dantooine";
    case MEAT_WILD_DATHOMIR:
        return "meat_wild_dathomir";
    case MEAT_WILD_ENDOR:
        return "meat_wild_endor";
    case MEAT_WILD_LOK:
        return "meat_wild_lok";
    case MEAT_WILD_NABOO:
        return "meat_wild_naboo";
    case MEAT_WILD_RORI:
        return "meat_wild_rori";
    case MEAT_WILD_TALUS:
        return "meat_wild_talus";
    case MEAT_WILD_TATOOINE:
        return "meat_wild_tatooine";
    case MEAT_WILD_YAVIN4:
        return "meat_wild_yavin4";
    case METAL_FERROUS_UNKNOWN:
        return "metal_ferrous_unknown";
    case METAL_NONFERROUS_UNKNOWN:
        return "metal_nonferrous_unknown";
    case MILK_DOMESTICATED_CORELLIA:
        return "milk_domesticated_corellia";
    case MILK_DOMESTICATED_DANTOOINE:
        return "milk_domesticated_dantooine";
    case MILK_DOMESTICATED_DATHOMIR:
        return "milk_domesticated_dathomir";
    case MILK_DOMESTICATED_ENDOR:
        return "milk_domesticated_endor";
    case MILK_DOMESTICATED_LOK:
        return "milk_domesticated_lok";
    case MILK_DOMESTICATED_NABOO:
        return "milk_domesticated_naboo";
    case MILK_DOMESTICATED_RORI:
        return "milk_domesticated_rori";
    case MILK_DOMESTICATED_TALUS:
        return "milk_domesticated_talus";
    case MILK_DOMESTICATED_TATOOINE:
        return "milk_domesticated_tatooine";
    case MILK_DOMESTICATED_YAVIN4:
        return "milk_domesticated_yavin4";
    case MILK_WILD_CORELLIA:
        return "milk_wild_corellia";
    case MILK_WILD_DANTOOINE:
        return "milk_wild_dantooine";
    case MILK_WILD_DATHOMIR:
        return "milk_wild_dathomir";
    case MILK_WILD_ENDOR:
        return "milk_wild_endor";
    case MILK_WILD_LOK:
        return "milk_wild_lok";
    case MILK_WILD_NABOO:
        return "milk_wild_naboo";
    case MILK_WILD_RORI:
        return "milk_wild_rori";
    case MILK_WILD_TALUS:
        return "milk_wild_talus";
    case MILK_WILD_TATOOINE:
        return "milk_wild_tatooine";
    case MILK_WILD_YAVIN4:
        return "milk_wild_yavin4";
    case OATS_DOMESTICATED_CORELLIA:
        return "oats_domesticated_corellia";
    case OATS_DOMESTICATED_DANTOOINE:
        return "oats_domesticated_dantooine";
    case OATS_DOMESTICATED_DATHOMIR:
        return "oats_domesticated_dathomir";
    case OATS_DOMESTICATED_ENDOR:
        return "oats_domesticated_endor";
    case OATS_DOMESTICATED_LOK:
        return "oats_domesticated_lok";
    case OATS_DOMESTICATED_NABOO:
        return "oats_domesticated_naboo";
    case OATS_DOMESTICATED_RORI:
        return "oats_domesticated_rori";
    case OATS_DOMESTICATED_TALUS:
        return "oats_domesticated_talus";
    case OATS_DOMESTICATED_TATOOINE:
        return "oats_domesticated_tatooine";
    case OATS_DOMESTICATED_YAVIN4:
        return "oats_domesticated_yavin4";
    case OATS_WILD_CORELLIA:
        return "oats_wild_corellia";
    case OATS_WILD_DANTOOINE:
        return "oats_wild_dantooine";
    case OATS_WILD_DATHOMIR:
        return "oats_wild_dathomir";
    case OATS_WILD_ENDOR:
        return "oats_wild_endor";
    case OATS_WILD_LOK:
        return "oats_wild_lok";
    case OATS_WILD_NABOO:
        return "oats_wild_naboo";
    case OATS_WILD_RORI:
        return "oats_wild_rori";
    case OATS_WILD_TALUS:
        return "oats_wild_talus";
    case OATS_WILD_TATOOINE:
        return "oats_wild_tatooine";
    case OATS_WILD_YAVIN4:
        return "oats_wild_yavin4";
    case ORE_CARBONATE_ALANTIUM:
        return "ore_carbonate_alantium";
    case ORE_CARBONATE_BARTHIERIUM:
        return "ore_carbonate_barthierium";
    case ORE_CARBONATE_CHROMITE:
        return "ore_carbonate_chromite";
    case ORE_CARBONATE_FRASIUM:
        return "ore_carbonate_frasium";
    case ORE_CARBONATE_LOMMITE:
        return "ore_carbonate_lommite";
    case ORE_CARBONATE_OSTRINE:
        return "ore_carbonate_ostrine";
    case ORE_CARBONATE_VARIUM:
        return "ore_carbonate_varium";
    case ORE_CARBONATE_ZINSIAM:
        return "ore_carbonate_zinsiam";
    case ORE_EXTRUSIVE_BENE:
        return "ore_extrusive_bene";
    case ORE_EXTRUSIVE_CHRONAMITE:
        return "ore_extrusive_chronamite";
    case ORE_EXTRUSIVE_ILIMIUM:
        return "ore_extrusive_ilimium";
    case ORE_EXTRUSIVE_KALONTERIUM:
        return "ore_extrusive_kalonterium";
    case ORE_EXTRUSIVE_KESCHEL:
        return "ore_extrusive_keschel";
    case ORE_EXTRUSIVE_LIDIUM:
        return "ore_extrusive_lidium";
    case ORE_EXTRUSIVE_MARANIUM:
        return "ore_extrusive_maranium";
    case ORE_EXTRUSIVE_PHOLOKITE:
        return "ore_extrusive_pholokite";
    case ORE_EXTRUSIVE_QUADRENIUM:
        return "ore_extrusive_quadrenium";
    case ORE_EXTRUSIVE_VINTRIUM:
        return "ore_extrusive_vintrium";
    case ORE_IGNEOUS_UNKNOWN:
        return "ore_igneous_unknown";
    case ORE_INTRUSIVE_BERUBIUM:
        return "ore_intrusive_berubium";
    case ORE_INTRUSIVE_CHANLON:
        return "ore_intrusive_chanlon";
    case ORE_INTRUSIVE_CORINTIUM:
        return "ore_intrusive_corintium";
    case ORE_INTRUSIVE_DERILLIUM:
        return "ore_intrusive_derillium";
    case ORE_INTRUSIVE_DYLINIUM:
        return "ore_intrusive_dylinium";
    case ORE_INTRUSIVE_HOLLINIUM:
        return "ore_intrusive_hollinium";
    case ORE_INTRUSIVE_IONITE:
        return "ore_intrusive_ionite";
    case ORE_INTRUSIVE_KATRIUM:
        return "ore_intrusive_katrium";
    case ORE_INTRUSIVE_ORIDIUM:
        return "ore_intrusive_oridium";
    case ORE_SEDIMENTARY_UNKNOWN:
        return "ore_sedimentary_unknown";
    case ORE_SILICLASTIC_ARDANIUM:
        return "ore_siliclastic_ardanium";
    case ORE_SILICLASTIC_CORTOSIS:
        return "ore_siliclastic_cortosis";
    case ORE_SILICLASTIC_CRISM:
        return "ore_siliclastic_crism";
    case ORE_SILICLASTIC_FERMIONIC:
        return "ore_siliclastic_fermionic";
    case ORE_SILICLASTIC_MALAB:
        return "ore_siliclastic_malab";
    case ORE_SILICLASTIC_ROBINDUN:
        return "ore_siliclastic_robindun";
    case ORE_SILICLASTIC_TERTIAN:
        return "ore_siliclastic_tertian";
    case PETROCHEM_FUEL_LIQUID_TYPE1:
        return "petrochem_fuel_liquid_type1";
    case PETROCHEM_FUEL_LIQUID_TYPE2:
        return "petrochem_fuel_liquid_type2";
    case PETROCHEM_FUEL_LIQUID_TYPE3:
        return "petrochem_fuel_liquid_type3";
    case PETROCHEM_FUEL_LIQUID_TYPE4:
        return "petrochem_fuel_liquid_type4";
    case PETROCHEM_FUEL_LIQUID_TYPE5:
        return "petrochem_fuel_liquid_type5";
    case PETROCHEM_FUEL_LIQUID_TYPE6:
        return "petrochem_fuel_liquid_type6";
    case PETROCHEM_FUEL_LIQUID_TYPE7:
        return "petrochem_fuel_liquid_type7";
    case PETROCHEM_FUEL_LIQUID_UNKNOWN:
        return "petrochem_fuel_liquid_unknown";
    case PETROCHEM_FUEL_SOLID_TYPE1:
        return "petrochem_fuel_solid_type1";
    case PETROCHEM_FUEL_SOLID_TYPE2:
        return "petrochem_fuel_solid_type2";
    case PETROCHEM_FUEL_SOLID_TYPE3:
        return "petrochem_fuel_solid_type3";
    case PETROCHEM_FUEL_SOLID_TYPE4:
        return "petrochem_fuel_solid_type4";
    case PETROCHEM_FUEL_SOLID_TYPE5:
        return "petrochem_fuel_solid_type5";
    case PETROCHEM_FUEL_SOLID_TYPE6:
        return "petrochem_fuel_solid_type6";
    case PETROCHEM_FUEL_SOLID_TYPE7:
        return "petrochem_fuel_solid_type7";
    case PETROCHEM_FUEL_SOLID_UNKNOWN:
        return "petrochem_fuel_solid_unknown";
    case PETROCHEM_INERT_LUBRICATING_OIL:
        return "petrochem_inert_lubricating_oil";
    case PETROCHEM_INERT_POLYMER:
        return "petrochem_inert_polymer";
    case RADIOACTIVE_POLYMETRIC:
        return "radioactive_polymetric";
    case RADIOACTIVE_TYPE1:
        return "radioactive_type1";
    case RADIOACTIVE_TYPE2:
        return "radioactive_type2";
    case RADIOACTIVE_TYPE3:
        return "radioactive_type3";
    case RADIOACTIVE_TYPE4:
        return "radioactive_type4";
    case RADIOACTIVE_TYPE5:
        return "radioactive_type5";
    case RADIOACTIVE_TYPE6:
        return "radioactive_type6";
    case RADIOACTIVE_TYPE7:
        return "radioactive_type7";
    case RADIOACTIVE_UNKNOWN:
        return "radioactive_unknown";
    case RICE_DOMESTICATED_CORELLIA:
        return "rice_domesticated_corellia";
    case RICE_DOMESTICATED_DANTOOINE:
        return "rice_domesticated_dantooine";
    case RICE_DOMESTICATED_DATHOMIR:
        return "rice_domesticated_dathomir";
    case RICE_DOMESTICATED_ENDOR:
        return "rice_domesticated_endor";
    case RICE_DOMESTICATED_LOK:
        return "rice_domesticated_lok";
    case RICE_DOMESTICATED_NABOO:
        return "rice_domesticated_naboo";
    case RICE_DOMESTICATED_RORI:
        return "rice_domesticated_rori";
    case RICE_DOMESTICATED_TALUS:
        return "rice_domesticated_talus";
    case RICE_DOMESTICATED_TATOOINE:
        return "rice_domesticated_tatooine";
    case RICE_DOMESTICATED_YAVIN4:
        return "rice_domesticated_yavin4";
    case RICE_WILD_CORELLIA:
        return "rice_wild_corellia";
    case RICE_WILD_DANTOOINE:
        return "rice_wild_dantooine";
    case RICE_WILD_DATHOMIR:
        return "rice_wild_dathomir";
    case RICE_WILD_ENDOR:
        return "rice_wild_endor";
    case RICE_WILD_LOK:
        return "rice_wild_lok";
    case RICE_WILD_NABOO:
        return "rice_wild_naboo";
    case RICE_WILD_RORI:
        return "rice_wild_rori";
    case RICE_WILD_TALUS:
        return "rice_wild_talus";
    case RICE_WILD_TATOOINE:
        return "rice_wild_tatooine";
    case RICE_WILD_YAVIN4:
        return "rice_wild_yavin4";
    case SEAFOOD_CRUSTACEAN_CORELLIA:
        return "seafood_crustacean_corellia";
    case SEAFOOD_CRUSTACEAN_DANTOOINE:
        return "seafood_crustacean_dantooine";
    case SEAFOOD_CRUSTACEAN_DATHOMIR:
        return "seafood_crustacean_dathomir";
    case SEAFOOD_CRUSTACEAN_ENDOR:
        return "seafood_crustacean_endor";
    case SEAFOOD_CRUSTACEAN_LOK:
        return "seafood_crustacean_lok";
    case SEAFOOD_CRUSTACEAN_NABOO:
        return "seafood_crustacean_naboo";
    case SEAFOOD_CRUSTACEAN_RORI:
        return "seafood_crustacean_rori";
    case SEAFOOD_CRUSTACEAN_TALUS:
        return "seafood_crustacean_talus";
    case SEAFOOD_CRUSTACEAN_TATOOINE:
        return "seafood_crustacean_tatooine";
    case SEAFOOD_CRUSTACEAN_YAVIN4:
        return "seafood_crustacean_yavin4";
    case SEAFOOD_FISH_CORELLIA:
        return "seafood_fish_corellia";
    case SEAFOOD_FISH_DANTOOINE:
        return "seafood_fish_dantooine";
    case SEAFOOD_FISH_DATHOMIR:
        return "seafood_fish_dathomir";
    case SEAFOOD_FISH_ENDOR:
        return "seafood_fish_endor";
    case SEAFOOD_FISH_LOK:
        return "seafood_fish_lok";
    case SEAFOOD_FISH_NABOO:
        return "seafood_fish_naboo";
    case SEAFOOD_FISH_RORI:
        return "seafood_fish_rori";
    case SEAFOOD_FISH_TALUS:
        return "seafood_fish_talus";
    case SEAFOOD_FISH_TATOOINE:
        return "seafood_fish_tatooine";
    case SEAFOOD_FISH_YAVIN4:
        return "seafood_fish_yavin4";
    case SEAFOOD_MOLLUSK_CORELLIA:
        return "seafood_mollusk_corellia";
    case SEAFOOD_MOLLUSK_DANTOOINE:
        return "seafood_mollusk_dantooine";
    case SEAFOOD_MOLLUSK_DATHOMIR:
        return "seafood_mollusk_dathomir";
    case SEAFOOD_MOLLUSK_ENDOR:
        return "seafood_mollusk_endor";
    case SEAFOOD_MOLLUSK_LOK:
        return "seafood_mollusk_lok";
    case SEAFOOD_MOLLUSK_NABOO:
        return "seafood_mollusk_naboo";
    case SEAFOOD_MOLLUSK_RORI:
        return "seafood_mollusk_rori";
    case SEAFOOD_MOLLUSK_TALUS:
        return "seafood_mollusk_talus";
    case SEAFOOD_MOLLUSK_TATOOINE:
        return "seafood_mollusk_tatooine";
    case SEAFOOD_MOLLUSK_YAVIN4:
        return "seafood_mollusk_yavin4";
    case SOFTWOOD_CONIFER_CORELLIA:
        return "softwood_conifer_corellia";
    case SOFTWOOD_CONIFER_DANTOOINE:
        return "softwood_conifer_dantooine";
    case SOFTWOOD_CONIFER_DATHOMIR:
        return "softwood_conifer_dathomir";
    case SOFTWOOD_CONIFER_ENDOR:
        return "softwood_conifer_endor";
    case SOFTWOOD_CONIFER_LOK:
        return "softwood_conifer_lok";
    case SOFTWOOD_CONIFER_NABOO:
        return "softwood_conifer_naboo";
    case SOFTWOOD_CONIFER_RORI:
        return "softwood_conifer_rori";
    case SOFTWOOD_CONIFER_TALUS:
        return "softwood_conifer_talus";
    case SOFTWOOD_CONIFER_TATOOINE:
        return "softwood_conifer_tatooine";
    case SOFTWOOD_CONIFER_YAVIN4:
        return "softwood_conifer_yavin4";
    case SOFTWOOD_EVERGREEN_CORELLIA:
        return "softwood_evergreen_corellia";
    case SOFTWOOD_EVERGREEN_DANTOOINE:
        return "softwood_evergreen_dantooine";
    case SOFTWOOD_EVERGREEN_DATHOMIR:
        return "softwood_evergreen_dathomir";
    case SOFTWOOD_EVERGREEN_ENDOR:
        return "softwood_evergreen_endor";
    case SOFTWOOD_EVERGREEN_LOK:
        return "softwood_evergreen_lok";
    case SOFTWOOD_EVERGREEN_NABOO:
        return "softwood_evergreen_naboo";
    case SOFTWOOD_EVERGREEN_RORI:
        return "softwood_evergreen_rori";
    case SOFTWOOD_EVERGREEN_TALUS:
        return "softwood_evergreen_talus";
    case SOFTWOOD_EVERGREEN_TATOOINE:
        return "softwood_evergreen_tatooine";
    case SOFTWOOD_EVERGREEN_YAVIN4:
        return "softwood_evergreen_yavin4";
    case STEEL_ARVESHIAN:
        return "steel_arveshian";
    case STEEL_BICORBANTIUM:
        return "steel_bicorbantium";
    case STEEL_CARBONITE:
        return "steel_carbonite";
    case STEEL_CUBIRIAN:
        return "steel_cubirian";
    case STEEL_DITANIUM:
        return "steel_ditanium";
    case STEEL_DURALLOY:
        return "steel_duralloy";
    case STEEL_DURANIUM:
        return "steel_duranium";
    case STEEL_KIIRIUM:
        return "steel_kiirium";
    case STEEL_NEUTRONIUM:
        return "steel_neutronium";
    case STEEL_QUADRANIUM:
        return "steel_quadranium";
    case STEEL_RHODIUM:
        return "steel_rhodium";
    case STEEL_THORANIUM:
        return "steel_thoranium";
    case VEGETABLE_BEANS_CORELLIA:
        return "vegetable_beans_corellia";
    case VEGETABLE_BEANS_DANTOOINE:
        return "vegetable_beans_dantooine";
    case VEGETABLE_BEANS_DATHOMIR:
        return "vegetable_beans_dathomir";
    case VEGETABLE_BEANS_ENDOR:
        return "vegetable_beans_endor";
    case VEGETABLE_BEANS_LOK:
        return "vegetable_beans_lok";
    case VEGETABLE_BEANS_NABOO:
        return "vegetable_beans_naboo";
    case VEGETABLE_BEANS_RORI:
        return "vegetable_beans_rori";
    case VEGETABLE_BEANS_TALUS:
        return "vegetable_beans_talus";
    case VEGETABLE_BEANS_TATOOINE:
        return "vegetable_beans_tatooine";
    case VEGETABLE_BEANS_YAVIN4:
        return "vegetable_beans_yavin4";
    case VEGETABLE_FUNGI_CORELLIA:
        return "vegetable_fungi_corellia";
    case VEGETABLE_FUNGI_DANTOOINE:
        return "vegetable_fungi_dantooine";
    case VEGETABLE_FUNGI_DATHOMIR:
        return "vegetable_fungi_dathomir";
    case VEGETABLE_FUNGI_ENDOR:
        return "vegetable_fungi_endor";
    case VEGETABLE_FUNGI_LOK:
        return "vegetable_fungi_lok";
    case VEGETABLE_FUNGI_NABOO:
        return "vegetable_fungi_naboo";
    case VEGETABLE_FUNGI_RORI:
        return "vegetable_fungi_rori";
    case VEGETABLE_FUNGI_TALUS:
        return "vegetable_fungi_talus";
    case VEGETABLE_FUNGI_TATOOINE:
        return "vegetable_fungi_tatooine";
    case VEGETABLE_FUNGI_YAVIN4:
        return "vegetable_fungi_yavin4";
    case VEGETABLE_GREENS_CORELLIA:
        return "vegetable_greens_corellia";
    case VEGETABLE_GREENS_DANTOOINE:
        return "vegetable_greens_dantooine";
    case VEGETABLE_GREENS_DATHOMIR:
        return "vegetable_greens_dathomir";
    case VEGETABLE_GREENS_ENDOR:
        return "vegetable_greens_endor";
    case VEGETABLE_GREENS_LOK:
        return "vegetable_greens_lok";
    case VEGETABLE_GREENS_NABOO:
        return "vegetable_greens_naboo";
    case VEGETABLE_GREENS_RORI:
        return "vegetable_greens_rori";
    case VEGETABLE_GREENS_TALUS:
        return "vegetable_greens_talus";
    case VEGETABLE_GREENS_TATOOINE:
        return "vegetable_greens_tatooine";
    case VEGETABLE_GREENS_YAVIN4:
        return "vegetable_greens_yavin4";
    case VEGETABLE_TUBERS_CORELLIA:
        return "vegetable_tubers_corellia";
    case VEGETABLE_TUBERS_DANTOOINE:
        return "vegetable_tubers_dantooine";
    case VEGETABLE_TUBERS_DATHOMIR:
        return "vegetable_tubers_dathomir";
    case VEGETABLE_TUBERS_ENDOR:
        return "vegetable_tubers_endor";
    case VEGETABLE_TUBERS_LOK:
        return "vegetable_tubers_lok";
    case VEGETABLE_TUBERS_NABOO:
        return "vegetable_tubers_naboo";
    case VEGETABLE_TUBERS_RORI:
        return "vegetable_tubers_rori";
    case VEGETABLE_TUBERS_TALUS:
        return "vegetable_tubers_talus";
    case VEGETABLE_TUBERS_TATOOINE:
        return "vegetable_tubers_tatooine";
    case VEGETABLE_TUBERS_YAVIN4:
        return "vegetable_tubers_yavin4";
    case WATER_VAPOR_CORELLIA:
        return "water_vapor_corellia";
    case WATER_VAPOR_DANTOOINE:
        return "water_vapor_dantooine";
    case WATER_VAPOR_DATHOMIR:
        return "water_vapor_dathomir";
    case WATER_VAPOR_ENDOR:
        return "water_vapor_endor";
    case WATER_VAPOR_LOK:
        return "water_vapor_lok";
    case WATER_VAPOR_NABOO:
        return "water_vapor_naboo";
    case WATER_VAPOR_RORI:
        return "water_vapor_rori";
    case WATER_VAPOR_TALUS:
        return "water_vapor_talus";
    case WATER_VAPOR_TATOOINE:
        return "water_vapor_tatooine";
    case WATER_VAPOR_YAVIN4:
        return "water_vapor_yavin4";
    case WHEAT_DOMESTICATED_CORELLIA:
        return "wheat_domesticated_corellia";
    case WHEAT_DOMESTICATED_DANTOOINE:
        return "wheat_domesticated_dantooine";
    case WHEAT_DOMESTICATED_DATHOMIR:
        return "wheat_domesticated_dathomir";
    case WHEAT_DOMESTICATED_ENDOR:
        return "wheat_domesticated_endor";
    case WHEAT_DOMESTICATED_LOK:
        return "wheat_domesticated_lok";
    case WHEAT_DOMESTICATED_NABOO:
        return "wheat_domesticated_naboo";
    case WHEAT_DOMESTICATED_RORI:
        return "wheat_domesticated_rori";
    case WHEAT_DOMESTICATED_TALUS:
        return "wheat_domesticated_talus";
    case WHEAT_DOMESTICATED_TATOOINE:
        return "wheat_domesticated_tatooine";
    case WHEAT_DOMESTICATED_YAVIN4:
        return "wheat_domesticated_yavin4";
    case WHEAT_WILD_CORELLIA:
        return "wheat_wild_corellia";
    case WHEAT_WILD_DANTOOINE:
        return "wheat_wild_dantooine";
    case WHEAT_WILD_DATHOMIR:
        return "wheat_wild_dathomir";
    case WHEAT_WILD_ENDOR:
        return "wheat_wild_endor";
    case WHEAT_WILD_LOK:
        return "wheat_wild_lok";
    case WHEAT_WILD_NABOO:
        return "wheat_wild_naboo";
    case WHEAT_WILD_RORI:
        return "wheat_wild_rori";
    case WHEAT_WILD_TALUS:
        return "wheat_wild_talus";
    case WHEAT_WILD_TATOOINE:
        return "wheat_wild_tatooine";
    case WHEAT_WILD_YAVIN4:
        return "wheat_wild_yavin4";
    case WOOD_DECIDUOUS_CORELLIA:
        return "wood_deciduous_corellia";
    case WOOD_DECIDUOUS_DANTOOINE:
        return "wood_deciduous_dantooine";
    case WOOD_DECIDUOUS_DATHOMIR:
        return "wood_deciduous_dathomir";
    case WOOD_DECIDUOUS_ENDOR:
        return "wood_deciduous_endor";
    case WOOD_DECIDUOUS_LOK:
        return "wood_deciduous_lok";
    case WOOD_DECIDUOUS_NABOO:
        return "wood_deciduous_naboo";
    case WOOD_DECIDUOUS_RORI:
        return "wood_deciduous_rori";
    case WOOD_DECIDUOUS_TALUS:
        return "wood_deciduous_talus";
    case WOOD_DECIDUOUS_TATOOINE:
        return "wood_deciduous_tatooine";
    case WOOD_DECIDUOUS_YAVIN4:
        return "wood_deciduous_yavin4";
    default:
        return "bad SWG_resource_types enum";
    }
}

std::string SWGResourceTypeStringPretty(SWG_resource_types e)
{
    switch (e)
    {
    case ALUMINUM_AGRINIUM:
        return "Agrinium Aluminum";
    case ALUMINUM_CHROMIUM:
        return "Chromium Aluminum";
    case ALUMINUM_DURALUMIN:
        return "Duralumin Aluminum";
    case ALUMINUM_LINKSTEEL:
        return "Link-Steel Aluminum";
    case ALUMINUM_PEROVSKITIC:
        return "Perovskitic Aluminum";
    case ALUMINUM_PHRIK:
        return "Phrik Aluminum";
    case ALUMINUM_TITANIUM:
        return "Titanium Aluminum";
    case ARMOPHOUS_BALTARAN:
        return "Bal'ta'ran Crystal Amorphous Gemstone";
    case ARMOPHOUS_BARADIUM:
        return "Baradium Amorphous Gemstone";
    case ARMOPHOUS_BOSPRIDIUM:
        return "Bospridium Amorphous Gemstone";
    case ARMOPHOUS_PLEXITE:
        return "Plexite Amorphous Gemstone";
    case ARMOPHOUS_REGVIS:
        return "Regvis Amorphous Gemstone";
    case ARMOPHOUS_RUDIC:
        return "Rudic Amorphous Gemstone";
    case ARMOPHOUS_RYLL:
        return "Ryll Amorphous Gemstone";
    case ARMOPHOUS_SEDRELLIUM:
        return "Sedrellium Amorphous Gemstone";
    case ARMOPHOUS_STYGIUM:
        return "Stygium Amorphous Gemstone";
    case ARMOPHOUS_VENDUSII:
        return "Vendusii Crystal Amorphous Gemstone";
    case BONE_AVIAN_CORELLIA:
        return "Corellian Avian Bones";
    case BONE_AVIAN_DANTOOINE:
        return "Dantooine Avian Bones";
    case BONE_AVIAN_DATHOMIR:
        return "Dathomirian Avian Bones";
    case BONE_AVIAN_ENDOR:
        return "Endorian Avian Bones";
    case BONE_AVIAN_LOK:
        return "Lokian Avian Bones";
    case BONE_AVIAN_NABOO:
        return "Nabooian Avian Bones";
    case BONE_AVIAN_RORI:
        return "Rori Avian Bones";
    case BONE_AVIAN_TALUS:
        return "Talusian Avian Bones";
    case BONE_AVIAN_TATOOINE:
        return "Tatooinian Avian Bones";
    case BONE_AVIAN_YAVIN4:
        return "Yavinian Avian Bones";
    case BONE_HORN_CORELLIA:
        return "Corellian Horn";
    case BONE_HORN_DANTOOINE:
        return "Dantooine Horn";
    case BONE_HORN_DATHOMIR:
        return "Dothomirian Horn";
    case BONE_HORN_ENDOR:
        return "Endorian Horn";
    case BONE_HORN_LOK:
        return "Lokian Horn";
    case BONE_HORN_NABOO:
        return "Nabooian Horn";
    case BONE_HORN_RORI:
        return "Rori Horn";
    case BONE_HORN_TALUS:
        return "Talusian Horn";
    case BONE_HORN_TATOOINE:
        return "Tatooinian Horn";
    case BONE_HORN_YAVIN4:
        return "Yavinian Horn";
    case BONE_MAMMAL_CORELLIA:
        return "Corellian Animal Bones";
    case BONE_MAMMAL_DANTOOINE:
        return "Dantooine Animal Bones";
    case BONE_MAMMAL_DATHOMIR:
        return "Dathomirian Animal Bones";
    case BONE_MAMMAL_ENDOR:
        return "Endorian Animal Bones";
    case BONE_MAMMAL_LOK:
        return "Lokian  Animal Bones";
    case BONE_MAMMAL_NABOO:
        return "Nabooian  Animal Bones";
    case BONE_MAMMAL_RORI:
        return "Rori  Animal Bones";
    case BONE_MAMMAL_TALUS:
        return "Talusian  Animal Bones";
    case BONE_MAMMAL_TATOOINE:
        return "Tatooinian  Animal Bones";
    case BONE_MAMMAL_YAVIN4:
        return "Yavinian  Animal Bones";
    case COPPER_BEYRLLIUS:
        return "Beyrllius Copper";
    case COPPER_BOROCARBITIC:
        return "Conductive Borcarbitic Copper";
    case COPPER_CODOAN:
        return "Codoan Copper";
    case COPPER_DESH:
        return "Desh Copper";
    case COPPER_DIATIUM:
        return "Diatium Copper";
    case COPPER_KELSH:
        return "Kelsh Copper";
    case COPPER_MYTHRA:
        return "Mythra Copper";
    case COPPER_PLATINITE:
        return "Platinite Copper";
    case COPPER_POLYSTEEL:
        return "Polysteel Copper";
    case COPPER_THALLIUM:
        return "Thallium Copper";
    case CORN_DOMESTICATED_CORELLIA:
        return "Corellian Domesticated Corn";
    case CORN_DOMESTICATED_DANTOOINE:
        return "Dantooine Domesticated Corn";
    case CORN_DOMESTICATED_DATHOMIR:
        return "Dathomirian Domesticated Corn";
    case CORN_DOMESTICATED_ENDOR:
        return "Endorian Domesticated Corn";
    case CORN_DOMESTICATED_LOK:
        return "Lokian Domesticated Corn";
    case CORN_DOMESTICATED_NABOO:
        return "Nabooian Domesticated Corn";
    case CORN_DOMESTICATED_RORI:
        return "Rori Domesticated Corn";
    case CORN_DOMESTICATED_TALUS:
        return "Talusian Domesticated Corn";
    case CORN_DOMESTICATED_TATOOINE:
        return "Tatooinian Domesticated Corn";
    case CORN_DOMESTICATED_YAVIN4:
        return "Yavinian Domesticated Corn";
    case CORN_WILD_CORELLIA:
        return "Corellian Wild Corn";
    case CORN_WILD_DANTOOINE:
        return "Dantooine Wild Corn";
    case CORN_WILD_DATHOMIR:
        return "Dathomirian Wild Corn";
    case CORN_WILD_ENDOR:
        return "Endorian Wild Corn";
    case CORN_WILD_LOK:
        return "Lokian Wild Corn";
    case CORN_WILD_NABOO:
        return "Nabooian Wild Corn";
    case CORN_WILD_RORI:
        return "Rori Wild Corn";
    case CORN_WILD_TALUS:
        return "Talusian Wild Corn";
    case CORN_WILD_TATOOINE:
        return "Tatooinian Wild Corn";
    case CORN_WILD_YAVIN4:
        return "Yavinian Wild Corn";
    case CRYSTALLINE_BYROTHSIS:
        return "Byrothsis Crystalline Gemstone";
    case CRYSTALLINE_GALLINORIAN:
        return "Gallinorian Rainbow Gem Crystalline Gemstone";
    case CRYSTALLINE_GREEN_DIAMOND:
        return "Green Diamond Crystalline Gemstone";
    case CRYSTALLINE_KEROL_FIREGEM:
        return "Kerol Fire-Gem Crystalline Gemstone";
    case CRYSTALLINE_LABOI_MINERAL_CRYSTAL:
        return "Laboi Mineral Crystal Crystalline Gemstone";
    case CRYSTALLINE_SEAFAH_JEWEL:
        return "Seafah Jewel Crystalline Gemstone";
    case CRYSTALLINE_SORMAHIL_FIREGEM:
        return "Sormahil Fire Gem Crystalline Gemstone";
    case CRYSTALLINE_VERTEX:
        return "Vertex Crystalline Gemstone";
    case ENERGY_RENEWABLE_SITE_LIMITED_GEOTHERMAL_CORELLIA:
        return "Corellian Geothermal Renewable Energy";
    case ENERGY_RENEWABLE_SITE_LIMITED_GEOTHERMAL_DANTOOINE:
        return "Dantooine Geothermal Renewable Energy";
    case ENERGY_RENEWABLE_SITE_LIMITED_GEOTHERMAL_DATHOMIR:
        return "Dathomirian Geothermal Renewable Energy";
    case ENERGY_RENEWABLE_SITE_LIMITED_GEOTHERMAL_ENDOR:
        return "Endorian Geothermal Renewable Energy";
    case ENERGY_RENEWABLE_SITE_LIMITED_GEOTHERMAL_LOK:
        return "Lokian Geothermal Renewable Energy";
    case ENERGY_RENEWABLE_SITE_LIMITED_GEOTHERMAL_NABOO:
        return "Nabooian Geothermal Renewable Energy";
    case ENERGY_RENEWABLE_SITE_LIMITED_GEOTHERMAL_RORI:
        return "Rori Geothermal Renewable Energy";
    case ENERGY_RENEWABLE_SITE_LIMITED_GEOTHERMAL_TALUS:
        return "Talusian Geothermal Renewable Energy";
    case ENERGY_RENEWABLE_SITE_LIMITED_GEOTHERMAL_TATOOINE:
        return "Tatooinian Geothermal Renewable Energy";
    case ENERGY_RENEWABLE_SITE_LIMITED_GEOTHERMAL_YAVIN4:
        return "Yavinian Geothermal Renewable Energy";
    case ENERGY_RENEWABLE_SITE_LIMITED_HYDRON3_CORELLIA:
        return "Corellian Hydron-3 Renewable Energy";
    case ENERGY_RENEWABLE_SITE_LIMITED_HYDRON3_DANTOOINE:
        return "Dantooine Hydron-3 Renewable Energy";
    case ENERGY_RENEWABLE_SITE_LIMITED_HYDRON3_DATHOMIR:
        return "Dathomirian Hydron-3 Renewable Energy";
    case ENERGY_RENEWABLE_SITE_LIMITED_HYDRON3_ENDOR:
        return "Endorian Hydron-3 Renewable Energy";
    case ENERGY_RENEWABLE_SITE_LIMITED_HYDRON3_LOK:
        return "Lokian Hydron-3 Renewable Energy";
    case ENERGY_RENEWABLE_SITE_LIMITED_HYDRON3_NABOO:
        return "Nabooian Hydron-3 Renewable Energy";
    case ENERGY_RENEWABLE_SITE_LIMITED_HYDRON3_RORI:
        return "Rori Hydron-3 Renewable Energy";
    case ENERGY_RENEWABLE_SITE_LIMITED_HYDRON3_TALUS:
        return "Talusian Hydron-3 Renewable Energy";
    case ENERGY_RENEWABLE_SITE_LIMITED_HYDRON3_TATOOINE:
        return "Tatooinian Hydron-3 Renewable Energy";
    case ENERGY_RENEWABLE_SITE_LIMITED_HYDRON3_YAVIN4:
        return "Yavinian Hydron-3 Renewable Energy";
    case ENERGY_RENEWABLE_SITE_LIMITED_TIDAL_CORELLIA:
        return "Corellian Tidal Renewable Energy";
    case ENERGY_RENEWABLE_SITE_LIMITED_TIDAL_DANTOOINE:
        return "Dantooine Tidal Renewable Energy";
    case ENERGY_RENEWABLE_SITE_LIMITED_TIDAL_DATHOMIR:
        return "Dathomirian Tidal Renewable Energy";
    case ENERGY_RENEWABLE_SITE_LIMITED_TIDAL_ENDOR:
        return "Endor Tidal Renewable Energy";
    case ENERGY_RENEWABLE_SITE_LIMITED_TIDAL_LOK:
        return "Lokian Tidal Renewable Energy";
    case ENERGY_RENEWABLE_SITE_LIMITED_TIDAL_NABOO:
        return "Naboo Tidal Renewable Energy";
    case ENERGY_RENEWABLE_SITE_LIMITED_TIDAL_RORI:
        return "Rori Tidal Renewable Energy";
    case ENERGY_RENEWABLE_SITE_LIMITED_TIDAL_TALUS:
        return "Talusian Tidal Renewable Energy";
    case ENERGY_RENEWABLE_SITE_LIMITED_TIDAL_TATOOINE:
        return "Tatooinian Tidal Renewable Energy";
    case ENERGY_RENEWABLE_SITE_LIMITED_TIDAL_YAVIN4:
        return "Yavinian Tidal Renewable Energy";
    case ENERGY_RENEWABLE_UNLIMITED_SOLAR_CORELLIA:
        return "Corellian Solar Renewable Energy";
    case ENERGY_RENEWABLE_UNLIMITED_SOLAR_DANTOOINE:
        return "Dantooine Solar Renewable Energy";
    case ENERGY_RENEWABLE_UNLIMITED_SOLAR_DATHOMIR:
        return "Dathomirian Solar Renewable Energy";
    case ENERGY_RENEWABLE_UNLIMITED_SOLAR_ENDOR:
        return "Endorian Solar Renewable Energy";
    case ENERGY_RENEWABLE_UNLIMITED_SOLAR_LOK:
        return "Lokian Solar Renewable Energy";
    case ENERGY_RENEWABLE_UNLIMITED_SOLAR_NABOO:
        return "Nabooian Solar Renewable Energy";
    case ENERGY_RENEWABLE_UNLIMITED_SOLAR_RORI:
        return "Rori Solar Renewable Energy";
    case ENERGY_RENEWABLE_UNLIMITED_SOLAR_TALUS:
        return "Talusian Solar Renewable Energy";
    case ENERGY_RENEWABLE_UNLIMITED_SOLAR_TATOOINE:
        return "Tatooinian Solar Renewable Energy";
    case ENERGY_RENEWABLE_UNLIMITED_SOLAR_YAVIN4:
        return "Yavinian Solar Renewable Energy";
    case ENERGY_RENEWABLE_UNLIMITED_WIND_CORELLIA:
        return "Corellian Wind Renewable Energy";
    case ENERGY_RENEWABLE_UNLIMITED_WIND_DANTOOINE:
        return "Dantooine Wind Renewable Energy";
    case ENERGY_RENEWABLE_UNLIMITED_WIND_DATHOMIR:
        return "Dathomirian Wind Renewable Energy";
    case ENERGY_RENEWABLE_UNLIMITED_WIND_ENDOR:
        return "Endorian Wind Renewable Energy";
    case ENERGY_RENEWABLE_UNLIMITED_WIND_LOK:
        return "Lokian Wind Renewable Energy";
    case ENERGY_RENEWABLE_UNLIMITED_WIND_NABOO:
        return "Nabooian Wind Renewable Energy";
    case ENERGY_RENEWABLE_UNLIMITED_WIND_RORI:
        return "Rori Wind Renewable Energy";
    case ENERGY_RENEWABLE_UNLIMITED_WIND_TALUS:
        return "Talusian Wind Renewable Energy";
    case ENERGY_RENEWABLE_UNLIMITED_WIND_TATOOINE:
        return "Tatooinian Wind Renewable Energy";
    case ENERGY_RENEWABLE_UNLIMITED_WIND_YAVIN4:
        return "Yavinian Wind Renewable Energy";
    case FIBERPLAST_CORELLIA:
        return "Corellia Fiberplast";
    case FIBERPLAST_DANTOOINE:
        return "Dantooine Fiberplast";
    case FIBERPLAST_DATHOMIR:
        return "Dathomirian Fiberplast";
    case FIBERPLAST_ENDOR:
        return "Endorian Fiberplast";
    case FIBERPLAST_GRAVITONIC:
        return "Gravitonic Fiberplast";
    case FIBERPLAST_LOK:
        return "Lokian Fiberplast";
    case FIBERPLAST_NABOO:
        return "Nabooian Fiberplast";
    case FIBERPLAST_RORI:
        return "Rori Fiberplast";
    case FIBERPLAST_TALUS:
        return "Talusian Fiberplast";
    case FIBERPLAST_TATOOINE:
        return "Tatooinian Fiberplast";
    case FIBERPLAST_YAVIN4:
        return "Yavinian Fiberplast";
    case FRUIT_BERRIES_CORELLIA:
        return "Corellia Berry Fruit";
    case FRUIT_BERRIES_DANTOOINE:
        return "Dantooine Berry Fruit";
    case FRUIT_BERRIES_DATHOMIR:
        return "Dathomirian Berry Fruit";
    case FRUIT_BERRIES_ENDOR:
        return "Endorian Berry Fruit";
    case FRUIT_BERRIES_LOK:
        return "Lokian Berry Fruit";
    case FRUIT_BERRIES_NABOO:
        return "Nabooian Berry Fruit";
    case FRUIT_BERRIES_RORI:
        return "Rori Berry Fruit";
    case FRUIT_BERRIES_TALUS:
        return "Talusian Berry Fruit";
    case FRUIT_BERRIES_TATOOINE:
        return "Tatooinian Berry Fruit";
    case FRUIT_BERRIES_YAVIN4:
        return "Yavinian Berry Fruit";
    case FRUIT_FLOWERS_CORELLIA:
        return "Corellia Flower Fruit";
    case FRUIT_FLOWERS_DANTOOINE:
        return "Dantooine Flower Fruit";
    case FRUIT_FLOWERS_DATHOMIR:
        return "Dathomirian Flower Fruit";
    case FRUIT_FLOWERS_ENDOR:
        return "Endorian Flower Fruit";
    case FRUIT_FLOWERS_LOK:
        return "Lokian Flower Fruit";
    case FRUIT_FLOWERS_NABOO:
        return "Nabooian Flower Fruit";
    case FRUIT_FLOWERS_RORI:
        return "Rori Flower Fruit";
    case FRUIT_FLOWERS_TALUS:
        return "Talusian Flower Fruit";
    case FRUIT_FLOWERS_TATOOINE:
        return "Tatooinian Flower Fruit";
    case FRUIT_FLOWERS_YAVIN4:
        return "Yavinian Flower Fruit";
    case FRUIT_FRUITS_CORELLIA:
        return "Corellian Fruit";
    case FRUIT_FRUITS_DANTOOINE:
        return "Dantooine Fruit";
    case FRUIT_FRUITS_DATHOMIR:
        return "Dathomirian Fruit";
    case FRUIT_FRUITS_ENDOR:
        return "Endorian Fruit";
    case FRUIT_FRUITS_LOK:
        return "Lokian Fruit";
    case FRUIT_FRUITS_NABOO:
        return "Nabooian Fruit";
    case FRUIT_FRUITS_RORI:
        return "Rori Fruit";
    case FRUIT_FRUITS_TALUS:
        return "Talusian Fruit";
    case FRUIT_FRUITS_TATOOINE:
        return "Tatooinian Fruit";
    case FRUIT_FRUITS_YAVIN4:
        return "Yavinian Fruit";
    case GAS_INERT_BILAL:
        return "Bilal gas Inert Gas";
    case GAS_INERT_CORTHEL:
        return "Corthel Inert Gas";
    case GAS_INERT_CULSION:
        return "Culsion Inert Gas";
    case GAS_INERT_DIOXIS:
        return "Dioxis Inert Gas";
    case GAS_INERT_HURLOTHROMBIC:
        return "Hurlothrombic Inert Gas";
    case GAS_INERT_HYDRON3:
        return "Hydron-3 Inert Gas";
    case GAS_INERT_KAYLON:
        return "Kaylon Inert Gas";
    case GAS_INERT_KORFAISE:
        return "Korfaise Inert Gas";
    case GAS_INERT_MALIUM:
        return "Malium Inert Gas";
    case GAS_INERT_METHANAGEN:
        return "Methanagen Inert Gas";
    case GAS_INERT_MIRTH:
        return "Mirth Inert Gas";
    case GAS_INERT_OBAH:
        return "Obah Inert Gas";
    case GAS_INERT_RETHIN:
        return "Rethin Inert Gas";
    case GAS_INERT_UNKNOWN:
        return "Unknown Inert Gas";
    case GAS_REACTIVE_ELETON:
        return "Eleton Reactive Gas";
    case GAS_REACTIVE_IROLUNN:
        return "Irolunn Reactive Gas";
    case GAS_REACTIVE_METHANE:
        return "Methane Reactive Gas";
    case GAS_REACTIVE_ORGANOMETALLIC:
        return "Unstable Organometallic Reactive Gas";
    case GAS_REACTIVE_ORVETH:
        return "Orveth Reactive Gas";
    case GAS_REACTIVE_SIG:
        return "Sig Reactive Gas";
    case GAS_REACTIVE_SKEVON:
        return "Skevon Reactive Gas";
    case GAS_REACTIVE_TOLIUM:
        return "Tolium Reactive Gas";
    case GAS_REACTIVE_UNKNOWN:
        return "Unknown Reactive Gas";
    case GEMSTONE_UNKNOWN:
        return "Unknown Gem Type";
    case HIDE_BRISTLEY_CORELLIA:
        return "Corellian Bristley Hide";
    case HIDE_BRISTLEY_DANTOOINE:
        return "Dantooine Bristley Hide";
    case HIDE_BRISTLEY_DATHOMIR:
        return "Dathomirian Bristley Hide";
    case HIDE_BRISTLEY_ENDOR:
        return "Endorian Bristley Hide";
    case HIDE_BRISTLEY_LOK:
        return "Lokian Bristley Hide";
    case HIDE_BRISTLEY_NABOO:
        return "Nabooian Bristley Hide";
    case HIDE_BRISTLEY_RORI:
        return "Rori Bristley Hide";
    case HIDE_BRISTLEY_TALUS:
        return "Talusian Bristley Hide";
    case HIDE_BRISTLEY_TATOOINE:
        return "Tatooinian Bristley Hide";
    case HIDE_BRISTLEY_YAVIN4:
        return "Yavinian Bristley Hide";
    case HIDE_LEATHERY_CORELLIA:
        return "Corellian Leathery Hide";
    case HIDE_LEATHERY_DANTOOINE:
        return "Dantooine Leathery Hide";
    case HIDE_LEATHERY_DATHOMIR:
        return "Dathomirian Leathery Hide";
    case HIDE_LEATHERY_ENDOR:
        return "Endorian Leathery Hide";
    case HIDE_LEATHERY_LOK:
        return "Lokian Leathery Hide";
    case HIDE_LEATHERY_NABOO:
        return "Nabooian Leathery Hide";
    case HIDE_LEATHERY_RORI:
        return "Rori Leathery Hide";
    case HIDE_LEATHERY_TALUS:
        return "Talusian Leathery Hide";
    case HIDE_LEATHERY_TATOOINE:
        return "Tatooinian Leathery Hide";
    case HIDE_LEATHERY_YAVIN4:
        return "Yavinian Leathery Hide";
    case HIDE_SCALEY_CORELLIA:
        return "Corellian Scaley Hide";
    case HIDE_SCALEY_DANTOOINE:
        return "Dantooine Scaley Hide";
    case HIDE_SCALEY_DATHOMIR:
        return "Dathomirian Scaley Hide";
    case HIDE_SCALEY_ENDOR:
        return "Endorian Scaley Hide";
    case HIDE_SCALEY_LOK:
        return "Lokian Scaley Hide";
    case HIDE_SCALEY_NABOO:
        return "Nabooian Scaley Hide";
    case HIDE_SCALEY_RORI:
        return "Rori Scaley Hide";
    case HIDE_SCALEY_TALUS:
        return "Talusian Scaley Hide";
    case HIDE_SCALEY_TATOOINE:
        return "Tatooinian Scaley Hide";
    case HIDE_SCALEY_YAVIN4:
        return "Yavinian Scaley Hide";
    case HIDE_WOOLY_CORELLIA:
        return "Corellian Wooly Hide";
    case HIDE_WOOLY_DANTOOINE:
        return "Dantooine Wooly Hide";
    case HIDE_WOOLY_DATHOMIR:
        return "Dathomirian Wooly Hide";
    case HIDE_WOOLY_ENDOR:
        return "Endorian Wooly Hide";
    case HIDE_WOOLY_LOK:
        return "Lokian Wooly Hide";
    case HIDE_WOOLY_NABOO:
        return "Nabooian Wooly Hide";
    case HIDE_WOOLY_RORI:
        return "Rori Wooly Hide";
    case HIDE_WOOLY_TALUS:
        return "Talusian Wooly Hide";
    case HIDE_WOOLY_TATOOINE:
        return "Tatooinian Wooly Hide";
    case HIDE_WOOLY_YAVIN4:
        return "Yavinian Wooly Hide";
    case IRON_AXIDITE:
        return "Axidite Iron";
    case IRON_BRONZIUM:
        return "Bronzium Iron";
    case IRON_COLAT:
        return "Colat Iron";
    case IRON_DOLOVITE:
        return "Dolovite Iron";
    case IRON_DOONIUM:
        return "Doonium Iron";
    case IRON_KAMMRIS:
        return "Kammris Iron";
    case IRON_PLUMBUM:
        return "Plumbum Iron";
    case IRON_POLONIUM:
        return "Polonium Iron";
    case MEAT_AVIAN_CORELLIA:
        return "Corellian Avian Meat";
    case MEAT_AVIAN_DANTOOINE:
        return "Dantooine Avian Meat";
    case MEAT_AVIAN_DATHOMIR:
        return "Dathomirian Avian Meat";
    case MEAT_AVIAN_ENDOR:
        return "Endorian Avian Meat";
    case MEAT_AVIAN_LOK:
        return "Lokian Avian Meat";
    case MEAT_AVIAN_NABOO:
        return "Nabooian Avian Meat";
    case MEAT_AVIAN_RORI:
        return "Rori Avian Meat";
    case MEAT_AVIAN_TALUS:
        return "Talusian Avian Meat";
    case MEAT_AVIAN_TATOOINE:
        return "Tatooinian Avian Meat";
    case MEAT_AVIAN_YAVIN4:
        return "Yavinian Avian Meat";
    case MEAT_CARNIVORE_CORELLIA:
        return "Corellian Carnivore Meat";
    case MEAT_CARNIVORE_DANTOOINE:
        return "Dantooine Carnivore Meat";
    case MEAT_CARNIVORE_DATHOMIR:
        return "Dathomirian Carnivore Meat";
    case MEAT_CARNIVORE_ENDOR:
        return "Endorian Carnivore Meat";
    case MEAT_CARNIVORE_LOK:
        return "Lokian Carnivore Meat";
    case MEAT_CARNIVORE_NABOO:
        return "Nabooian Carnivore Meat";
    case MEAT_CARNIVORE_RORI:
        return "Rori Carnivore Meat";
    case MEAT_CARNIVORE_TALUS:
        return "Talusian Carnivore Meat";
    case MEAT_CARNIVORE_TATOOINE:
        return "Tatooinian Carnivore Meat";
    case MEAT_CARNIVORE_YAVIN4:
        return "Yavinian Carnivore Meat";
    case MEAT_DOMESTICATED_CORELLIA:
        return "Corellian Domesticated Meat";
    case MEAT_DOMESTICATED_DANTOOINE:
        return "Dantooine Domesticated Meat";
    case MEAT_DOMESTICATED_DATHOMIR:
        return "Dathomirian Domesticated Meat";
    case MEAT_DOMESTICATED_ENDOR:
        return "Endorian Domesticated Meat";
    case MEAT_DOMESTICATED_LOK:
        return "Lokian Domesticated Meat";
    case MEAT_DOMESTICATED_NABOO:
        return "Nabooian Domesticated Meat";
    case MEAT_DOMESTICATED_RORI:
        return "Rori Domesticated Meat";
    case MEAT_DOMESTICATED_TALUS:
        return "Talusian Domesticated Meat";
    case MEAT_DOMESTICATED_TATOOINE:
        return "Tatooinian Domesticated Meat";
    case MEAT_DOMESTICATED_YAVIN4:
        return "Yavinian Domesticated Meat";
    case MEAT_EGG_CORELLIA:
        return "Corellian Egg";
    case MEAT_EGG_DANTOOINE:
        return "Dantooine Egg";
    case MEAT_EGG_DATHOMIR:
        return "Dathomirian Egg";
    case MEAT_EGG_ENDOR:
        return "Endorian Egg";
    case MEAT_EGG_LOK:
        return "Lokian Egg";
    case MEAT_EGG_NABOO:
        return "Nabooian Egg";
    case MEAT_EGG_RORI:
        return "Rori Egg";
    case MEAT_EGG_TALUS:
        return "Talusian Egg";
    case MEAT_EGG_TATOOINE:
        return "Tatooinian Egg";
    case MEAT_EGG_YAVIN4:
        return "Yavinian Egg";
    case MEAT_HERBIVORE_CORELLIA:
        return "Corellian Herbivore Meat";
    case MEAT_HERBIVORE_DANTOOINE:
        return "Dantooine Herbivore Meat";
    case MEAT_HERBIVORE_DATHOMIR:
        return "Dathomirian Herbivore Meat";
    case MEAT_HERBIVORE_ENDOR:
        return "Endorian Herbivore Meat";
    case MEAT_HERBIVORE_LOK:
        return "Lokian Herbivore Meat";
    case MEAT_HERBIVORE_NABOO:
        return "Nabooian Herbivore Meat";
    case MEAT_HERBIVORE_RORI:
        return "Rori Herbivore Meat";
    case MEAT_HERBIVORE_TALUS:
        return "Talusian Herbivore Meat";
    case MEAT_HERBIVORE_TATOOINE:
        return "Tatooinian Herbivore Meat";
    case MEAT_HERBIVORE_YAVIN4:
        return "Yavinian Herbivore Meat";
    case MEAT_INSECT_CORELLIA:
        return "Corellian Insect Meat";
    case MEAT_INSECT_DANTOOINE:
        return "Dantooine Insect Meat";
    case MEAT_INSECT_DATHOMIR:
        return "Dathomirian Insect Meat";
    case MEAT_INSECT_ENDOR:
        return "Endorian Insect Meat";
    case MEAT_INSECT_LOK:
        return "Lokian Insect Meat";
    case MEAT_INSECT_NABOO:
        return "Nabooian Insect Meat";
    case MEAT_INSECT_RORI:
        return "Rori Insect Meat";
    case MEAT_INSECT_TALUS:
        return "Talusian Insect Meat";
    case MEAT_INSECT_TATOOINE:
        return "Tatooinian Insect Meat";
    case MEAT_INSECT_YAVIN4:
        return "Yavinian Insect Meat";
    case MEAT_REPTILIAN_CORELLIA:
        return "Corellian Reptillian Meat";
    case MEAT_REPTILIAN_DANTOOINE:
        return "Dantooine Reptillian Meat";
    case MEAT_REPTILIAN_DATHOMIR:
        return "Dathomirian Reptillian Meat";
    case MEAT_REPTILIAN_ENDOR:
        return "Endorian Reptillian Meat";
    case MEAT_REPTILIAN_LOK:
        return "Lokian Reptillian Meat";
    case MEAT_REPTILIAN_NABOO:
        return "Nabooian Reptillian Meat";
    case MEAT_REPTILIAN_RORI:
        return "Rori Reptillian Meat";
    case MEAT_REPTILIAN_TALUS:
        return "Talusian Reptillian Meat";
    case MEAT_REPTILIAN_TATOOINE:
        return "Tatooinian Reptillian Meat";
    case MEAT_REPTILIAN_YAVIN4:
        return "Yavinian Reptillian Meat";
    case MEAT_WILD_CORELLIA:
        return "Corellian Wild Meat";
    case MEAT_WILD_DANTOOINE:
        return "Dantooine Wild Meat";
    case MEAT_WILD_DATHOMIR:
        return "Dathomirian Wild Meat";
    case MEAT_WILD_ENDOR:
        return "Endorian Wild Meat";
    case MEAT_WILD_LOK:
        return "Lokian Wild Meat";
    case MEAT_WILD_NABOO:
        return "Nabooian Wild Meat";
    case MEAT_WILD_RORI:
        return "Rori Wild Meat";
    case MEAT_WILD_TALUS:
        return "Talusian Wild Meat";
    case MEAT_WILD_TATOOINE:
        return "Tatooinian Wild Meat";
    case MEAT_WILD_YAVIN4:
        return "Yavinian Wild Meat";
    case METAL_FERROUS_UNKNOWN:
        return "Unknown Ferrous Metal";
    case METAL_NONFERROUS_UNKNOWN:
        return "Unknown Non-Ferrous Metal";
    case MILK_DOMESTICATED_CORELLIA:
        return "Corellian Domesticated Milk";
    case MILK_DOMESTICATED_DANTOOINE:
        return "Dantooine Domesticated Milk";
    case MILK_DOMESTICATED_DATHOMIR:
        return "Dathomirian  Domesticated Milk";
    case MILK_DOMESTICATED_ENDOR:
        return "Endorian Domesticated Milk";
    case MILK_DOMESTICATED_LOK:
        return "Lokian Domesticated Milk";
    case MILK_DOMESTICATED_NABOO:
        return "Nabooian Domesticated Milk";
    case MILK_DOMESTICATED_RORI:
        return "Rori Domesticated Milk";
    case MILK_DOMESTICATED_TALUS:
        return "Talusian Domesticated Milk";
    case MILK_DOMESTICATED_TATOOINE:
        return "Tatooinian Domesticated Milk";
    case MILK_DOMESTICATED_YAVIN4:
        return "Yavinian Domesticated Milk";
    case MILK_WILD_CORELLIA:
        return "Corellian Wild Milk";
    case MILK_WILD_DANTOOINE:
        return "Dantooine Wild Milk";
    case MILK_WILD_DATHOMIR:
        return "Dathomirian Wild Milk";
    case MILK_WILD_ENDOR:
        return "Endorian Wild Milk";
    case MILK_WILD_LOK:
        return "Lokian Wild Milk";
    case MILK_WILD_NABOO:
        return "Nabooian Wild Milk";
    case MILK_WILD_RORI:
        return "Rori Wild Milk";
    case MILK_WILD_TALUS:
        return "Talusian Wild Milk";
    case MILK_WILD_TATOOINE:
        return "Tatooinian Wild Milk";
    case MILK_WILD_YAVIN4:
        return "Yavin IV Wild Milk";
    case OATS_DOMESTICATED_CORELLIA:
        return "Corellian Domesticated Oats";
    case OATS_DOMESTICATED_DANTOOINE:
        return "Dantooine Domesticated Oats";
    case OATS_DOMESTICATED_DATHOMIR:
        return "Dathomirian Domesticated Oats";
    case OATS_DOMESTICATED_ENDOR:
        return "Endorian Domesticated Oats";
    case OATS_DOMESTICATED_LOK:
        return "Lokian Domesticated Oats";
    case OATS_DOMESTICATED_NABOO:
        return "Nabooian Domesticated Oats";
    case OATS_DOMESTICATED_RORI:
        return "Rori Domesticated Oats";
    case OATS_DOMESTICATED_TALUS:
        return "Talusian Domesticated Oats";
    case OATS_DOMESTICATED_TATOOINE:
        return "Tatooinian Domesticated Oats";
    case OATS_DOMESTICATED_YAVIN4:
        return "Yavinian Domesticated Oats";
    case OATS_WILD_CORELLIA:
        return "Corellian Wild Oats";
    case OATS_WILD_DANTOOINE:
        return "Dantooine Wild Oats";
    case OATS_WILD_DATHOMIR:
        return "Dathomirian Wild Oats";
    case OATS_WILD_ENDOR:
        return "Endorian Wild Oats";
    case OATS_WILD_LOK:
        return "Lokian Wild Oats";
    case OATS_WILD_NABOO:
        return "Nabooian Wild Oats";
    case OATS_WILD_RORI:
        return "Rori Wild Oats";
    case OATS_WILD_TALUS:
        return "Talusian Wild Oats";
    case OATS_WILD_TATOOINE:
        return "Tatooinian Wild Oats";
    case OATS_WILD_YAVIN4:
        return "Yavinian Wild Oats";
    case ORE_CARBONATE_ALANTIUM:
        return "Alantium Carbonate Ore";
    case ORE_CARBONATE_BARTHIERIUM:
        return "Barthierium Carbonate Ore";
    case ORE_CARBONATE_CHROMITE:
        return "Chromite Carbonate Ore";
    case ORE_CARBONATE_FRASIUM:
        return "Frasium Carbonate Ore";
    case ORE_CARBONATE_LOMMITE:
        return "Lommite Carbonate Ore";
    case ORE_CARBONATE_OSTRINE:
        return "Ostrine Carbonate Ore";
    case ORE_CARBONATE_VARIUM:
        return "Varium Carbonate Ore";
    case ORE_CARBONATE_ZINSIAM:
        return "Zinsiam Carbonate Ore";
    case ORE_EXTRUSIVE_BENE:
        return "Bene Extrusive Ore";
    case ORE_EXTRUSIVE_CHRONAMITE:
        return "Chronamite Extrusive Ore";
    case ORE_EXTRUSIVE_ILIMIUM:
        return "Ilimium Extrusive Ore";
    case ORE_EXTRUSIVE_KALONTERIUM:
        return "Kalonterium Extrusive Ore";
    case ORE_EXTRUSIVE_KESCHEL:
        return "Keschel Extrusive Ore";
    case ORE_EXTRUSIVE_LIDIUM:
        return "Lidium Extrusive Ore";
    case ORE_EXTRUSIVE_MARANIUM:
        return "Maranium Extrusive Ore";
    case ORE_EXTRUSIVE_PHOLOKITE:
        return "Pholokite Extrusive Ore";
    case ORE_EXTRUSIVE_QUADRENIUM:
        return "Quadrenium Extrusive Ore";
    case ORE_EXTRUSIVE_VINTRIUM:
        return "Vintrium Extrusive Ore";
    case ORE_IGNEOUS_UNKNOWN:
        return "Unknown Igneous Ore";
    case ORE_INTRUSIVE_BERUBIUM:
        return "Berubium Intrusive Ore";
    case ORE_INTRUSIVE_CHANLON:
        return "Chanlon Intrusive Ore";
    case ORE_INTRUSIVE_CORINTIUM:
        return "Corintium Intrusive Ore";
    case ORE_INTRUSIVE_DERILLIUM:
        return "Derillium Intrusive Ore";
    case ORE_INTRUSIVE_DYLINIUM:
        return "Dylinium Intrusive Ore";
    case ORE_INTRUSIVE_HOLLINIUM:
        return "Hollinium Intrusive Ore";
    case ORE_INTRUSIVE_IONITE:
        return "Ionite Intrusive Ore";
    case ORE_INTRUSIVE_KATRIUM:
        return "Katrium Intrusive Ore";
    case ORE_INTRUSIVE_ORIDIUM:
        return "Oridium Intrusive Ore";
    case ORE_SEDIMENTARY_UNKNOWN:
        return "Unknown Sedimentary Ore";
    case ORE_SILICLASTIC_ARDANIUM:
        return "Ardanium Siliclastic Ore";
    case ORE_SILICLASTIC_CORTOSIS:
        return "Cortosis Siliclastic Ore";
    case ORE_SILICLASTIC_CRISM:
        return "Crism Siliclastic Ore";
    case ORE_SILICLASTIC_FERMIONIC:
        return "Fermionic Siliclastic Ore";
    case ORE_SILICLASTIC_MALAB:
        return "Malab Siliclastic Ore";
    case ORE_SILICLASTIC_ROBINDUN:
        return "Robindun Siliclastic Ore";
    case ORE_SILICLASTIC_TERTIAN:
        return "Tertian Siliclastic Ore";
    case PETROCHEM_FUEL_LIQUID_TYPE1:
        return "Class 1 Liquid Petro Fuel";
    case PETROCHEM_FUEL_LIQUID_TYPE2:
        return "Class 2 Liquid Petro Fuel";
    case PETROCHEM_FUEL_LIQUID_TYPE3:
        return "Class 3 Liquid Petro Fuel";
    case PETROCHEM_FUEL_LIQUID_TYPE4:
        return "Class 4 Liquid Petro Fuel";
    case PETROCHEM_FUEL_LIQUID_TYPE5:
        return "Class 5 Liquid Petro Fuel";
    case PETROCHEM_FUEL_LIQUID_TYPE6:
        return "Class 6 Liquid Petro Fuel";
    case PETROCHEM_FUEL_LIQUID_TYPE7:
        return "Class 7 Liquid Petro Fuel";
    case PETROCHEM_FUEL_LIQUID_UNKNOWN:
        return "Unknown Liquid Petrochem Fuel";
    case PETROCHEM_FUEL_SOLID_TYPE1:
        return "Class 1 Solid Petro Fuel";
    case PETROCHEM_FUEL_SOLID_TYPE2:
        return "Class 2 Solid Petro Fuel";
    case PETROCHEM_FUEL_SOLID_TYPE3:
        return "Class 3 Solid Petro Fuel";
    case PETROCHEM_FUEL_SOLID_TYPE4:
        return "Class 4 Solid Petro Fuel";
    case PETROCHEM_FUEL_SOLID_TYPE5:
        return "Class 5 Solid Petro Fuel";
    case PETROCHEM_FUEL_SOLID_TYPE6:
        return "Class 6 Solid Petro Fuel";
    case PETROCHEM_FUEL_SOLID_TYPE7:
        return "Class 7 Solid Petro Fuel";
    case PETROCHEM_FUEL_SOLID_UNKNOWN:
        return "Unknown Solid Petrochem Fuel";
    case PETROCHEM_INERT_LUBRICATING_OIL:
        return "Lubricating Oil";
    case PETROCHEM_INERT_POLYMER:
        return "Polymer";
    case RADIOACTIVE_POLYMETRIC:
        return "High Grade Polymetric Radioactive";
    case RADIOACTIVE_TYPE1:
        return "Class 1 Radioactive";
    case RADIOACTIVE_TYPE2:
        return "Class 2 Radioactive";
    case RADIOACTIVE_TYPE3:
        return "Class 3 Radioactive";
    case RADIOACTIVE_TYPE4:
        return "Class 4 Radioactive";
    case RADIOACTIVE_TYPE5:
        return "Class 5 Radioactive";
    case RADIOACTIVE_TYPE6:
        return "Class 6 Radioactive";
    case RADIOACTIVE_TYPE7:
        return "Class 7 Radioactive";
    case RADIOACTIVE_UNKNOWN:
        return "Unknown Radioactive";
    case RICE_DOMESTICATED_CORELLIA:
        return "Corellian Domesticated Rice";
    case RICE_DOMESTICATED_DANTOOINE:
        return "Dantooine Domesticated Rice";
    case RICE_DOMESTICATED_DATHOMIR:
        return "Dathomirian Domesticated Rice";
    case RICE_DOMESTICATED_ENDOR:
        return "Endorian Domesticated Rice";
    case RICE_DOMESTICATED_LOK:
        return "Lokian Domesticated Rice";
    case RICE_DOMESTICATED_NABOO:
        return "Nabooian Domesticated Rice";
    case RICE_DOMESTICATED_RORI:
        return "Rori Domesticated Rice";
    case RICE_DOMESTICATED_TALUS:
        return "Talusian Domesticated Rice";
    case RICE_DOMESTICATED_TATOOINE:
        return "Tatooinian Domesticated Rice";
    case RICE_DOMESTICATED_YAVIN4:
        return "Yavinian Domesticated Rice";
    case RICE_WILD_CORELLIA:
        return "Corellian Wild Rice";
    case RICE_WILD_DANTOOINE:
        return "Dantooine Wild Rice";
    case RICE_WILD_DATHOMIR:
        return "Dathomirian Wild Rice";
    case RICE_WILD_ENDOR:
        return "Endorian Wild Rice";
    case RICE_WILD_LOK:
        return "Lokian Wild Rice";
    case RICE_WILD_NABOO:
        return "Nabooian Wild Rice";
    case RICE_WILD_RORI:
        return "Rori Wild Rice";
    case RICE_WILD_TALUS:
        return "Talusian Wild Rice";
    case RICE_WILD_TATOOINE:
        return "Tatooinian Wild Rice";
    case RICE_WILD_YAVIN4:
        return "Yavinian Wild Rice";
    case SEAFOOD_CRUSTACEAN_CORELLIA:
        return "Corellia Crustacean Meat";
    case SEAFOOD_CRUSTACEAN_DANTOOINE:
        return "Dantooine Crustacean Meat";
    case SEAFOOD_CRUSTACEAN_DATHOMIR:
        return "Dathomirian Crustacean Meat";
    case SEAFOOD_CRUSTACEAN_ENDOR:
        return "Endorian Crustacean Meat";
    case SEAFOOD_CRUSTACEAN_LOK:
        return "Lokian Crustacean Meat";
    case SEAFOOD_CRUSTACEAN_NABOO:
        return "Nabooian Crustacean Meat";
    case SEAFOOD_CRUSTACEAN_RORI:
        return "Rori Crustacean Meat";
    case SEAFOOD_CRUSTACEAN_TALUS:
        return "Talusian Crustacean Meat";
    case SEAFOOD_CRUSTACEAN_TATOOINE:
        return "Tatooinian Crustacean Meat";
    case SEAFOOD_CRUSTACEAN_YAVIN4:
        return "Yavinian Crustacean Meat";
    case SEAFOOD_FISH_CORELLIA:
        return "Corellian Fish Meat";
    case SEAFOOD_FISH_DANTOOINE:
        return "Dantooine Fish Meat";
    case SEAFOOD_FISH_DATHOMIR:
        return "Dathomirian Fish Meat";
    case SEAFOOD_FISH_ENDOR:
        return "Endorian Fish Meat";
    case SEAFOOD_FISH_LOK:
        return "Lokian Fish Meat";
    case SEAFOOD_FISH_NABOO:
        return "Nabooian Fish Meat";
    case SEAFOOD_FISH_RORI:
        return "Rori Fish Meat";
    case SEAFOOD_FISH_TALUS:
        return "Talusian Fish Meat";
    case SEAFOOD_FISH_TATOOINE:
        return "Tatooinian Fish Meat";
    case SEAFOOD_FISH_YAVIN4:
        return "Yavinian Fish Meat";
    case SEAFOOD_MOLLUSK_CORELLIA:
        return "Corellia Mollusk Meat";
    case SEAFOOD_MOLLUSK_DANTOOINE:
        return "Dantooine Mollusk Meat";
    case SEAFOOD_MOLLUSK_DATHOMIR:
        return "Dathomirian Mollusk Meat";
    case SEAFOOD_MOLLUSK_ENDOR:
        return "Endorian Mollusk Meat";
    case SEAFOOD_MOLLUSK_LOK:
        return "Lokian Mollusk Meat";
    case SEAFOOD_MOLLUSK_NABOO:
        return "Nabooian Mollusk Meat";
    case SEAFOOD_MOLLUSK_RORI:
        return "Rori Mollusk Meat";
    case SEAFOOD_MOLLUSK_TALUS:
        return "Talusian Mollusk Meat";
    case SEAFOOD_MOLLUSK_TATOOINE:
        return "Tatooinian Mollusk Meat";
    case SEAFOOD_MOLLUSK_YAVIN4:
        return "Yavinian Mollusk Meat";
    case SOFTWOOD_CONIFER_CORELLIA:
        return "Corellian Conifer Wood";
    case SOFTWOOD_CONIFER_DANTOOINE:
        return "Dantooine Conifer Wood";
    case SOFTWOOD_CONIFER_DATHOMIR:
        return "Dathomirian Conifer Wood";
    case SOFTWOOD_CONIFER_ENDOR:
        return "Endorian Conifer Wood";
    case SOFTWOOD_CONIFER_LOK:
        return "Lokian Conifer Wood";
    case SOFTWOOD_CONIFER_NABOO:
        return "Nabooian Conifer Wood";
    case SOFTWOOD_CONIFER_RORI:
        return "Rori Conifer Wood";
    case SOFTWOOD_CONIFER_TALUS:
        return "Talusian Conifer Wood";
    case SOFTWOOD_CONIFER_TATOOINE:
        return "Tatooinian Conifer Wood";
    case SOFTWOOD_CONIFER_YAVIN4:
        return "Yavinian Conifer Wood";
    case SOFTWOOD_EVERGREEN_CORELLIA:
        return "Corellia Evergreen Wood";
    case SOFTWOOD_EVERGREEN_DANTOOINE:
        return "Dantooine Evergreen Wood";
    case SOFTWOOD_EVERGREEN_DATHOMIR:
        return "Dathomirian Evergreen Wood";
    case SOFTWOOD_EVERGREEN_ENDOR:
        return "Endorian Evergreen Wood";
    case SOFTWOOD_EVERGREEN_LOK:
        return "Lokian Evergreen Wood";
    case SOFTWOOD_EVERGREEN_NABOO:
        return "Nabooian Evergreen Wood";
    case SOFTWOOD_EVERGREEN_RORI:
        return "Rori Evergreen Wood";
    case SOFTWOOD_EVERGREEN_TALUS:
        return "Talusian Evergreen Wood";
    case SOFTWOOD_EVERGREEN_TATOOINE:
        return "Tatooinian Evergreen Wood";
    case SOFTWOOD_EVERGREEN_YAVIN4:
        return "Yavinian Evergreen Wood";
    case STEEL_ARVESHIAN:
        return "Hardened Arveshium Steel";
    case STEEL_BICORBANTIUM:
        return "Crystallized Bicorbantium Steel";
    case STEEL_CARBONITE:
        return "Carbonite Steel";
    case STEEL_CUBIRIAN:
        return "Cubirian Steel";
    case STEEL_DITANIUM:
        return "Ditanium Steel";
    case STEEL_DURALLOY:
        return "Duralloy Steel";
    case STEEL_DURANIUM:
        return "Duranium Steel";
    case STEEL_KIIRIUM:
        return "Kiirium Steel";
    case STEEL_NEUTRONIUM:
        return "Neutronium Steel";
    case STEEL_QUADRANIUM:
        return "Quadranium Steel";
    case STEEL_RHODIUM:
        return "Rhodium Steel";
    case STEEL_THORANIUM:
        return "Thoranium Steel";
    case VEGETABLE_BEANS_CORELLIA:
        return "Corellian Vegetable Beans";
    case VEGETABLE_BEANS_DANTOOINE:
        return "Dantooine Vegetable Beans";
    case VEGETABLE_BEANS_DATHOMIR:
        return "Dathomirian Vegetable Beans";
    case VEGETABLE_BEANS_ENDOR:
        return "Endorian Vegetable Beans";
    case VEGETABLE_BEANS_LOK:
        return "Lokian Vegetable Beans";
    case VEGETABLE_BEANS_NABOO:
        return "Nabooian Vegetable Beans";
    case VEGETABLE_BEANS_RORI:
        return "Rori Vegetable Beans";
    case VEGETABLE_BEANS_TALUS:
        return "Talusian Vegetable Beans";
    case VEGETABLE_BEANS_TATOOINE:
        return "Tatooinian Vegetable Beans";
    case VEGETABLE_BEANS_YAVIN4:
        return "Yavinian Vegetable Beans";
    case VEGETABLE_FUNGI_CORELLIA:
        return "Corellian Vegetable Fungus";
    case VEGETABLE_FUNGI_DANTOOINE:
        return "Dantooine Vegetable Fungus";
    case VEGETABLE_FUNGI_DATHOMIR:
        return "Dathomirian Vegetable Fungus";
    case VEGETABLE_FUNGI_ENDOR:
        return "Endorian Vegetable Fungus";
    case VEGETABLE_FUNGI_LOK:
        return "Lokian Vegetable Fungus";
    case VEGETABLE_FUNGI_NABOO:
        return "Nabooian Vegetable Fungus";
    case VEGETABLE_FUNGI_RORI:
        return "Rori Vegetable Fungus";
    case VEGETABLE_FUNGI_TALUS:
        return "Talusian Vegetable Fungus";
    case VEGETABLE_FUNGI_TATOOINE:
        return "Tatooinian Vegetable Fungus";
    case VEGETABLE_FUNGI_YAVIN4:
        return "Yavinian Vegetable Fungus";
    case VEGETABLE_GREENS_CORELLIA:
        return "Corellian Vegetable Greens";
    case VEGETABLE_GREENS_DANTOOINE:
        return "Dantooine Vegetable Greens";
    case VEGETABLE_GREENS_DATHOMIR:
        return "Dathomirian Vegetable Greens";
    case VEGETABLE_GREENS_ENDOR:
        return "Endorian Vegetable Greens";
    case VEGETABLE_GREENS_LOK:
        return "Lokian Vegetable Greens";
    case VEGETABLE_GREENS_NABOO:
        return "Nabooian Vegetable Greens";
    case VEGETABLE_GREENS_RORI:
        return "Rori Vegetable Greens";
    case VEGETABLE_GREENS_TALUS:
        return "Talusian Vegetable Greens";
    case VEGETABLE_GREENS_TATOOINE:
        return "Tatooinian Vegetable Greens";
    case VEGETABLE_GREENS_YAVIN4:
        return "Yavinian Vegetable Greens";
    case VEGETABLE_TUBERS_CORELLIA:
        return "Corellian Vegetable Tubers";
    case VEGETABLE_TUBERS_DANTOOINE:
        return "Dantooine Vegetable Tubers";
    case VEGETABLE_TUBERS_DATHOMIR:
        return "Dathomirian Vegetable Tubers";
    case VEGETABLE_TUBERS_ENDOR:
        return "Endorian Vegetable Tubers";
    case VEGETABLE_TUBERS_LOK:
        return "Lokian Vegetable Tubers";
    case VEGETABLE_TUBERS_NABOO:
        return "Nabooian Vegetable Tubers";
    case VEGETABLE_TUBERS_RORI:
        return "Rori Vegetable Tubers";
    case VEGETABLE_TUBERS_TALUS:
        return "Talusian Vegetable Tubers";
    case VEGETABLE_TUBERS_TATOOINE:
        return "Tatooinian Vegetable Tubers";
    case VEGETABLE_TUBERS_YAVIN4:
        return "Yavinian Vegetable Tubers";
    case WATER_VAPOR_CORELLIA:
        return "Corellian Water Vapor";
    case WATER_VAPOR_DANTOOINE:
        return "Dantooine Water Vapor";
    case WATER_VAPOR_DATHOMIR:
        return "Dathomir Water Vapor";
    case WATER_VAPOR_ENDOR:
        return "Endorian Water Vapor";
    case WATER_VAPOR_LOK:
        return "Lokian Water Vapor";
    case WATER_VAPOR_NABOO:
        return "Nabooian Water Vapor";
    case WATER_VAPOR_RORI:
        return "Rori Water Vapor";
    case WATER_VAPOR_TALUS:
        return "Talusian Water Vapor";
    case WATER_VAPOR_TATOOINE:
        return "Tatooinian Water Vapor";
    case WATER_VAPOR_YAVIN4:
        return "Yavinian Water Vapor";
    case WHEAT_DOMESTICATED_CORELLIA:
        return "Corellian Domesticated Wheat";
    case WHEAT_DOMESTICATED_DANTOOINE:
        return "Dantooine Domesticated Wheat";
    case WHEAT_DOMESTICATED_DATHOMIR:
        return "Dathomirian Domesticated Wheat";
    case WHEAT_DOMESTICATED_ENDOR:
        return "Endorian Domesticated Wheat";
    case WHEAT_DOMESTICATED_LOK:
        return "Lokian Domesticated Wheat";
    case WHEAT_DOMESTICATED_NABOO:
        return "Nabooian Domesticated Wheat";
    case WHEAT_DOMESTICATED_RORI:
        return "Rori Domesticated Wheat";
    case WHEAT_DOMESTICATED_TALUS:
        return "Talusian Domesticated Wheat";
    case WHEAT_DOMESTICATED_TATOOINE:
        return "Tatooinian Domesticated Wheat";
    case WHEAT_DOMESTICATED_YAVIN4:
        return "Yavinian Domesticated Wheat";
    case WHEAT_WILD_CORELLIA:
        return "Corellian Wild Wheat";
    case WHEAT_WILD_DANTOOINE:
        return "Dantooine Wild Wheat";
    case WHEAT_WILD_DATHOMIR:
        return "Dathomir Wild Wheat";
    case WHEAT_WILD_ENDOR:
        return "Endorian Wild Wheat";
    case WHEAT_WILD_LOK:
        return "Lokian Wild Wheat";
    case WHEAT_WILD_NABOO:
        return "Nabooian Wild Wheat";
    case WHEAT_WILD_RORI:
        return "Rori Wild Wheat";
    case WHEAT_WILD_TALUS:
        return "Talusian Wild Wheat";
    case WHEAT_WILD_TATOOINE:
        return "Tatooinian Wild Wheat";
    case WHEAT_WILD_YAVIN4:
        return "Yavinian Wild Wheat";
    case WOOD_DECIDUOUS_CORELLIA:
        return "Corellian Deciduous Wood";
    case WOOD_DECIDUOUS_DANTOOINE:
        return "Dantooine Deciduous Wood";
    case WOOD_DECIDUOUS_DATHOMIR:
        return "Dathomirian Deciduous Wood";
    case WOOD_DECIDUOUS_ENDOR:
        return "Endorian Deciduous Wood";
    case WOOD_DECIDUOUS_LOK:
        return "Lokian Deciduous Wood";
    case WOOD_DECIDUOUS_NABOO:
        return "Nabooian Deciduous Wood";
    case WOOD_DECIDUOUS_RORI:
        return "Rori Deciduous Wood";
    case WOOD_DECIDUOUS_TALUS:
        return "Talusian Deciduous Wood";
    case WOOD_DECIDUOUS_TATOOINE:
        return "Tatooinian Deciduous Wood";
    case WOOD_DECIDUOUS_YAVIN4:
        return "Yavinian Deciduous Wood";
    default:
        return "bad SWG_resource_types enum";
    }
}

std::string SWGAttributesString(SWG_attributes e)
{
    switch (e)
    {
    case CR:
        return "CR";
    case CD:
        return "CD";
    case DR:
        return "DR";
    case FL:
        return "FL";
    case HR:
        return "HR";
    case MA:
        return "MA";
    case OQ:
        return "OQ";
    case PE:
        return "PE";
    case SR:
        return "SR";
    case UT:
        return "UT";
    default:
        return "bad SWG_attributes enum";
    }
}

std::unordered_map<std::string, SWG_resource_classes> getReverseOfClassesString()
{
    std::unordered_map<std::string, SWG_resource_classes> temp;
    temp.reserve(SWG_resource_classes_count);

    for (size_t i = 0; i < SWG_resource_classes_count; i++)
    {
        SWG_resource_classes m = static_cast<SWG_resource_classes>(i); //so we only have to do one cast
        temp[SWGResourceClassString(m)] = m; //get string and put into table
    }

    return temp;
}

std::unordered_map<std::string, SWG_resource_classes> getReverseOfClassesPrettyString()
{
    std::unordered_map<std::string, SWG_resource_classes> temp;
    temp.reserve(SWG_resource_classes_count);

    for (size_t i = 0; i < SWG_resource_classes_count; i++)
    {
        SWG_resource_classes m = static_cast<SWG_resource_classes>(i); //so we only have to do one cast
        temp[SWGResourceClassStringPretty(m)] = m; //get string and put into table
    }

    return temp;
}

std::unordered_map<std::string, SWG_resource_types> getReverseOfTypesString()
{
    std::unordered_map<std::string, SWG_resource_types> temp;
    temp.reserve(SWG_resource_types_count);

    for (size_t i = 0; i < SWG_resource_types_count; i++)
    {
        SWG_resource_types m = static_cast<SWG_resource_types>(i); //so we only have to do one cast
        temp[SWGResourceTypeString(m)] = m; //get string and put into table
    }

    return temp;
}

std::unordered_map<std::string, SWG_resource_types> getReverseOfTypesPrettyString()
{
    std::unordered_map<std::string, SWG_resource_types> temp;
    temp.reserve(SWG_resource_types_count);

    for (size_t i = 0; i < SWG_resource_types_count; i++)
    {
        SWG_resource_types m = static_cast<SWG_resource_types>(i); //so we only have to do one cast
        temp[SWGResourceTypeStringPretty(m)] = m; //get string and put into table
    }

    return temp;
}


