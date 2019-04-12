#pragma once

//std lib includes
#include <string>
#include <unordered_map>

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

/*
Description: Constants such as classes, types, their string and enums and so on
*/

enum SWG_attributes
{
    //CR CD DR FL HR MA OQ PE SR UT are the abbreviations in order
    CR,
    CD,
    DR,
    FL,
    HR,
    MA,
    OQ,
    PE,
    SR,
    UT
};

//different classifications of the resources. forms a tree
enum SWG_resource_classes
{
    ALUMINUM,
    BONE,
    BONE_AVIAN,
    BONE_HORN,
    CEREAL,
    CHEMICAL,
    COPPER,
    CORN,
    CORN_DOMESTICATED,
    CORN_WILD,
    CREATURE_FOOD,
    CREATURE_RESOURCES,
    CREATURE_STRUCTURAL,
    ENERGY,
    ENERGY_RENEWABLE,
    ENERGY_RENEWABLE_SITE_LIMITED,
    ENERGY_RENEWABLE_UNLIMITED,
    ENERGY_RENEWABLE_UNLIMITED_SOLAR,
    ENERGY_RENEWABLE_UNLIMITED_WIND,
    FIBERPLAST,
    FLORA_FOOD,
    FLORA_RESOURCES,
    FLORA_STRUCTURAL,
    FRUIT,
    FRUIT_BERRIES,
    FRUIT_FLOWERS,
    FRUIT_FRUITS,
    FUEL_PETROCHEM_LIQUID,
    FUEL_PETROCHEM_LIQUID_KNOWN,
    FUEL_PETROCHEM_SOLID,
    FUEL_PETROCHEM_SOLID_KNOWN,
    GAS,
    GAS_INERT,
    GAS_INERT_KNOWN,
    GAS_REACTIVE,
    GAS_REACTIVE_KNOWN,
    GEMSTONE,
    GEMSTONE_ARMOPHOUS,
    GEMSTONE_CRYSTALLINE,
    HIDE,
    HIDE_BRISTLEY,
    HIDE_LEATHERY,
    HIDE_SCALEY,
    HIDE_WOOLY,
    INORGANIC,
    IRON,
    MEAT,
    MEAT_AVIAN,
    MEAT_CARNIVORE,
    MEAT_DOMESTICATED,
    MEAT_EGG,
    MEAT_HERBIVORE,
    MEAT_INSECT,
    MEAT_REPTILLIAN,
    MEAT_WILD,
    METAL,
    METAL_FERROUS,
    METAL_NONFERROUS,
    MILK,
    MILK_DOMESTICATED,
    MILK_WILD,
    MINERAL,
    OATS,
    OATS_DOMESTICATED,
    OATS_WILD,
    ORE,
    ORE_CARBONATE,
    ORE_EXTRUSIVE,
    ORE_IGNEOUS,
    ORE_INTRUSIVE,
    ORE_SEDIMENTARY,
    ORE_SILICLASTIC,
    ORGANIC,
    PETROCHEM_INERT,
    RADIOACTIVE,
    RADIOACTIVE_KNOWN,
    RICE,
    RICE_DOMESTICATED,
    RICE_WILD,
    SEAFOOD,
    SEAFOOD_CRUSTACEAN,
    SEAFOOD_FISH,
    SEAFOOD_MOLLUSK,
    SEEDS,
    SOFTWOOD,
    SOFTWOOD_EVERGREEN,
    STEEL,
    VEGETABLE,
    VEGETABLE_BEANS,
    VEGETABLE_FUNGI,
    VEGETABLE_GREENS,
    VEGETABLE_TUBERS,
    WATER,
    WHEAT,
    WHEAT_DOMESTICATED,
    WHEAT_WILD,
    WOOD,
    WOOD_DECIDUOUS,

    //add nothing below this one
    SWG_resource_classes_count
};

//things the resource actually are
enum SWG_resource_types
{
    ALUMINUM_AGRINIUM,
    ALUMINUM_CHROMIUM,
    ALUMINUM_DURALUMIN,
    ALUMINUM_LINKSTEEL,
    ALUMINUM_PEROVSKITIC,
    ALUMINUM_PHRIK,
    ALUMINUM_TITANIUM,

    ARMOPHOUS_BALTARAN,
    ARMOPHOUS_BARADIUM,
    ARMOPHOUS_BOSPRIDIUM,
    ARMOPHOUS_PLEXITE,
    ARMOPHOUS_REGVIS,
    ARMOPHOUS_RUDIC,
    ARMOPHOUS_RYLL,
    ARMOPHOUS_SEDRELLIUM,
    ARMOPHOUS_STYGIUM,
    ARMOPHOUS_VENDUSII,

