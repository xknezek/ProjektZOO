//
// Created by xkosina on 03.12.2022.
//

#include "Map.h"
Map::Map(int width, int height) {
    m_width=width;
    m_height=height;


}

Tile *Map::getTile(int x, int y) {return 0;}

void Map::setTile(int x, int y, Tile *tile) {}

void Map::printMap(Position *position) {}

std::vector<std::vector<Tile*>> Map::getMap()
{
    return m_map;
}

std::string Map::getOrientation() {
    return 0;
}
