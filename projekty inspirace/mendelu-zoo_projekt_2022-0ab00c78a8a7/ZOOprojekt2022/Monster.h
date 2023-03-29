//
// Created by xkosina on 03.12.2022.
//

#ifndef ZOOPROJEKT2022_MONSTER_H
#define ZOOPROJEKT2022_MONSTER_H

#include <iostream>
class Monster {
private:
    std::string m_name;
    int m_health;
    bool m_isVisible;
public:
    Monster(std::string name, int health, bool isVisible)  ;
    int getHealthOfMonstrum();
    std::string getNameOfMonstrum();
    void printInfoAboutMonster();
};


#endif //ZOOPROJEKT2022_MONSTER_H