    BONE_AVIAN_CORELLIA,
    BONE_AVIAN_DANTOOINE,
    BONE_AVIAN_DATHOMIR,
    BONE_AVIAN_ENDOR,
    BONE_AVIAN_LOK,
    BONE_AVIAN_NABOO,
    BONE_AVIAN_RORI,
    BONE_AVIAN_TALUS,
    BONE_AVIAN_TATOOINE,
    BONE_AVIAN_YAVIN4,

    BONE_HORN_CORELLIA,
    BONE_HORN_DANTOOINE,
    BONE_HORN_DATHOMIR,
    BONE_HORN_ENDOR,
    BONE_HORN_LOK,
    BONE_HORN_NABOO,
    BONE_HORN_RORI,
    BONE_HORN_TALUS,
    BONE_HORN_TATOOINE,
    BONE_HORN_YAVIN4,

    BONE_MAMMAL_CORELLIA,
    BONE_MAMMAL_DANTOOINE,
    BONE_MAMMAL_DATHOMIR,
    BONE_MAMMAL_ENDOR,
    BONE_MAMMAL_LOK,
    BONE_MAMMAL_NABOO,
    BONE_MAMMAL_RORI,
    BONE_MAMMAL_TALUS,
    BONE_MAMMAL_TATOOINE,
    BONE_MAMMAL_YAVIN4,

    COPPER_BEYRLLIUS,
    COPPER_BOROCARBITIC,
    COPPER_CODOAN,
    COPPER_DESH,
    COPPER_DIATIUM,
    COPPER_KELSH,
    COPPER_MYTHRA,
    COPPER_PLATINITE,
    COPPER_POLYSTEEL,
    COPPER_THALLIUM,

    CORN_DOMESTICATED_CORELLIA,
    CORN_DOMESTICATED_DANTOOINE,
    CORN_DOMESTICATED_DATHOMIR,
    CORN_DOMESTICATED_ENDOR,
    CORN_DOMESTICATED_LOK,
    CORN_DOMESTICATED_NABOO,
    CORN_DOMESTICATED_RORI,
    CORN_DOMESTICATED_TALUS,
    CORN_DOMESTICATED_TATOOINE,
    CORN_DOMESTICATED_YAVIN4,

    CORN_WILD_CORELLIA,
    CORN_WILD_DANTOOINE,
    CORN_WILD_DATHOMIR,
    CORN_WILD_ENDOR,
    CORN_WILD_LOK,
    CORN_WILD_NABOO,
    CORN_WILD_RORI,
    CORN_WILD_TALUS,
    CORN_WILD_TATOOINE,
    CORN_WILD_YAVIN4,

    CRYSTALLINE_BYROTHSIS,
    CRYSTALLINE_GALLINORIAN,
    CRYSTALLINE_GREEN_DIAMOND,
    CRYSTALLINE_KEROL_FIREGEM,
    CRYSTALLINE_LABOI_MINERAL_CRYSTAL,
    CRYSTALLINE_SEAFAH_JEWEL,
    CRYSTALLINE_SORMAHIL_FIREGEM,
    CRYSTALLINE_VERTEX,

    ENERGY_RENEWABLE_SITE_LIMITED_GEOTHERMAL_CORELLIA,
    ENERGY_RENEWABLE_SITE_LIMITED_GEOTHERMAL_DANTOOINE,
    ENERGY_RENEWABLE_SITE_LIMITED_GEOTHERMAL_DATHOMIR,
    ENERGY_RENEWABLE_SITE_LIMITED_GEOTHERMAL_ENDOR,
    ENERGY_RENEWABLE_SITE_LIMITED_GEOTHERMAL_LOK,
    ENERGY_RENEWABLE_SITE_LIMITED_GEOTHERMAL_NABOO,
    ENERGY_RENEWABLE_SITE_LIMITED_GEOTHERMAL_RORI,
    ENERGY_RENEWABLE_SITE_LIMITED_GEOTHERMAL_TALUS,
    ENERGY_RENEWABLE_SITE_LIMITED_GEOTHERMAL_TATOOINE,
    ENERGY_RENEWABLE_SITE_LIMITED_GEOTHERMAL_YAVIN4,

