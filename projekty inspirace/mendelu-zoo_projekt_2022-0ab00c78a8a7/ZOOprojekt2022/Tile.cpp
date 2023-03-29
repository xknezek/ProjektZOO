//
// Created by xkosina on 03.12.2022.
//

#include "Tile.h"
Tile::Tile(std::string symbol, /*bool isThereWarrior,*/ std::vector<Trap *> trap, std::vector<Monster *> monster,
           std::vector<Item *> _item) {
    m_symbol=symbol;
    m_trap=trap;
    m_monster=monster;
    m_item=_item;
}

void Tile::setSymbol(std::string symbol) {}

std::string Tile::getSymbol()
{
    return m_symbol;
}

bool Tile::getIsThereWarrior()
{
    return 0;
}

void Tile::setIsThereWarrior(bool isThereWarrior) {}