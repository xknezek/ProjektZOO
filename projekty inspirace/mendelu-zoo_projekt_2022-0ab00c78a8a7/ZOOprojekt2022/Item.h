//
// Created by xkosina on 03.12.2022.
//

#ifndef ZOOPROJEKT2022_ITEM_H
#define ZOOPROJEKT2022_ITEM_H
#include <iostream>

class Item {
private:
    std::string m_nameOfItem;
    int m_numberOfItem;
public:
    Item(std::string nameOfItem,int numberOfItem);
    std::string getNameOfItem();
    int getNumberOfItem();
};


#endif //ZOOPROJEKT2022_ITEM_H
