//
// Created by root on 06.12.2022.
//

#ifndef PROJEKT_POTION_H
#define PROJEKT_POTION_H

#include <string>

class Potion {
//virtual
private:
    std::string m_name;
    int m_bonus;
public:
    Potion(std::string name, int bonus);
    std::string getName();
    int getBonus();
};


#endif //PROJEKT_POTION_H
