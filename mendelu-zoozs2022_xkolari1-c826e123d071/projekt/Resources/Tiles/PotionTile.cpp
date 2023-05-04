//
// Created by root on 06.12.2022.
//

#include "PotionTile.h"
#include "FreeSpace.h"

PotionTile::PotionTile(std::string name, int bonus) {
    m_name = name;
    m_bonus = bonus;
    m_is_passthrough = true;
    m_is_interactable = true;
    m_potion = new Potion(name, bonus);
}

std::string PotionTile::getName() {
    return m_name;
}

int PotionTile::getBonus() {
    return m_bonus;
}

char PotionTile::render() {
    return m_shortcut;
}

GameTile *PotionTile::interact(Player *player) {
    player->addPotion(m_potion);
    return new FreeSpace();
}