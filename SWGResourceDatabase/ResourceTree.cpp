//class header
#include "ResourceTree.hpp"

//std lib includes
#include <iostream>

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
ResourceTree::ResourceTree()
{
    createRootNode();
}

const resource_class_node* ResourceTree::getRootNode() const
{
    return &root;
}

const resource_class_node* ResourceTree::getResourceClassNode(SWG_resource_classes resource_class) const
{
    //replace with method that will say which of the 3 main branches to look in
    const resource_class_node* result = nullptr; //maybe root has no children so keep this default value

    for (unsigned int i = 0; i < root.children.size(); i++)
    {
        result = findClassRecursive(resource_class, &root.children[i]);
        if (result != nullptr) //the way to kick out of the loop if we find it
        {
            break;
        }
    }

    return result;
}

int ResourceTree::getNodeItemCount(const resource_class_node* node) const
{
    //show this node and the children only(not their children) root is an exception. root doesn't count itself. show only the children.
    if (node == nullptr)
    {
        return 0; //null means 0 since nothing there
    }

    if (node == &root) //want to check the actual address
    {
        return root.children.size();
    }
    else
    {
        //show this class, any resource types that show up here, and the children.
        int count = 1; //start at 1 since this node is a class if not root or null
        count += node->children.size();
        if (node->start_type != skip_type && node->end_type != skip_type)
        {
            count += static_cast<int>(node->end_type) - static_cast<int>(node->start_type) + 1; //if there are resource types to show here get the count
            //this works because end - start gives 1 less than the actual count. 0 if they are the same so add 1. Example 76(CORN_WILD_YAVIN4) - 67(CORN_WILD_CORELLIA) = 9 but there are 10 planets ;)
        }

        return count;
    }
}

std::vector<node_items> ResourceTree::getNodeItems(const resource_class_node* node) const
{
    std::vector<node_items> result;

    if (node == nullptr)
    {
        return result; //exit immediately
    }

    if (node == &root) //want to check the actual address
    {
        //only classes
        for (size_t i = 0; i < node->children.size(); i++)
        {
            result.push_back(node_items{ static_cast<int>(node->children[i].resource_class), true });
        }
    }
    else
    {
        //this class first
        result.push_back(node_items{ static_cast<int>(node->resource_class), true });

        //then children
        for (size_t i = 0; i < node->children.size(); i++)
        {
            result.push_back(node_items{ static_cast<int>(node->children[i].resource_class), true });
        }

        //then any resource types at parent level
        for (int i = 0; i < getNodeItemCount(node); i++)
        {
            result.push_back(node_items{ static_cast<int>(node->start_type)+i, true }); //get base type and add i to get each type
        }
    }

    return result;
}

void ResourceTree::debugTestFindClassNode() const
{
    for (int i = static_cast<int>(SWG_resource_classes::ALUMINUM); i < static_cast<int>(SWG_resource_classes::SWG_resource_classes_count); i++)
    {
        SWG_resource_classes resource_class = static_cast<SWG_resource_classes>(i);
        const resource_class_node* node = getResourceClassNode(resource_class);
        if (node != nullptr)
        {
            //std::cout << "node class name: " << SWGResourceClassString(node->resource_class) << "\n";
            std::cout << "node class pretty name: " << SWGResourceClassStringPretty(node->resource_class) << "\n";
        }
        else
        {
            std::cout << "ERROR: class failed to be found: " << SWGResourceClassStringPretty(resource_class) << "\n";
        }
    }
}

