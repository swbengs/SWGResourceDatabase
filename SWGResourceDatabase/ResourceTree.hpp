#pragma once

//std lib includes
#include <vector>

//other includes
#include "constantsV1.hpp"

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
Description: Tree to represent SWG resource tree(not an actual tree implementation though)
*/

struct node_items
{
    int resource_enum;
    bool isClass;
};

struct resource_class_node
{
    SWG_resource_classes resource_class;
    SWG_resource_types start_type; //used if this is an end node for the class IE steel, copper
    SWG_resource_types end_type; //last resource type of the parent
    std::vector<resource_class_node> children; //children that are also resource classes only
};

//class delcaration
class ResourceTree
{
public:
    ResourceTree();

    const resource_class_node* getRootNode() const;
    const resource_class_node* getResourceClassNode(SWG_resource_classes resource_class) const;
    int getNodeItemCount(const resource_class_node* node) const;
    std::vector<node_items> getNodeItems(const resource_class_node* node) const;

    void debugTestFindClassNode() const;
    void debugTestFindType() const;

private:
    static const SWG_resource_types skip_type = SWG_resource_types::SWG_resource_types_count;
    resource_class_node root;

    const resource_class_node* findClassRecursive(SWG_resource_classes resource_class, const resource_class_node* current_node) const;

    void createRootNode();
    resource_class_node createEnergyNode();
    resource_class_node createInorganicNode();
    std::vector<resource_class_node> createChemicalChildrenNodes();
    std::vector<resource_class_node> createMineralChildrenNodes();
    std::vector<resource_class_node> createGasChildrenNodes();
    resource_class_node createOrganicNode();
    std::vector<resource_class_node> createFloraFoodChildrenNodes();
    std::vector<resource_class_node> createFloraStructuralChildrenNodes();
    std::vector<resource_class_node> createCreatureFoodChildrenNodes();
    std::vector<resource_class_node> createCreatureStructuralChildrenNodes();
};