    ENERGY_RENEWABLE_SITE_LIMITED_HYDRON3_CORELLIA,
    ENERGY_RENEWABLE_SITE_LIMITED_HYDRON3_DANTOOINE,
    ENERGY_RENEWABLE_SITE_LIMITED_HYDRON3_DATHOMIR,
    ENERGY_RENEWABLE_SITE_LIMITED_HYDRON3_ENDOR,
    ENERGY_RENEWABLE_SITE_LIMITED_HYDRON3_LOK,
    ENERGY_RENEWABLE_SITE_LIMITED_HYDRON3_NABOO,
    ENERGY_RENEWABLE_SITE_LIMITED_HYDRON3_RORI,
    ENERGY_RENEWABLE_SITE_LIMITED_HYDRON3_TALUS,
    ENERGY_RENEWABLE_SITE_LIMITED_HYDRON3_TATOOINE,
    ENERGY_RENEWABLE_SITE_LIMITED_HYDRON3_YAVIN4,

    ENERGY_RENEWABLE_SITE_LIMITED_TIDAL_CORELLIA,
    ENERGY_RENEWABLE_SITE_LIMITED_TIDAL_DANTOOINE,
    ENERGY_RENEWABLE_SITE_LIMITED_TIDAL_DATHOMIR,
    ENERGY_RENEWABLE_SITE_LIMITED_TIDAL_ENDOR,
    ENERGY_RENEWABLE_SITE_LIMITED_TIDAL_LOK,
    ENERGY_RENEWABLE_SITE_LIMITED_TIDAL_NABOO,
    ENERGY_RENEWABLE_SITE_LIMITED_TIDAL_RORI,
    ENERGY_RENEWABLE_SITE_LIMITED_TIDAL_TALUS,
    ENERGY_RENEWABLE_SITE_LIMITED_TIDAL_TATOOINE,
    ENERGY_RENEWABLE_SITE_LIMITED_TIDAL_YAVIN4,

    ENERGY_RENEWABLE_UNLIMITED_SOLAR_CORELLIA,
    ENERGY_RENEWABLE_UNLIMITED_SOLAR_DANTOOINE,
    ENERGY_RENEWABLE_UNLIMITED_SOLAR_DATHOMIR,
    ENERGY_RENEWABLE_UNLIMITED_SOLAR_ENDOR,
    ENERGY_RENEWABLE_UNLIMITED_SOLAR_LOK,
    ENERGY_RENEWABLE_UNLIMITED_SOLAR_NABOO,
    ENERGY_RENEWABLE_UNLIMITED_SOLAR_RORI,
    ENERGY_RENEWABLE_UNLIMITED_SOLAR_TALUS,
    ENERGY_RENEWABLE_UNLIMITED_SOLAR_TATOOINE,
    ENERGY_RENEWABLE_UNLIMITED_SOLAR_YAVIN4,

    ENERGY_RENEWABLE_UNLIMITED_WIND_CORELLIA,
    ENERGY_RENEWABLE_UNLIMITED_WIND_DANTOOINE,
    ENERGY_RENEWABLE_UNLIMITED_WIND_DATHOMIR,
    ENERGY_RENEWABLE_UNLIMITED_WIND_ENDOR,
    ENERGY_RENEWABLE_UNLIMITED_WIND_LOK,
    ENERGY_RENEWABLE_UNLIMITED_WIND_NABOO,
    ENERGY_RENEWABLE_UNLIMITED_WIND_RORI,
    ENERGY_RENEWABLE_UNLIMITED_WIND_TALUS,
    ENERGY_RENEWABLE_UNLIMITED_WIND_TATOOINE,
    ENERGY_RENEWABLE_UNLIMITED_WIND_YAVIN4,

    FIBERPLAST_CORELLIA,
    FIBERPLAST_DANTOOINE,
    FIBERPLAST_DATHOMIR,
    FIBERPLAST_ENDOR,
    FIBERPLAST_GRAVITONIC,
    FIBERPLAST_LOK,
    FIBERPLAST_NABOO,
    FIBERPLAST_RORI,
    FIBERPLAST_TALUS,
    FIBERPLAST_TATOOINE,
    FIBERPLAST_YAVIN4,

    FRUIT_BERRIES_CORELLIA,
    FRUIT_BERRIES_DANTOOINE,
    FRUIT_BERRIES_DATHOMIR,
    FRUIT_BERRIES_ENDOR,
    FRUIT_BERRIES_LOK,
    FRUIT_BERRIES_NABOO,
    FRUIT_BERRIES_RORI,
    FRUIT_BERRIES_TALUS,
    FRUIT_BERRIES_TATOOINE,
    FRUIT_BERRIES_YAVIN4,

