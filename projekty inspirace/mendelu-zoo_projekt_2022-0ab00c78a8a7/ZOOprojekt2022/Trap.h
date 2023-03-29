//
// Created by xkosina on 03.12.2022.
//

#ifndef ZOOPROJEKT2022_TRAP_H
#define ZOOPROJEKT2022_TRAP_H

#include <iostream>
class Trap {
private:
    std::string m_name;
    int m_damage;
public:
    Trap(std::string name, int damage);
    std::string getName();
    int getDamage();
    void printInfoAboutTrap();
};


#endif //ZOOPROJEKT2022_TRAP_H
