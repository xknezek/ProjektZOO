//
// Created by xkosina on 03.12.2022.
//

#include "Monster.h"
Monster::Monster(std::string name, int health, bool isVisible) {
    m_name = name;
    m_health = health;
    m_isVisible = isVisible;
}

int Monster::getHealthOfMonstrum() {
    return m_health;
}

std::string Monster::getNameOfMonstrum() {
    return m_name;
}

void Monster::printInfoAboutMonster() {
    std::cout << "Name of monster: " << m_name << " , health of moster: " << m_health
    << " , monster is visible" << m_isVisible << std::endl;
}