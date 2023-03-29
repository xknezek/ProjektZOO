//
// Created by xkosina on 03.12.2022.
//

#ifndef ZOOPROJEKT2022_INVENTORY_H
#define ZOOPROJEKT2022_INVENTORY_H
#include "Item.h"
#include <vector>
#include <iostream>
class Inventory {
private:
    std::vector<Item*> m_items;
    int m_capacity;
public:
    Inventory(std::vector<Item*> items, int capacity);
    void showItems();
    void addItem(Item* item);
    int getCapacity();
    void setNewCapacity(int capacity) ;
    void deleteItem(Item* item);


};


#endif //ZOOPROJEKT2022_INVENTORY_H
