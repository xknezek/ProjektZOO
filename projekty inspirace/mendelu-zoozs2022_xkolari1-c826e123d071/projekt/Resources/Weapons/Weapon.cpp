//
// Created by root on 06.12.2022.
//

#include "Weapon.h"

Weapon::Weapon(std::string name, int damage) {
    m_name = name;
    m_damage = damage;
}

std::string Weapon::getName() {
    return m_name;
}

int Weapon::getDamage() {
    return m_damage;
}
