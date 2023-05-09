

#ifndef PROJEKT_PLAYER_H
#define PROJEKT_PLAYER_H

#include <vector>
#include "Weapons/Weapon.h"
#include "Potions/Potion.h"

class Player {
private:
    int m_location_x, m_location_y, m_active_weapon_id = 0;
    int m_health = 100;
    int m_damage = 50;
    std::vector<Weapon*> m_weapons;
    std::vector<Potion*> m_potions;
public:
    int deleteAfterTest = 0;
    Player(int x, int y);
    Player();
    int getLocationX();
    int getLocationY();
    void setLocationX(int x);
    void setLocationY(int y);
    char render();

    int getHealth();
    int getDamage();
    void setHealth(int health);
    void setDamage(int damage);

    void addWeapon(Weapon* weapon);
    void setActiveWeapon(int id);
    Weapon* getActiveWeapon();
    int getActiveWeaponID();

    void addPotion(Potion* potion);
    void usePotion(int id);

    std::vector<Weapon*> getWeaponCollection();
    std::vector<Potion*> getPotionCollection();
};


#endif //PROJEKT_PLAYER_H