void ResourceTree::debugTestFindType() const
{
    std::vector<bool> found;
    found.resize(static_cast<int>(SWG_resource_types::SWG_resource_types_count), false); //set all to false from 0 to SWG_resource_classes_count - 1

    for (int i = static_cast<int>(SWG_resource_classes::ALUMINUM); i < static_cast<int>(SWG_resource_classes::SWG_resource_classes_count); i++)
    {
        SWG_resource_classes resource_class = static_cast<SWG_resource_classes>(i);
        const resource_class_node* node = getResourceClassNode(resource_class);
        if (node != nullptr)
        {
            if (node->start_type != skip_type && node->end_type != skip_type) //only add if neither is set to skip type
            {
                for (int c = static_cast<int>(node->start_type); c <= static_cast<int>(node->end_type); c++)
                {
                    if (!found[c]) //if not already set to true, do so
                    {
                        found[c] = true;
                    }
                }
            }
        }
    }

    //look for and report any values of false
    for (size_t i = 0; i < found.size(); i++)
    {
        if (found[i])
        {
            std::cout << "type pretty name: " << SWGResourceTypeStringPretty(static_cast<SWG_resource_types>(i)) << "\n";
        }
        else
        {
            std::cout << "ERROR: type failed to be found: " << SWGResourceTypeStringPretty(static_cast<SWG_resource_types>(i)) << "\n";
        }
    }
}

//private
const resource_class_node* ResourceTree::findClassRecursive(SWG_resource_classes resource_class, const resource_class_node* current_node) const
{
    //base cases are: current node has no children and this node isn't what we're looking for(no where else to go so return), or it's the node we want
    const resource_class_node* result = nullptr;

    //check this node first, then call this method on children one by one
    if (current_node->resource_class == resource_class)
    {
        result = current_node;
    }
    else
    {
        for (unsigned int i = 0; i < current_node->children.size(); i++)
        {
            result = findClassRecursive(resource_class, &current_node->children[i]);
            if (result != nullptr) //the way to kick out of the loop if we find it
            {
                break;
            }
        }
    }

    return result;
}

void ResourceTree::createRootNode()
{
    root = resource_class_node
    {
        SWG_resource_classes::ALUMINUM,
        skip_type,
        skip_type,
        std::vector<resource_class_node>
        {
            createEnergyNode(),
            createInorganicNode(),
            createOrganicNode()
        }
    };
}

//Entire node since it's only 4 layers deep
resource_class_node ResourceTree::createEnergyNode()
{
    resource_class_node temp = resource_class_node
    {
        SWG_resource_classes::ENERGY,
        skip_type,
        skip_type,
        std::vector<resource_class_node>
        {
            resource_class_node
            {
                SWG_resource_classes::ENERGY_RENEWABLE,
                skip_type,
                skip_type,
                std::vector<resource_class_node>
                {
                    resource_class_node
                    {
                        SWG_resource_classes::ENERGY_RENEWABLE_UNLIMITED,
                        skip_type,
                        skip_type,
                        std::vector<resource_class_node>
                        {
                            resource_class_node
                            {
                                SWG_resource_classes::ENERGY_RENEWABLE_UNLIMITED_SOLAR,
                                SWG_resource_types::ENERGY_RENEWABLE_UNLIMITED_SOLAR_CORELLIA,
                                SWG_resource_types::ENERGY_RENEWABLE_UNLIMITED_SOLAR_YAVIN4,
                                std::vector<resource_class_node>()
                            },
                            resource_class_node
                            {
                                SWG_resource_classes::ENERGY_RENEWABLE_UNLIMITED_WIND,
                                SWG_resource_types::ENERGY_RENEWABLE_UNLIMITED_WIND_CORELLIA,
                                SWG_resource_types::ENERGY_RENEWABLE_UNLIMITED_WIND_YAVIN4,
                                std::vector<resource_class_node>()
                            }
                        }
                    },
                    resource_class_node
                    {
                        SWG_resource_classes::ENERGY_RENEWABLE_SITE_LIMITED,
                        SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_GEOTHERMAL_CORELLIA,
                        SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_TIDAL_YAVIN4,
                        std::vector<resource_class_node>()
                    }
                }
            }
        }
    };
    return temp;
}

//2 layers deep into inorganic tree and then call helpers
resource_class_node ResourceTree::createInorganicNode()
{
    resource_class_node temp = resource_class_node
    {
        SWG_resource_classes::INORGANIC,
        skip_type,
        skip_type,
        std::vector<resource_class_node>
        {
            resource_class_node
            {
                SWG_resource_classes::CHEMICAL,
                skip_type,
                skip_type,
                createChemicalChildrenNodes()
            },
            resource_class_node
            {
                SWG_resource_classes::WATER,
                SWG_resource_types::WATER_VAPOR_CORELLIA,
                SWG_resource_types::WATER_VAPOR_YAVIN4,
                std::vector<resource_class_node>()
            },
            resource_class_node
            {
                SWG_resource_classes::MINERAL,
                skip_type,
                skip_type,
                createMineralChildrenNodes()
            },
            resource_class_node
            {
                SWG_resource_classes::GAS,
                skip_type,
                skip_type,
                createGasChildrenNodes()
            }
        }
    };
    return temp;
}

