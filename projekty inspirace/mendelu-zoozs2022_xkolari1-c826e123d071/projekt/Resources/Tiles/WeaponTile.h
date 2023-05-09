

#ifndef PROJEKT_WEAPONTILE_H
#define PROJEKT_WEAPONTILE_H


#include "../GameTile.h"

class WeaponTile : public GameTile {
private:
    char m_shortcut = 'W';
    std::string m_name;
    int m_damage;
    Weapon* m_weapon;
public:
    WeaponTile(std::string name, int damage);
    std::string getName();
    int getDamage();
    char render();
    GameTile* interact(Player* player);

};


#endif //PROJEKT_WEAPONTILE_H
