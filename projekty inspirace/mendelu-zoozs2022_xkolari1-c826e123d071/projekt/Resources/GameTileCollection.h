

#ifndef PROJEKT_GAMETILECOLLECTION_H
#define PROJEKT_GAMETILECOLLECTION_H


#include <vector>
#include "GameTile.h"

class GameTileCollection {
private:
    std::vector<std::vector<GameTile*>> m_collection;
public:
    GameTileCollection(std::vector<std::vector<GameTile*>> collection);
    GameTile* getTileAt(int x, int y);
    void setTileAt(int x, int y, GameTile* gameTile);
};


#endif //PROJEKT_GAMETILECOLLECTION_H
