//Needs more work.

#include "binarySearchTree.h"

TreeNode::TreeNode(const Item& item) {
    data = item;
    left = nullptr;
    right = nullptr;
}

InventoryBST::InventoryBST() {
    root = nullptr;
}

InventoryBST::~InventoryBST() {
    delete root;
}

void InventoryBST::insert(const Item &item) {

}

std::vector<Item> InventoryBST::traverseBFS() const {
    // Added return statement to fix compilation error: function must return a value
    return std::vector<Item>();
}

std::vector<Item> InventoryBST::traverseDFS() const {
    // Added return statement to fix compilation error: function must return a value
    return std::vector<Item>();
}
