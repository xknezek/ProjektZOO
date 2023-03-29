//
// Created by xkosina on 03.12.2022.
//

#include "Trap.h"
Trap::Trap(std::string name, int damage) {
    m_name = name;
    m_damage = damage;
}

std::string Trap::getName() {
    return m_name;
}

int Trap::getDamage() {
    return m_damage;
}

void Trap::printInfoAboutTrap() {
    std::cout << "Name of trap: " << m_name << " , its damage: " << m_damage << std::endl;
}