    FRUIT_FLOWERS_CORELLIA,
    FRUIT_FLOWERS_DANTOOINE,
    FRUIT_FLOWERS_DATHOMIR,
    FRUIT_FLOWERS_ENDOR,
    FRUIT_FLOWERS_LOK,
    FRUIT_FLOWERS_NABOO,
    FRUIT_FLOWERS_RORI,
    FRUIT_FLOWERS_TALUS,
    FRUIT_FLOWERS_TATOOINE,
    FRUIT_FLOWERS_YAVIN4,

    FRUIT_FRUITS_CORELLIA,
    FRUIT_FRUITS_DANTOOINE,
    FRUIT_FRUITS_DATHOMIR,
    FRUIT_FRUITS_ENDOR,
    FRUIT_FRUITS_LOK,
    FRUIT_FRUITS_NABOO,
    FRUIT_FRUITS_RORI,
    FRUIT_FRUITS_TALUS,
    FRUIT_FRUITS_TATOOINE,
    FRUIT_FRUITS_YAVIN4,

    GAS_INERT_BILAL,
    GAS_INERT_CORTHEL,
    GAS_INERT_CULSION,
    GAS_INERT_DIOXIS,
    GAS_INERT_HURLOTHROMBIC,
    GAS_INERT_HYDRON3,
    GAS_INERT_KAYLON,
    GAS_INERT_KORFAISE,
    GAS_INERT_MALIUM,
    GAS_INERT_METHANAGEN,
    GAS_INERT_MIRTH,
    GAS_INERT_OBAH,
    GAS_INERT_RETHIN,

    GAS_INERT_UNKNOWN,

    GAS_REACTIVE_ELETON,
    GAS_REACTIVE_IROLUNN,
    GAS_REACTIVE_METHANE,
    GAS_REACTIVE_ORGANOMETALLIC,
    GAS_REACTIVE_ORVETH,
    GAS_REACTIVE_SIG,
    GAS_REACTIVE_SKEVON,
    GAS_REACTIVE_TOLIUM,

    GAS_REACTIVE_UNKNOWN,

    GEMSTONE_UNKNOWN,

    HIDE_BRISTLEY_CORELLIA,
    HIDE_BRISTLEY_DANTOOINE,
    HIDE_BRISTLEY_DATHOMIR,
    HIDE_BRISTLEY_ENDOR,
    HIDE_BRISTLEY_LOK,
    HIDE_BRISTLEY_NABOO,
    HIDE_BRISTLEY_RORI,
    HIDE_BRISTLEY_TALUS,
    HIDE_BRISTLEY_TATOOINE,
    HIDE_BRISTLEY_YAVIN4,

    HIDE_LEATHERY_CORELLIA,
    HIDE_LEATHERY_DANTOOINE,
    HIDE_LEATHERY_DATHOMIR,
    HIDE_LEATHERY_ENDOR,
    HIDE_LEATHERY_LOK,
    HIDE_LEATHERY_NABOO,
    HIDE_LEATHERY_RORI,
    HIDE_LEATHERY_TALUS,
    HIDE_LEATHERY_TATOOINE,
    HIDE_LEATHERY_YAVIN4,

    HIDE_SCALEY_CORELLIA,
    HIDE_SCALEY_DANTOOINE,
    HIDE_SCALEY_DATHOMIR,
    HIDE_SCALEY_ENDOR,
    HIDE_SCALEY_LOK,
    HIDE_SCALEY_NABOO,
    HIDE_SCALEY_RORI,
    HIDE_SCALEY_TALUS,
    HIDE_SCALEY_TATOOINE,
    HIDE_SCALEY_YAVIN4,

    HIDE_WOOLY_CORELLIA,
    HIDE_WOOLY_DANTOOINE,
    HIDE_WOOLY_DATHOMIR,
    HIDE_WOOLY_ENDOR,
    HIDE_WOOLY_LOK,
    HIDE_WOOLY_NABOO,
    HIDE_WOOLY_RORI,
    HIDE_WOOLY_TALUS,
    HIDE_WOOLY_TATOOINE,
    HIDE_WOOLY_YAVIN4,

    IRON_AXIDITE,
    IRON_BRONZIUM,
    IRON_COLAT,
    IRON_DOLOVITE,
    IRON_DOONIUM,
    IRON_KAMMRIS,
    IRON_PLUMBUM,
    IRON_POLONIUM,

    MEAT_AVIAN_CORELLIA,
    MEAT_AVIAN_DANTOOINE,
    MEAT_AVIAN_DATHOMIR,
    MEAT_AVIAN_ENDOR,
    MEAT_AVIAN_LOK,
    MEAT_AVIAN_NABOO,
    MEAT_AVIAN_RORI,
    MEAT_AVIAN_TALUS,
    MEAT_AVIAN_TATOOINE,
    MEAT_AVIAN_YAVIN4,

