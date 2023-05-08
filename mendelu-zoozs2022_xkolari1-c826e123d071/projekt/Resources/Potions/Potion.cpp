//
// Created by root on 06.12.2022.
//

#include "Potion.h"

// Konstruktor třídy Potion
Potion::Potion(std::string name, int bonus) {
    m_name = name;
    m_bonus = bonus;
}

// Metoda getName() vrací název lektvaru
std::string Potion::getName() {
    return m_name;
}

// Metoda getBonus() vrací bonus, který hráč získá po vypití lektvaru
int Potion::getBonus() {
    return m_bonus;
}