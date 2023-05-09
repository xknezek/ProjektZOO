

#ifndef PROJEKT_POTIONTILE_H
#define PROJEKT_POTIONTILE_H


#include "../GameTile.h"

class PotionTile : public GameTile {
private:
    char m_shortcut = 'P';
    std::string m_name;
    int m_bonus;
    Potion* m_potion;
public:
    PotionTile(std::string name, int bonus);
    std::string getName();
    int getBonus();
    char render();
    GameTile *interact(Player *player);


};


#endif //PROJEKT_POTIONTILE_H
