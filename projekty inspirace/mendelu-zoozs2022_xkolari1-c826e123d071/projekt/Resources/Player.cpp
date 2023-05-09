

#include "Player.h"

Player::Player(int x, int y) {
    m_location_x = x;
    m_location_y = y;
}

Player::Player() {}

int Player::getLocationX() {
    return m_location_x;
}

int Player::getLocationY() {
    return m_location_y;
}

int Player::getHealth() {
    return m_health;
}

int Player::getDamage() {
    return m_damage;
}

char Player::render() {
    return 'H';
}

void Player::setLocationX(int x) {
    m_location_x = x;
}

void Player::setLocationY(int y) {
    m_location_y = y;
}

void Player::setHealth(int health) {
    m_health = health;
}

void Player::setDamage(int damage) {
    m_damage = damage;
}

void Player::addWeapon(Weapon *weapon) {
    m_weapons.push_back(weapon);
}

void Player::setActiveWeapon(int id) {
    m_active_weapon_id = id;
}

int Player::getActiveWeaponID() {
    return m_active_weapon_id;
}

Weapon *Player::getActiveWeapon() {
    return m_weapons.at(getActiveWeaponID());
}

void Player::addPotion(Potion *potion) {
    m_potions.push_back(potion);
}

void Player::usePotion(int id) {
    //Todo logika pouzivani potionu

    //Smazani pouziteho potionu
    m_potions.erase(m_potions.begin()+id);
}

std::vector<Weapon *> Player::getWeaponCollection() {
    return m_weapons;
}

std::vector<Potion *> Player::getPotionCollection() {
    return m_potions;
}