std::vector<resource_class_node> ResourceTree::createChemicalChildrenNodes()
{
    std::vector<resource_class_node> temp =
    {
        resource_class_node
        {
            SWG_resource_classes::FIBERPLAST,
            SWG_resource_types::FIBERPLAST_CORELLIA,
            SWG_resource_types::FIBERPLAST_YAVIN4,
            std::vector<resource_class_node>()
        },
        resource_class_node
        {
            SWG_resource_classes::PETROCHEM_INERT,
            SWG_resource_types::PETROCHEM_INERT_LUBRICATING_OIL,
            SWG_resource_types::PETROCHEM_INERT_POLYMER,
            std::vector<resource_class_node>()
        },
        resource_class_node
        {
            SWG_resource_classes::FUEL_PETROCHEM_LIQUID,
            skip_type,
            skip_type,
            std::vector<resource_class_node>
            {
                resource_class_node
                {
                    SWG_resource_classes::FUEL_PETROCHEM_LIQUID_KNOWN,
                    SWG_resource_types::PETROCHEM_FUEL_LIQUID_TYPE1,
                    SWG_resource_types::PETROCHEM_FUEL_LIQUID_UNKNOWN,
                    std::vector<resource_class_node>()
                }
            }
        }
    };
    return temp;
}

std::vector<resource_class_node> ResourceTree::createMineralChildrenNodes()
{
    std::vector<resource_class_node> temp =
    {
        resource_class_node
        {
            SWG_resource_classes::RADIOACTIVE,
            skip_type,
            skip_type,
            std::vector<resource_class_node>
            {
                resource_class_node
                {
                    SWG_resource_classes::RADIOACTIVE_KNOWN,
                    SWG_resource_types::RADIOACTIVE_POLYMETRIC,
                    SWG_resource_types::RADIOACTIVE_UNKNOWN,
                    std::vector<resource_class_node>()
                }
            }
        },
        resource_class_node
        {
            SWG_resource_classes::FUEL_PETROCHEM_SOLID,
            skip_type,
            skip_type,
            std::vector<resource_class_node>
            {
                resource_class_node
                {
                    SWG_resource_classes::FUEL_PETROCHEM_SOLID_KNOWN,
                    SWG_resource_types::PETROCHEM_FUEL_SOLID_TYPE1,
                    SWG_resource_types::PETROCHEM_FUEL_SOLID_UNKNOWN,
                    std::vector<resource_class_node>()
                }
            }
        },
        resource_class_node
        {
            SWG_resource_classes::METAL,
            skip_type,
            skip_type,
            std::vector<resource_class_node>
            {
                resource_class_node
                {
                    SWG_resource_classes::METAL_FERROUS,
                    SWG_resource_types::METAL_FERROUS_UNKNOWN,
                    SWG_resource_types::METAL_FERROUS_UNKNOWN,
                    std::vector<resource_class_node>
                    {
                        resource_class_node
                        {
                            SWG_resource_classes::IRON,
                            SWG_resource_types::IRON_AXIDITE,
                            SWG_resource_types::IRON_POLONIUM,
                            std::vector<resource_class_node>()
                        },
                        resource_class_node
                        {
                            SWG_resource_classes::STEEL,
                            SWG_resource_types::STEEL_ARVESHIAN,
                            SWG_resource_types::STEEL_THORANIUM,
                            std::vector<resource_class_node>()
                        }
                    }
                },
                resource_class_node
                {
                    SWG_resource_classes::METAL_NONFERROUS,
                    SWG_resource_types::METAL_NONFERROUS_UNKNOWN,
                    SWG_resource_types::METAL_NONFERROUS_UNKNOWN,
                    std::vector<resource_class_node>
                    {
                        resource_class_node
                        {
                            SWG_resource_classes::ALUMINUM,
                            SWG_resource_types::ALUMINUM_AGRINIUM,
                            SWG_resource_types::ALUMINUM_TITANIUM,
                            std::vector<resource_class_node>()
                        },
                        resource_class_node
                        {
                            SWG_resource_classes::COPPER,
                            SWG_resource_types::COPPER_BEYRLLIUS,
                            SWG_resource_types::COPPER_THALLIUM,
                            std::vector<resource_class_node>()
                        }
                    }
                }
            }
        },
        resource_class_node
        {
            SWG_resource_classes::ORE,
            skip_type,
            skip_type,
            std::vector<resource_class_node>
            {
                resource_class_node
                {
                    SWG_resource_classes::ORE_IGNEOUS,
                    SWG_resource_types::ORE_IGNEOUS_UNKNOWN,
                    SWG_resource_types::ORE_IGNEOUS_UNKNOWN,
                    std::vector<resource_class_node>
                    {
                        resource_class_node
                        {
                            SWG_resource_classes::ORE_EXTRUSIVE,
                            SWG_resource_types::ORE_EXTRUSIVE_BENE,
                            SWG_resource_types::ORE_EXTRUSIVE_VINTRIUM,
                            std::vector<resource_class_node>()
                        },
                        resource_class_node
                        {
                            SWG_resource_classes::ORE_INTRUSIVE,
                            SWG_resource_types::ORE_INTRUSIVE_BERUBIUM,
                            SWG_resource_types::ORE_INTRUSIVE_ORIDIUM,
                            std::vector<resource_class_node>()
                        }
                    }
                },
                resource_class_node
                {
                    SWG_resource_classes::ORE_SEDIMENTARY,
                    SWG_resource_types::ORE_SEDIMENTARY_UNKNOWN,
                    SWG_resource_types::ORE_SEDIMENTARY_UNKNOWN,
                    std::vector<resource_class_node>
                    {
                        resource_class_node
                        {
                            SWG_resource_classes::ORE_CARBONATE,
                            SWG_resource_types::ORE_CARBONATE_ALANTIUM,
                            SWG_resource_types::ORE_CARBONATE_ZINSIAM,
                            std::vector<resource_class_node>()
                        },
                        resource_class_node
                        {
                            SWG_resource_classes::ORE_SILICLASTIC,
                            SWG_resource_types::ORE_SILICLASTIC_ARDANIUM,
                            SWG_resource_types::ORE_SILICLASTIC_TERTIAN,
                            std::vector<resource_class_node>()
                        }
                    }
                }
            }
        },
        resource_class_node
        {
            SWG_resource_classes::GEMSTONE,
            SWG_resource_types::GEMSTONE_UNKNOWN,
            SWG_resource_types::GEMSTONE_UNKNOWN,
            std::vector<resource_class_node>
            {
                resource_class_node
                {
                    SWG_resource_classes::GEMSTONE_ARMOPHOUS,
                    SWG_resource_types::ARMOPHOUS_BALTARAN,
                    SWG_resource_types::ARMOPHOUS_VENDUSII,
                    std::vector<resource_class_node>()
                },
                resource_class_node
                {
                    SWG_resource_classes::GEMSTONE_CRYSTALLINE,
                    SWG_resource_types::CRYSTALLINE_BYROTHSIS,
                    SWG_resource_types::CRYSTALLINE_VERTEX,
                    std::vector<resource_class_node>()
                }
            }
        }
    };
    return temp;
}

