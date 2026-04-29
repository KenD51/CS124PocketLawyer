cmake_minimum_required(VERSION 3.5)
project(CS124InventoryManagement)

set(CMAKE_CXX_STANDARD 20)


add_executable(CS124InventoryManagement
        linkedList.h
        linkedList.cpp
        main.cpp
        itemType.h
        restockManager.h
        inventoryLinearSearch.h
        stockAlertManager.h
        csvFunctions.h
        binarySearchTree.cpp
        binarySearchTree.h
        inventoryLinearSearch.h
        inventoryLinearSearch.cpp
        redBlackTree.cpp
        redBlackTree.h
        restockManager.cpp
        restockManager.h
        sortingAlgo.cpp
        sortingAlgo.h
        stockAlertManager.cpp
        stockAlertManager.h)
