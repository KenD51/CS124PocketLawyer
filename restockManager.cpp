#include "restockManager.h"

// --- RestockTask --- //
RestockTask::RestockTask(const std::string &id, const std::string &itemName, int quantityNeeded, int urgencyScore)
    : id(id), itemName(itemName), quantityNeeded(quantityNeeded), urgencyScore(urgencyScore) {}

const std::string &RestockTask::getId() const { return id; }
const std::string &RestockTask::getItemName() const { return itemName; }
int RestockTask::getQuantityNeeded() const { return quantityNeeded; }
int RestockTask::getUrgencyScore() const { return urgencyScore; }

// Operator overlord for comparing urgencies in the priority queue.
bool operator<(const RestockTask& a, const RestockTask& b) {
    return a.getUrgencyScore() < b.getUrgencyScore();
}
// --- Restock Task End --- //

// --- Constructors and Destructos --- //
RestockManager::RestockManager() {}
RestockManager::~RestockManager() {}
// --- Constructors and Destructors END --- //

// --- Restock Manager --- //
bool RestockManager::isEmpty() const {
  return restockQueue.empty();
}

int RestockManager::calculateUrgency(const Item &item, int targetQuantity) const {

}
void RestockManager::addRestockTask(const Item &item, int targetQuantity) {

}
RestockTask RestockManager::popNextRestockTask() {

}
RestockTask RestockManager::peekNextRestockTask() const{

}
std::vector<RestockTask> RestockManager::generatePriorityList() const {

}