std::vector<resource_class_node> ResourceTree::createGasChildrenNodes()
{
    std::vector<resource_class_node> temp =
    {
        resource_class_node
        {
            SWG_resource_classes::GAS_INERT,
            skip_type,
            skip_type,
            std::vector<resource_class_node>
            {
                resource_class_node
                {
                    SWG_resource_classes::GAS_INERT_KNOWN,
                    SWG_resource_types::GAS_INERT_BILAL,
                    SWG_resource_types::GAS_INERT_UNKNOWN, //unknown should be a class but it's a type
                    std::vector<resource_class_node>()
                },
            }
        },
        resource_class_node
        {
            SWG_resource_classes::GAS_REACTIVE,
            skip_type,
            skip_type,
            std::vector<resource_class_node>
            {
                resource_class_node
                {
                    SWG_resource_classes::GAS_REACTIVE_KNOWN,
                    SWG_resource_types::GAS_REACTIVE_ELETON,
                    SWG_resource_types::GAS_REACTIVE_UNKNOWN, //sig and unknown should be a class based on the swgcraft tree
                    std::vector<resource_class_node>()
                },
            }
        }
    };
    return temp;
}

//3 layers deep into organic tree and then call helpers
resource_class_node ResourceTree::createOrganicNode()
{
    resource_class_node temp = resource_class_node
    {
        SWG_resource_classes::ORGANIC,
        skip_type,
        skip_type,
        std::vector<resource_class_node>
        {
            resource_class_node
            {
                SWG_resource_classes::FLORA_RESOURCES,
                skip_type,
                skip_type,
                std::vector<resource_class_node>
                {
                    resource_class_node
                    {
                        SWG_resource_classes::FLORA_FOOD,
                        skip_type,
                        skip_type,
                        createFloraFoodChildrenNodes()
                    },
                    resource_class_node
                    {
                        SWG_resource_classes::FLORA_STRUCTURAL,
                        skip_type,
                        skip_type,
                        createFloraStructuralChildrenNodes()
                    }
                }
            },
            resource_class_node
            {
                SWG_resource_classes::CREATURE_RESOURCES,
                skip_type,
                skip_type,
                std::vector<resource_class_node>
                {
                    resource_class_node
                    {
                        SWG_resource_classes::CREATURE_FOOD,
                        skip_type,
                        skip_type,
                        createCreatureFoodChildrenNodes()
                    },
                    resource_class_node
                    {
                        SWG_resource_classes::CREATURE_STRUCTURAL,
                        skip_type,
                        skip_type,
                        createCreatureStructuralChildrenNodes()
                    }
                }
            }
        }
    };
    return temp;
}