    MEAT_CARNIVORE_CORELLIA,
    MEAT_CARNIVORE_DANTOOINE,
    MEAT_CARNIVORE_DATHOMIR,
    MEAT_CARNIVORE_ENDOR,
    MEAT_CARNIVORE_LOK,
    MEAT_CARNIVORE_NABOO,
    MEAT_CARNIVORE_RORI,
    MEAT_CARNIVORE_TALUS,
    MEAT_CARNIVORE_TATOOINE,
    MEAT_CARNIVORE_YAVIN4,

    MEAT_DOMESTICATED_CORELLIA,
    MEAT_DOMESTICATED_DANTOOINE,
    MEAT_DOMESTICATED_DATHOMIR,
    MEAT_DOMESTICATED_ENDOR,
    MEAT_DOMESTICATED_LOK,
    MEAT_DOMESTICATED_NABOO,
    MEAT_DOMESTICATED_RORI,
    MEAT_DOMESTICATED_TALUS,
    MEAT_DOMESTICATED_TATOOINE,
    MEAT_DOMESTICATED_YAVIN4,

    MEAT_EGG_CORELLIA,
    MEAT_EGG_DANTOOINE,
    MEAT_EGG_DATHOMIR,
    MEAT_EGG_ENDOR,
    MEAT_EGG_LOK,
    MEAT_EGG_NABOO,
    MEAT_EGG_RORI,
    MEAT_EGG_TALUS,
    MEAT_EGG_TATOOINE,
    MEAT_EGG_YAVIN4,

    MEAT_HERBIVORE_CORELLIA,
    MEAT_HERBIVORE_DANTOOINE,
    MEAT_HERBIVORE_DATHOMIR,
    MEAT_HERBIVORE_ENDOR,
    MEAT_HERBIVORE_LOK,
    MEAT_HERBIVORE_NABOO,
    MEAT_HERBIVORE_RORI,
    MEAT_HERBIVORE_TALUS,
    MEAT_HERBIVORE_TATOOINE,
    MEAT_HERBIVORE_YAVIN4,

    MEAT_INSECT_CORELLIA,
    MEAT_INSECT_DANTOOINE,
    MEAT_INSECT_DATHOMIR,
    MEAT_INSECT_ENDOR,
    MEAT_INSECT_LOK,
    MEAT_INSECT_NABOO,
    MEAT_INSECT_RORI,
    MEAT_INSECT_TALUS,
    MEAT_INSECT_TATOOINE,
    MEAT_INSECT_YAVIN4,

    MEAT_REPTILIAN_CORELLIA,
    MEAT_REPTILIAN_DANTOOINE,
    MEAT_REPTILIAN_DATHOMIR,
    MEAT_REPTILIAN_ENDOR,
    MEAT_REPTILIAN_LOK,
    MEAT_REPTILIAN_NABOO,
    MEAT_REPTILIAN_RORI,
    MEAT_REPTILIAN_TALUS,
    MEAT_REPTILIAN_TATOOINE,
    MEAT_REPTILIAN_YAVIN4,

    MEAT_WILD_CORELLIA,
    MEAT_WILD_DANTOOINE,
    MEAT_WILD_DATHOMIR,
    MEAT_WILD_ENDOR,
    MEAT_WILD_LOK,
    MEAT_WILD_NABOO,
    MEAT_WILD_RORI,
    MEAT_WILD_TALUS,
    MEAT_WILD_TATOOINE,
    MEAT_WILD_YAVIN4,

    METAL_FERROUS_UNKNOWN,

    METAL_NONFERROUS_UNKNOWN,

    MILK_DOMESTICATED_CORELLIA,
    MILK_DOMESTICATED_DANTOOINE,
    MILK_DOMESTICATED_DATHOMIR,
    MILK_DOMESTICATED_ENDOR,
    MILK_DOMESTICATED_LOK,
    MILK_DOMESTICATED_NABOO,
    MILK_DOMESTICATED_RORI,
    MILK_DOMESTICATED_TALUS,
    MILK_DOMESTICATED_TATOOINE,
    MILK_DOMESTICATED_YAVIN4,

    MILK_WILD_CORELLIA,
    MILK_WILD_DANTOOINE,
    MILK_WILD_DATHOMIR,
    MILK_WILD_ENDOR,
    MILK_WILD_LOK,
    MILK_WILD_NABOO,
    MILK_WILD_RORI,
    MILK_WILD_TALUS,
    MILK_WILD_TATOOINE,
    MILK_WILD_YAVIN4,

