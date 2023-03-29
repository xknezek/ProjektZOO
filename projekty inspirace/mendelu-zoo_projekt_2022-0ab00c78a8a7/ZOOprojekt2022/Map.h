//
// Created by xkosina on 03.12.2022.
//

#ifndef ZOOPROJEKT2022_MAP_H
#define ZOOPROJEKT2022_MAP_H
#include "Tile.h"
#include "Position.h"
#include <iostream>
#include <vector>
class Map {
protected:
    int m_width;
    int m_height;
    std::vector<std::vector<Tile*>>m_map;
public:
Map(int width, int height);
Tile*getTile(int x, int y);
void setTile(int x , int y, Tile*tile);
void printMap(Position*position);
virtual std::string getOrientation();

std::vector<std::vector<Tile*>> getMap();
};


#endif //ZOOPROJEKT2022_MAP_H
