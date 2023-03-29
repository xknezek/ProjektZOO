//
// Created by xkosina on 03.12.2022.
//

#ifndef ZOOPROJEKT2022_ROOM_H
#define ZOOPROJEKT2022_ROOM_H
#include <vector>
#include <iostream>
#include "Monster.h"
#include "Map.h"
class Room: public Map {
private:
    bool m_isVisible;

public:
    Room(int width, int height, bool isVisible);
    void addMonstrumToRoom(Monster*monster);
};


#endif //ZOOPROJEKT2022_ROOM_H