    OATS_DOMESTICATED_CORELLIA,
    OATS_DOMESTICATED_DANTOOINE,
    OATS_DOMESTICATED_DATHOMIR,
    OATS_DOMESTICATED_ENDOR,
    OATS_DOMESTICATED_LOK,
    OATS_DOMESTICATED_NABOO,
    OATS_DOMESTICATED_RORI,
    OATS_DOMESTICATED_TALUS,
    OATS_DOMESTICATED_TATOOINE,
    OATS_DOMESTICATED_YAVIN4,

    OATS_WILD_CORELLIA,
    OATS_WILD_DANTOOINE,
    OATS_WILD_DATHOMIR,
    OATS_WILD_ENDOR,
    OATS_WILD_LOK,
    OATS_WILD_NABOO,
    OATS_WILD_RORI,
    OATS_WILD_TALUS,
    OATS_WILD_TATOOINE,
    OATS_WILD_YAVIN4,

    ORE_CARBONATE_ALANTIUM,
    ORE_CARBONATE_BARTHIERIUM,
    ORE_CARBONATE_CHROMITE,
    ORE_CARBONATE_FRASIUM,
    ORE_CARBONATE_LOMMITE,
    ORE_CARBONATE_OSTRINE,
    ORE_CARBONATE_VARIUM,
    ORE_CARBONATE_ZINSIAM,

    ORE_EXTRUSIVE_BENE,
    ORE_EXTRUSIVE_CHRONAMITE,
    ORE_EXTRUSIVE_ILIMIUM,
    ORE_EXTRUSIVE_KALONTERIUM,
    ORE_EXTRUSIVE_KESCHEL,
    ORE_EXTRUSIVE_LIDIUM,
    ORE_EXTRUSIVE_MARANIUM,
    ORE_EXTRUSIVE_PHOLOKITE,
    ORE_EXTRUSIVE_QUADRENIUM,
    ORE_EXTRUSIVE_VINTRIUM,

    ORE_IGNEOUS_UNKNOWN,

    ORE_INTRUSIVE_BERUBIUM,
    ORE_INTRUSIVE_CHANLON,
    ORE_INTRUSIVE_CORINTIUM,
    ORE_INTRUSIVE_DERILLIUM,
    ORE_INTRUSIVE_DYLINIUM,
    ORE_INTRUSIVE_HOLLINIUM,
    ORE_INTRUSIVE_IONITE,
    ORE_INTRUSIVE_KATRIUM,
    ORE_INTRUSIVE_ORIDIUM,

    ORE_SEDIMENTARY_UNKNOWN,

    ORE_SILICLASTIC_ARDANIUM,
    ORE_SILICLASTIC_CORTOSIS,
    ORE_SILICLASTIC_CRISM,
    ORE_SILICLASTIC_FERMIONIC,
    ORE_SILICLASTIC_MALAB,
    ORE_SILICLASTIC_ROBINDUN,
    ORE_SILICLASTIC_TERTIAN,

    PETROCHEM_FUEL_LIQUID_TYPE1,
    PETROCHEM_FUEL_LIQUID_TYPE2,
    PETROCHEM_FUEL_LIQUID_TYPE3,
    PETROCHEM_FUEL_LIQUID_TYPE4,
    PETROCHEM_FUEL_LIQUID_TYPE5,
    PETROCHEM_FUEL_LIQUID_TYPE6,
    PETROCHEM_FUEL_LIQUID_TYPE7,
    PETROCHEM_FUEL_LIQUID_UNKNOWN,

    PETROCHEM_FUEL_SOLID_TYPE1,
    PETROCHEM_FUEL_SOLID_TYPE2,
    PETROCHEM_FUEL_SOLID_TYPE3,
    PETROCHEM_FUEL_SOLID_TYPE4,
    PETROCHEM_FUEL_SOLID_TYPE5,
    PETROCHEM_FUEL_SOLID_TYPE6,
    PETROCHEM_FUEL_SOLID_TYPE7,
    PETROCHEM_FUEL_SOLID_UNKNOWN,

    PETROCHEM_INERT_LUBRICATING_OIL,
    PETROCHEM_INERT_POLYMER,

    RADIOACTIVE_POLYMETRIC,
    RADIOACTIVE_TYPE1,
    RADIOACTIVE_TYPE2,
    RADIOACTIVE_TYPE3,
    RADIOACTIVE_TYPE4,
    RADIOACTIVE_TYPE5,
    RADIOACTIVE_TYPE6,
    RADIOACTIVE_TYPE7,
    RADIOACTIVE_UNKNOWN,

