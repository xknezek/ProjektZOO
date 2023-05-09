

#ifndef PROJEKT_GAMETILECOLLECTIONFACTORY_H
#define PROJEKT_GAMETILECOLLECTIONFACTORY_H

#include "iostream"
#include "GameTileCollection.h"
#include <vector>

class GameTileCollectionFactory {
private:
    std::string m_blueprints[9];
    void loadBlueprints();
    GameTile* getTileForShortcut(std::string shortcut);
public:
    GameTileCollectionFactory();
    GameTileCollection* createTileCollectionFromBlueprint(int index);



};


#endif //PROJEKT_GAMETILECOLLECTIONFACTORY_H
