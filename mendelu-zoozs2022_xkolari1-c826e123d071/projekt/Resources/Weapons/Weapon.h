//
// Created by root on 06.12.2022.
//

#ifndef PROJEKT_WEAPON_H
#define PROJEKT_WEAPON_H


#include <string>

class Weapon {
//Virtual
private:
    std::string m_name;
    int m_damage;
public:
    Weapon(std::string name, int damage);
    std::string getName();
    int getDamage();
};


#endif //PROJEKT_WEAPON_H
