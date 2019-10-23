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

void ResourceTree::debugTestFindClassNode() const
{
    for (int i = static_cast<int>(SWG_resource_classes::ENERGY); i <= static_cast<int>(SWG_resource_classes::ENERGY_RENEWABLE_UNLIMITED_WIND); i++)
    {
        SWG_resource_classes resource_class = static_cast<SWG_resource_classes>(i);
        const resource_class_node* node = getResourceClassNode(resource_class);
        if (node != nullptr)
        {
            std::cout << "node class name: " << SWGResourceClassString(node->resource_class) << "\n";
            std::cout << "node class pretty name: " << SWGResourceClassStringPretty(node->resource_class) << "\n\n";
        }
        else
        {
            std::cout << "class failed to be found: " << SWGResourceClassStringPretty(resource_class) << "\n\n";
        }
    }

    const resource_class_node* node = getResourceClassNode(SWG_resource_classes::INORGANIC);
    std::cout << "node class name: " << SWGResourceClassString(node->resource_class) << "\n";
    std::cout << "node class pretty name: " << SWGResourceClassStringPretty(node->resource_class) << "\n\n";
    
    node = getResourceClassNode(SWG_resource_classes::CHEMICAL);
    std::cout << "node class name: " << SWGResourceClassString(node->resource_class) << "\n";
    std::cout << "node class pretty name: " << SWGResourceClassStringPretty(node->resource_class) << "\n\n";

    node = getResourceClassNode(SWG_resource_classes::WATER);
    std::cout << "node class name: " << SWGResourceClassString(node->resource_class) << "\n";
    std::cout << "node class pretty name: " << SWGResourceClassStringPretty(node->resource_class) << "\n\n";

    node = getResourceClassNode(SWG_resource_classes::MINERAL);
    std::cout << "node class name: " << SWGResourceClassString(node->resource_class) << "\n";
    std::cout << "node class pretty name: " << SWGResourceClassStringPretty(node->resource_class) << "\n\n";

    node = getResourceClassNode(SWG_resource_classes::GAS);
    std::cout << "node class name: " << SWGResourceClassString(node->resource_class) << "\n";
    std::cout << "node class pretty name: " << SWGResourceClassStringPretty(node->resource_class) << "\n\n";
}

const resource_class_node* ResourceTree::findClassRecursive(SWG_resource_classes resource_class, const resource_class_node* current_node) const
{
    //base cases are current node has no children and this node isn't what we're looking for, or it is
    const resource_class_node* result = nullptr;

    //so check this node first, then call this method on children one by one
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

//private
void ResourceTree::createRootNode()
{
    root = resource_class_node
    {
        SWG_resource_classes::ALUMINUM,
        SWG_resource_types::ALUMINUM_AGRINIUM,
        SWG_resource_types::ALUMINUM_AGRINIUM,
        std::vector<resource_class_node>
        {
            createEnergyNode(),
            createInorganicNode(),
            createOrganicNode()
        }
    };
}

resource_class_node ResourceTree::createEnergyNode()
{
    resource_class_node temp = resource_class_node
    {
        SWG_resource_classes::ENERGY,
        SWG_resource_types::ALUMINUM_AGRINIUM,
        SWG_resource_types::ALUMINUM_AGRINIUM,
        std::vector<resource_class_node>
        {
            resource_class_node
            {
                SWG_resource_classes::ENERGY_RENEWABLE,
                SWG_resource_types::ALUMINUM_AGRINIUM,
                SWG_resource_types::ALUMINUM_AGRINIUM,
                std::vector<resource_class_node>
                {
                    resource_class_node
                    {
                        SWG_resource_classes::ENERGY_RENEWABLE_UNLIMITED,
                        SWG_resource_types::ALUMINUM_AGRINIUM,
                        SWG_resource_types::ALUMINUM_AGRINIUM,
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
                        SWG_resource_types::ENERGY_RENEWABLE_SITE_LIMITED_GEOTHERMAL_YAVIN4,
                        std::vector<resource_class_node>()
                    }
                }
            }
        }
    };
    return temp;
}

resource_class_node ResourceTree::createInorganicNode()
{
    resource_class_node temp = resource_class_node
    {
        SWG_resource_classes::INORGANIC,
        SWG_resource_types::ALUMINUM_AGRINIUM,
        SWG_resource_types::ALUMINUM_AGRINIUM,
        std::vector<resource_class_node>
        {
            resource_class_node
            {
                SWG_resource_classes::CHEMICAL,
                SWG_resource_types::ALUMINUM_AGRINIUM,
                SWG_resource_types::ALUMINUM_AGRINIUM,
                //vector here
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
                SWG_resource_types::ALUMINUM_AGRINIUM,
                SWG_resource_types::ALUMINUM_AGRINIUM,
                //vector here
            },
            resource_class_node
            {
                SWG_resource_classes::GAS,
                SWG_resource_types::ALUMINUM_AGRINIUM,
                SWG_resource_types::ALUMINUM_AGRINIUM,
                //vector here
            }
        }
    };
    return temp;
}

resource_class_node ResourceTree::createOrganicNode()
{
    return resource_class_node();
}
