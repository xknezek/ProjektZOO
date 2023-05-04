//
// Created by root on 29.11.2022.
//

#ifndef PROJEKT_COUNTDOWN_H
#define PROJEKT_COUNTDOWN_H


#include "../GameTile.h"

class CountDown : public GameTile {
private:
    int m_count = 3;
public:
    CountDown();
    char render();
    GameTile* interact(Player* player);
};


#endif //PROJEKT_COUNTDOWN_H