std::vector<resource_class_node> ResourceTree::createFloraFoodChildrenNodes()
{
    std::vector<resource_class_node> temp =
    {
        std::vector<resource_class_node>
        {
            resource_class_node
            {
                SWG_resource_classes::CEREAL,
                skip_type,
                skip_type,
                std::vector<resource_class_node>
                {
                    resource_class_node
                    {
                        SWG_resource_classes::CORN,
                        skip_type,
                        skip_type,
                        std::vector<resource_class_node>
                        {
                            resource_class_node
                            {
                                SWG_resource_classes::CORN_DOMESTICATED,
                                SWG_resource_types::CORN_DOMESTICATED_CORELLIA,
                                SWG_resource_types::CORN_DOMESTICATED_YAVIN4,
                                std::vector<resource_class_node>()
                            },
                            resource_class_node
                            {
                                SWG_resource_classes::CORN_WILD,
                                SWG_resource_types::CORN_WILD_CORELLIA,
                                SWG_resource_types::CORN_WILD_YAVIN4,
                                std::vector<resource_class_node>()
                            }
                        }
                    },
                    resource_class_node
                    {
                        SWG_resource_classes::OATS,
                        skip_type,
                        skip_type,
                        std::vector<resource_class_node>
                        {
                            resource_class_node
                            {
                                SWG_resource_classes::OATS_DOMESTICATED,
                                SWG_resource_types::OATS_DOMESTICATED_CORELLIA,
                                SWG_resource_types::OATS_DOMESTICATED_YAVIN4,
                                std::vector<resource_class_node>()
                            },
                            resource_class_node
                            {
                                SWG_resource_classes::OATS_WILD,
                                SWG_resource_types::OATS_WILD_CORELLIA,
                                SWG_resource_types::OATS_WILD_YAVIN4,
                                std::vector<resource_class_node>()
                            }
                        }
                    },
                    resource_class_node
                    {
                        SWG_resource_classes::RICE,
                        skip_type,
                        skip_type,
                        std::vector<resource_class_node>
                        {
                            resource_class_node
                            {
                                SWG_resource_classes::RICE_DOMESTICATED,
                                SWG_resource_types::RICE_DOMESTICATED_CORELLIA,
                                SWG_resource_types::RICE_DOMESTICATED_YAVIN4,
                                std::vector<resource_class_node>()
                            },
                            resource_class_node
                            {
                                SWG_resource_classes::RICE_WILD,
                                SWG_resource_types::RICE_WILD_CORELLIA,
                                SWG_resource_types::RICE_WILD_YAVIN4,
                                std::vector<resource_class_node>()
                            }
                        }
                    },
                    resource_class_node
                    {
                        SWG_resource_classes::WHEAT,
                        skip_type,
                        skip_type,
                        std::vector<resource_class_node>
                        {
                            resource_class_node
                            {
                                SWG_resource_classes::WHEAT_DOMESTICATED,
                                SWG_resource_types::WHEAT_DOMESTICATED_CORELLIA,
                                SWG_resource_types::WHEAT_DOMESTICATED_YAVIN4,
                                std::vector<resource_class_node>()
                            },
                            resource_class_node
                            {
                                SWG_resource_classes::WHEAT_WILD,
                                SWG_resource_types::WHEAT_WILD_CORELLIA,
                                SWG_resource_types::WHEAT_WILD_YAVIN4,
                                std::vector<resource_class_node>()
                            }
                        }
                    }
                }
            },
            resource_class_node
            {
                SWG_resource_classes::SEEDS,
                skip_type,
                skip_type,
                std::vector<resource_class_node>
                {
                    resource_class_node
                    {
                        SWG_resource_classes::FRUIT,
                        skip_type,
                        skip_type,
                        std::vector<resource_class_node>
                        {
                            resource_class_node
                            {
                                SWG_resource_classes::FRUIT_BERRIES,
                                SWG_resource_types::FRUIT_BERRIES_CORELLIA,
                                SWG_resource_types::FRUIT_BERRIES_YAVIN4,
                                std::vector<resource_class_node>()
                            },
                            resource_class_node
                            {
                                SWG_resource_classes::FRUIT_FLOWERS,
                                SWG_resource_types::FRUIT_FLOWERS_CORELLIA,
                                SWG_resource_types::FRUIT_FLOWERS_YAVIN4,
                                std::vector<resource_class_node>()
                            },
                            resource_class_node
                            {
                                SWG_resource_classes::FRUIT_FRUITS,
                                SWG_resource_types::FRUIT_FRUITS_CORELLIA,
                                SWG_resource_types::FRUIT_FRUITS_YAVIN4,
                                std::vector<resource_class_node>()
                            }
                        }
                    },
                    resource_class_node
                    {
                        SWG_resource_classes::VEGETABLE,
                        skip_type,
                        skip_type,
                        std::vector<resource_class_node>
                        {
                            resource_class_node
                            {
                                SWG_resource_classes::VEGETABLE_BEANS,
                                SWG_resource_types::VEGETABLE_BEANS_CORELLIA,
                                SWG_resource_types::VEGETABLE_BEANS_YAVIN4,
                                std::vector<resource_class_node>()
                            },
                            resource_class_node
                            {
                                SWG_resource_classes::VEGETABLE_FUNGI,
                                SWG_resource_types::VEGETABLE_FUNGI_CORELLIA,
                                SWG_resource_types::VEGETABLE_FUNGI_YAVIN4,
                                std::vector<resource_class_node>()
                            },
                            resource_class_node
                            {
                                SWG_resource_classes::VEGETABLE_GREENS,
                                SWG_resource_types::VEGETABLE_GREENS_CORELLIA,
                                SWG_resource_types::VEGETABLE_GREENS_YAVIN4,
                                std::vector<resource_class_node>()
                            },
                                resource_class_node
                            {
                                SWG_resource_classes::VEGETABLE_TUBERS,
                                SWG_resource_types::VEGETABLE_TUBERS_CORELLIA,
                                SWG_resource_types::VEGETABLE_TUBERS_YAVIN4,
                                std::vector<resource_class_node>()
                            }
                        }
                    }
                }
            }
        }
    };
    return temp;
}

