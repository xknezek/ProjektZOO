//
// Created by xkosina on 03.12.2022.
//

#include "Inventory.h"
Inventory::Inventory(std::vector<Item*> items, int capacity) {
    m_items = items;
    m_capacity = capacity;
}

void Inventory::showItems() {
    for (int i = 0; i < m_items.size(); ++i) {
        std::cout << "Items: " << m_items.at(i)->getNameOfItem();
    }
}

void Inventory::addItem(Item *item) {
    if(m_capacity <= 0){
        std::cerr << "Capacity is insufficient!" << std::endl;
    }
    m_items.push_back(item);
}

int Inventory::getCapacity() {
    return m_capacity;
}

void Inventory::setNewCapacity(int capacity) {
    m_capacity = capacity;
}

void Inventory::deleteItem(Item *item) {
    for (int i = 0; i < m_items.size(); ++i) {
        if(m_items.at(i)->getNameOfItem() != item->getNameOfItem()){
            std::cerr << "You cant delete this item" << std::endl;
        } else {
            m_items.at(i)->getNameOfItem().erase();
        }

    }
}