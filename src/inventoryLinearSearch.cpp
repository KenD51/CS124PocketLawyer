#include "inventoryLinearSearch.h"

InventoryAlgorithms::InventoryAlgorithms() {
  
}

InventoryAlgorithms::~InventoryAlgorithms() {

}

int InventoryAlgorithms::linearSearch(const std::vector<Item>& inventory, const std::string& targetId) {
  for (int i = 0; i < inventory.size(); i++) {
    if (inventory[i].getId() == targetId) {
      return i; // return index if found
    }
  }
  return -1; // return -1 if not found
}

//Hey folk i used bubble sort here for simplicity from like my old notes, but we can easily swap it out for a more efficient sorting algorithm like  mergesort.

void InventoryAlgorithms::sortInventoryByID(std::vector<Item>& inventory) {
  // Simple bubble sort by ID
  for (int i = 0; i < inventory.size(); i++) {
    for (int j = 0; j < inventory.size() - i - 1; j++) {
      if (inventory[j].getId() > inventory[j + 1].getId()) {
        Item temp = inventory[j];
        inventory[j] = inventory[j + 1];
        inventory[j + 1] = temp;
      }
    }
  }
}

void InventoryAlgorithms::sortInventoryByQuantity(std::vector<Item>& inventory) {
  // Simple bubble sort by quantity
  for (int i = 0; i < inventory.size(); i++) {
    for (int j = 0; j < inventory.size() - i - 1; j++) {
      if (inventory[j].getQuantity() > inventory[j + 1].getQuantity()) {
        Item temp = inventory[j];
        inventory[j] = inventory[j + 1];
        inventory[j + 1] = temp;
      }
    }
  }
}