std::vector<resource_class_node> ResourceTree::createFloraStructuralChildrenNodes()
{
    std::vector<resource_class_node> temp =
    {
        std::vector<resource_class_node>
        {
            resource_class_node
            {
                SWG_resource_classes::WOOD,
                skip_type,
                skip_type,
                std::vector<resource_class_node>
                {
                    resource_class_node
                    {
                        SWG_resource_classes::WOOD_DECIDUOUS,
                        SWG_resource_types::WOOD_DECIDUOUS_CORELLIA,
                        SWG_resource_types::WOOD_DECIDUOUS_YAVIN4,
                        std::vector<resource_class_node>()
                    },
                    resource_class_node
                    {
                        SWG_resource_classes::SOFTWOOD,
                        SWG_resource_types::SOFTWOOD_CONIFER_CORELLIA,
                        SWG_resource_types::SOFTWOOD_CONIFER_YAVIN4,
                        std::vector<resource_class_node>
                        {
                            resource_class_node
                            {
                                SWG_resource_classes::SOFTWOOD_EVERGREEN,
                                SWG_resource_types::SOFTWOOD_EVERGREEN_CORELLIA,
                                SWG_resource_types::SOFTWOOD_EVERGREEN_YAVIN4,
                                std::vector<resource_class_node>()
                            }
                        }
                    }
                }
            }
        }
    };
    return temp;
}