    RICE_DOMESTICATED_CORELLIA,
    RICE_DOMESTICATED_DANTOOINE,
    RICE_DOMESTICATED_DATHOMIR,
    RICE_DOMESTICATED_ENDOR,
    RICE_DOMESTICATED_LOK,
    RICE_DOMESTICATED_NABOO,
    RICE_DOMESTICATED_RORI,
    RICE_DOMESTICATED_TALUS,
    RICE_DOMESTICATED_TATOOINE,
    RICE_DOMESTICATED_YAVIN4,

    RICE_WILD_CORELLIA,
    RICE_WILD_DANTOOINE,
    RICE_WILD_DATHOMIR,
    RICE_WILD_ENDOR,
    RICE_WILD_LOK,
    RICE_WILD_NABOO,
    RICE_WILD_RORI,
    RICE_WILD_TALUS,
    RICE_WILD_TATOOINE,
    RICE_WILD_YAVIN4,

    SEAFOOD_CRUSTACEAN_CORELLIA,
    SEAFOOD_CRUSTACEAN_DANTOOINE,
    SEAFOOD_CRUSTACEAN_DATHOMIR,
    SEAFOOD_CRUSTACEAN_ENDOR,
    SEAFOOD_CRUSTACEAN_LOK,
    SEAFOOD_CRUSTACEAN_NABOO,
    SEAFOOD_CRUSTACEAN_RORI,
    SEAFOOD_CRUSTACEAN_TALUS,
    SEAFOOD_CRUSTACEAN_TATOOINE,
    SEAFOOD_CRUSTACEAN_YAVIN4,

    SEAFOOD_FISH_CORELLIA,
    SEAFOOD_FISH_DANTOOINE,
    SEAFOOD_FISH_DATHOMIR,
    SEAFOOD_FISH_ENDOR,
    SEAFOOD_FISH_LOK,
    SEAFOOD_FISH_NABOO,
    SEAFOOD_FISH_RORI,
    SEAFOOD_FISH_TALUS,
    SEAFOOD_FISH_TATOOINE,
    SEAFOOD_FISH_YAVIN4,

    SEAFOOD_MOLLUSK_CORELLIA,
    SEAFOOD_MOLLUSK_DANTOOINE,
    SEAFOOD_MOLLUSK_DATHOMIR,
    SEAFOOD_MOLLUSK_ENDOR,
    SEAFOOD_MOLLUSK_LOK,
    SEAFOOD_MOLLUSK_NABOO,
    SEAFOOD_MOLLUSK_RORI,
    SEAFOOD_MOLLUSK_TALUS,
    SEAFOOD_MOLLUSK_TATOOINE,
    SEAFOOD_MOLLUSK_YAVIN4,

    SOFTWOOD_CONIFER_CORELLIA,
    SOFTWOOD_CONIFER_DANTOOINE,
    SOFTWOOD_CONIFER_DATHOMIR,
    SOFTWOOD_CONIFER_ENDOR,
    SOFTWOOD_CONIFER_LOK,
    SOFTWOOD_CONIFER_NABOO,
    SOFTWOOD_CONIFER_RORI,
    SOFTWOOD_CONIFER_TALUS,
    SOFTWOOD_CONIFER_TATOOINE,
    SOFTWOOD_CONIFER_YAVIN4,

    SOFTWOOD_EVERGREEN_CORELLIA,
    SOFTWOOD_EVERGREEN_DANTOOINE,
    SOFTWOOD_EVERGREEN_DATHOMIR,
    SOFTWOOD_EVERGREEN_ENDOR,
    SOFTWOOD_EVERGREEN_LOK,
    SOFTWOOD_EVERGREEN_NABOO,
    SOFTWOOD_EVERGREEN_RORI,
    SOFTWOOD_EVERGREEN_TALUS,
    SOFTWOOD_EVERGREEN_TATOOINE,
    SOFTWOOD_EVERGREEN_YAVIN4,

    STEEL_ARVESHIAN,
    STEEL_BICORBANTIUM,
    STEEL_CARBONITE,
    STEEL_CUBIRIAN,
    STEEL_DITANIUM,
    STEEL_DURALLOY,
    STEEL_DURANIUM,
    STEEL_KIIRIUM,
    STEEL_NEUTRONIUM,
    STEEL_QUADRANIUM,
    STEEL_RHODIUM,
    STEEL_THORANIUM,

    VEGETABLE_BEANS_CORELLIA,
    VEGETABLE_BEANS_DANTOOINE,
    VEGETABLE_BEANS_DATHOMIR,
    VEGETABLE_BEANS_ENDOR,
    VEGETABLE_BEANS_LOK,
    VEGETABLE_BEANS_NABOO,
    VEGETABLE_BEANS_RORI,
    VEGETABLE_BEANS_TALUS,
    VEGETABLE_BEANS_TATOOINE,
    VEGETABLE_BEANS_YAVIN4,

