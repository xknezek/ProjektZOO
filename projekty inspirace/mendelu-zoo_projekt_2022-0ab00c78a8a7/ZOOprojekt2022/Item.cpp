//
// Created by xkosina on 03.12.2022.
//

#include "Item.h"
Item::Item(std::string nameOfItem, int numberOfItem) {
    m_nameOfItem = nameOfItem;
    m_numberOfItem = numberOfItem;
}

std::string Item::getNameOfItem() {
    return  m_nameOfItem;
}

int Item::getNumberOfItem() {
    return m_numberOfItem;
};