std::vector<resource_class_node> ResourceTree::createCreatureFoodChildrenNodes()
{
    std::vector<resource_class_node> temp =
    {
        std::vector<resource_class_node>
        {
            resource_class_node
            {
                SWG_resource_classes::MEAT,
                skip_type,
                skip_type,
                std::vector<resource_class_node>
                {
                    resource_class_node
                    {
                        SWG_resource_classes::MEAT_AVIAN,
                        SWG_resource_types::MEAT_AVIAN_CORELLIA,
                        SWG_resource_types::MEAT_AVIAN_YAVIN4,
                        std::vector<resource_class_node>()
                    },
                    resource_class_node
                    {
                        SWG_resource_classes::MEAT_CARNIVORE,
                        SWG_resource_types::MEAT_CARNIVORE_CORELLIA,
                        SWG_resource_types::MEAT_CARNIVORE_YAVIN4,
                        std::vector<resource_class_node>()
                    },
                    resource_class_node
                    {
                        SWG_resource_classes::MEAT_DOMESTICATED,
                        SWG_resource_types::MEAT_DOMESTICATED_CORELLIA,
                        SWG_resource_types::MEAT_DOMESTICATED_YAVIN4,
                        std::vector<resource_class_node>()
                    },
                    resource_class_node
                    {
                        SWG_resource_classes::MEAT_EGG,
                        SWG_resource_types::MEAT_EGG_CORELLIA,
                        SWG_resource_types::MEAT_EGG_YAVIN4,
                        std::vector<resource_class_node>()
                    },
                    resource_class_node
                    {
                        SWG_resource_classes::MEAT_HERBIVORE,
                        SWG_resource_types::MEAT_HERBIVORE_CORELLIA,
                        SWG_resource_types::MEAT_HERBIVORE_YAVIN4,
                        std::vector<resource_class_node>()
                    },
                    resource_class_node
                    {
                        SWG_resource_classes::MEAT_INSECT,
                        SWG_resource_types::MEAT_INSECT_CORELLIA,
                        SWG_resource_types::MEAT_INSECT_YAVIN4,
                        std::vector<resource_class_node>()
                    },
                    resource_class_node
                    {
                        SWG_resource_classes::MEAT_REPTILLIAN,
                        SWG_resource_types::MEAT_REPTILIAN_CORELLIA,
                        SWG_resource_types::MEAT_REPTILIAN_YAVIN4,
                        std::vector<resource_class_node>()
                    },
                    resource_class_node
                    {
                        SWG_resource_classes::SEAFOOD,
                        skip_type,
                        skip_type,
                        std::vector<resource_class_node>
                        {
                            resource_class_node
                            {
                                SWG_resource_classes::SEAFOOD_CRUSTACEAN,
                                SWG_resource_types::SEAFOOD_CRUSTACEAN_CORELLIA,
                                SWG_resource_types::SEAFOOD_CRUSTACEAN_YAVIN4,
                                std::vector<resource_class_node>()
                            },
                            resource_class_node
                            {
                                SWG_resource_classes::SEAFOOD_FISH,
                                SWG_resource_types::SEAFOOD_FISH_CORELLIA,
                                SWG_resource_types::SEAFOOD_FISH_YAVIN4,
                                std::vector<resource_class_node>()
                            },
                            resource_class_node
                            {
                                SWG_resource_classes::SEAFOOD_MOLLUSK,
                                SWG_resource_types::SEAFOOD_MOLLUSK_CORELLIA,
                                SWG_resource_types::SEAFOOD_MOLLUSK_YAVIN4,
                                std::vector<resource_class_node>()
                            }
                        }
                    },
                    resource_class_node
                    {
                        SWG_resource_classes::MEAT_WILD,
                        SWG_resource_types::MEAT_WILD_CORELLIA,
                        SWG_resource_types::MEAT_WILD_YAVIN4,
                        std::vector<resource_class_node>()
                    },
                }
            },
            resource_class_node
            {
                SWG_resource_classes::MILK,
                skip_type,
                skip_type,
                std::vector<resource_class_node>
                {
                    resource_class_node
                    {
                        SWG_resource_classes::MILK_DOMESTICATED,
                        SWG_resource_types::MILK_DOMESTICATED_CORELLIA,
                        SWG_resource_types::MILK_DOMESTICATED_YAVIN4,
                        std::vector<resource_class_node>()
                    },
                    resource_class_node
                    {
                        SWG_resource_classes::MILK_WILD,
                        SWG_resource_types::MILK_WILD_CORELLIA,
                        SWG_resource_types::MILK_WILD_YAVIN4,
                        std::vector<resource_class_node>()
                    }
                }
            }
        }
    };
    return temp;
}

