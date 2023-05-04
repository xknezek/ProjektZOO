//
// Created by root on 06.12.2022.
//

#include "WeaponTile.h"
#include "FreeSpace.h"

WeaponTile::WeaponTile(std::string name, int damage) {
    m_name = name;
    m_damage = damage;
    m_is_passthrough = true;
    m_is_interactable = true;
    m_weapon = new Weapon(name, damage);
}

std::string WeaponTile::getName() {
    return m_name;
}

int WeaponTile::getDamage() {
    return m_damage;
}

char WeaponTile::render() {
    return m_shortcut;
}

GameTile *WeaponTile::interact(Player *player) {
    player->addWeapon(m_weapon);
    return new FreeSpace();
}