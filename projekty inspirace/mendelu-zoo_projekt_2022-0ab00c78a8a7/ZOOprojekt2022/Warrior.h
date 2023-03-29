//
// Created by xkosina on 03.12.2022.
//

#ifndef ZOOPROJEKT2022_WARRIOR_H
#define ZOOPROJEKT2022_WARRIOR_H
#include "Inventory.h"
#include "Trap.h"
#include "Monster.h"
#include "Position.h"
#include <iostream>
class Warrior {
private:
std::string m_name;
    int m_health;
    Inventory* m_inventory;
    Position* m_position;
public:
    Warrior(std::string name, int health);
    Warrior(std::string name, int health, Inventory*inventory, Position*position);
    std::string getName();
    int getHealth();
    Inventory*getInventory;
    void setNewHealthAfterFightWithMonster(Monster*monsterHealth);
    int getNewHealth();
    void pickItem(Item*item);
    void fightMonstrum(Monster*monster);
    void activateTrap(Trap*trap);
    void setNewHealthAfterActivatingTrap(Trap*trapDamage);
    void printInfoAboutWarrior();
    void moveWarrior(Position*moveTo);
    Position*getPosition();

};


#endif //ZOOPROJEKT2022_WARRIOR_H