    VEGETABLE_FUNGI_CORELLIA,
    VEGETABLE_FUNGI_DANTOOINE,
    VEGETABLE_FUNGI_DATHOMIR,
    VEGETABLE_FUNGI_ENDOR,
    VEGETABLE_FUNGI_LOK,
    VEGETABLE_FUNGI_NABOO,
    VEGETABLE_FUNGI_RORI,
    VEGETABLE_FUNGI_TALUS,
    VEGETABLE_FUNGI_TATOOINE,
    VEGETABLE_FUNGI_YAVIN4,

    VEGETABLE_GREENS_CORELLIA,
    VEGETABLE_GREENS_DANTOOINE,
    VEGETABLE_GREENS_DATHOMIR,
    VEGETABLE_GREENS_ENDOR,
    VEGETABLE_GREENS_LOK,
    VEGETABLE_GREENS_NABOO,
    VEGETABLE_GREENS_RORI,
    VEGETABLE_GREENS_TALUS,
    VEGETABLE_GREENS_TATOOINE,
    VEGETABLE_GREENS_YAVIN4,

    VEGETABLE_TUBERS_CORELLIA,
    VEGETABLE_TUBERS_DANTOOINE,
    VEGETABLE_TUBERS_DATHOMIR,
    VEGETABLE_TUBERS_ENDOR,
    VEGETABLE_TUBERS_LOK,
    VEGETABLE_TUBERS_NABOO,
    VEGETABLE_TUBERS_RORI,
    VEGETABLE_TUBERS_TALUS,
    VEGETABLE_TUBERS_TATOOINE,
    VEGETABLE_TUBERS_YAVIN4,

    WATER_VAPOR_CORELLIA,
    WATER_VAPOR_DANTOOINE,
    WATER_VAPOR_DATHOMIR,
    WATER_VAPOR_ENDOR,
    WATER_VAPOR_LOK,
    WATER_VAPOR_NABOO,
    WATER_VAPOR_RORI,
    WATER_VAPOR_TALUS,
    WATER_VAPOR_TATOOINE,
    WATER_VAPOR_YAVIN4,

    WHEAT_DOMESTICATED_CORELLIA,
    WHEAT_DOMESTICATED_DANTOOINE,
    WHEAT_DOMESTICATED_DATHOMIR,
    WHEAT_DOMESTICATED_ENDOR,
    WHEAT_DOMESTICATED_LOK,
    WHEAT_DOMESTICATED_NABOO,
    WHEAT_DOMESTICATED_RORI,
    WHEAT_DOMESTICATED_TALUS,
    WHEAT_DOMESTICATED_TATOOINE,
    WHEAT_DOMESTICATED_YAVIN4,

    WHEAT_WILD_CORELLIA,
    WHEAT_WILD_DANTOOINE,
    WHEAT_WILD_DATHOMIR,
    WHEAT_WILD_ENDOR,
    WHEAT_WILD_LOK,
    WHEAT_WILD_NABOO,
    WHEAT_WILD_RORI,
    WHEAT_WILD_TALUS,
    WHEAT_WILD_TATOOINE,
    WHEAT_WILD_YAVIN4,

    WOOD_DECIDUOUS_CORELLIA,
    WOOD_DECIDUOUS_DANTOOINE,
    WOOD_DECIDUOUS_DATHOMIR,
    WOOD_DECIDUOUS_ENDOR,
    WOOD_DECIDUOUS_LOK,
    WOOD_DECIDUOUS_NABOO,
    WOOD_DECIDUOUS_RORI,
    WOOD_DECIDUOUS_TALUS,
    WOOD_DECIDUOUS_TATOOINE,
    WOOD_DECIDUOUS_YAVIN4,

    //add nothing below this one
    SWG_resource_types_count
};

std::string SWGResourceClassString(SWG_resource_classes e);
std::string SWGResourceClassStringPretty(SWG_resource_classes e);

std::string SWGResourceTypeString(SWG_resource_types e);
std::string SWGResourceTypeStringPretty(SWG_resource_types e);

std::string SWGAttributesString(SWG_attributes e);

std::unordered_map<std::string, SWG_resource_classes> getReverseOfClassesString();
std::unordered_map<std::string, SWG_resource_classes> getReverseOfClassesPrettyString();

std::unordered_map<std::string, SWG_resource_types> getReverseOfTypesString();
std::unordered_map<std::string, SWG_resource_types> getReverseOfTypesPrettyString();

