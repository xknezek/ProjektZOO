//
// Created by xkosina on 03.12.2022.
//

#include "Warrior.h"
Warrior::Warrior(std::string name, int health) {
    m_name = name;
    m_health = health;
    m_inventory = nullptr;
    m_position = nullptr;
}
Warrior::Warrior(std::string name, int health, Inventory *inventory, Position*position) {
    m_name = name;
    m_health = health;
    m_inventory = inventory;
    m_position = position;
}
std::string Warrior::getName() {
    return m_name;
}
int Warrior::getHealth() {
    return m_health;
}
//Warrior::getInventory{
//
//}

void Warrior::setNewHealthAfterFightWithMonster(Monster *monsterHealth) {}

int Warrior::getNewHealth() {
    return m_health;
}

void Warrior::pickItem(Item *item) {}

void Warrior::fightMonstrum(Monster *monster) {}

void Warrior::activateTrap(Trap*trap) {}

void Warrior::setNewHealthAfterActivatingTrap(Trap *trapDamage) {}

void Warrior::printInfoAboutWarrior() {
std::cout << "Name: "<<getName();
std::cout << "Health: "<<getHealth();
std::cout << "In inventory: "<<getInventory;
std::cout << "Position: "<<getInventory;
}

void Warrior::moveWarrior(Position *moveTo) {}

Position *Warrior::getPosition()
{
    return 0;
}


