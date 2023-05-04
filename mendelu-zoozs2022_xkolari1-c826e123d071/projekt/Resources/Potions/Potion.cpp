//
// Created by root on 06.12.2022.
//

#include "Potion.h"

Potion::Potion(std::string name, int bonus) {
    m_name = name;
    m_bonus = bonus;
}

std::string Potion::getName() {
    return m_name;
}

int Potion::getBonus() {
    return m_bonus;
}