std::vector<resource_class_node> ResourceTree::createCreatureStructuralChildrenNodes()
{
    std::vector<resource_class_node> temp =
    {
        std::vector<resource_class_node>
        {
            resource_class_node
            {
                SWG_resource_classes::BONE,
                SWG_resource_types::BONE_MAMMAL_CORELLIA,
                SWG_resource_types::BONE_MAMMAL_YAVIN4,
                std::vector<resource_class_node>
                {
                    resource_class_node
                    {
                        SWG_resource_classes::BONE_AVIAN,
                        SWG_resource_types::BONE_AVIAN_CORELLIA,
                        SWG_resource_types::BONE_AVIAN_YAVIN4,
                        std::vector<resource_class_node>()
                    },
                    resource_class_node
                    {
                        SWG_resource_classes::BONE_HORN,
                        SWG_resource_types::BONE_HORN_CORELLIA,
                        SWG_resource_types::BONE_HORN_YAVIN4,
                        std::vector<resource_class_node>()
                    }
                }
            },
            resource_class_node
            {
                SWG_resource_classes::HIDE,
                skip_type,
                skip_type,
                std::vector<resource_class_node>
                {
                    resource_class_node
                    {
                        SWG_resource_classes::HIDE_BRISTLEY,
                        SWG_resource_types::HIDE_BRISTLEY_CORELLIA,
                        SWG_resource_types::HIDE_BRISTLEY_YAVIN4,
                        std::vector<resource_class_node>()
                    },
                    resource_class_node
                    {
                        SWG_resource_classes::HIDE_LEATHERY,
                        SWG_resource_types::HIDE_LEATHERY_CORELLIA,
                        SWG_resource_types::HIDE_LEATHERY_YAVIN4,
                        std::vector<resource_class_node>()
                    },
                    resource_class_node
                    {
                        SWG_resource_classes::HIDE_SCALEY,
                        SWG_resource_types::HIDE_SCALEY_CORELLIA,
                        SWG_resource_types::HIDE_SCALEY_YAVIN4,
                        std::vector<resource_class_node>()
                    },
                    resource_class_node
                    {
                        SWG_resource_classes::HIDE_WOOLY,
                        SWG_resource_types::HIDE_WOOLY_CORELLIA,
                        SWG_resource_types::HIDE_WOOLY_YAVIN4,
                        std::vector<resource_class_node>()
                    }
                }
            }
        }
    };
    return temp;
}
