//
// Created by xkosina on 03.12.2022.
//

#ifndef ZOOPROJEKT2022_TILE_H
#define ZOOPROJEKT2022_TILE_H

#include <iostream>
#include <vector>
#include "Monster.h"
#include "Trap.h"
#include "Item.h"
class Tile {
private:
std::string m_symbol;
//bool m_isThereWarrior;
std::vector<Trap*>m_trap;
std::vector<Monster*>m_monster;
std::vector<Item*>m_item;
public:
    Tile(std::string symbol, /*bool isThereWarrior,*/std::vector<Trap*>trap, std::vector<Monster*>monster,std::vector<Item*>m_item );
    void setSymbol(std::string symbol);
    std::string getSymbol();
    bool getIsThereWarrior();
    void setIsThereWarrior(bool isThereWarrior);

};


#endif //ZOOPROJEKT2022_TILE_H
