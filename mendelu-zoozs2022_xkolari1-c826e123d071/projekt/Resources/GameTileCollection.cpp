//
// Created by root on 24.11.2022.
//

#include "GameTileCollection.h"
#include "..\GameEngine.h"
#include "Tiles/Wall.h"
/*
GameTileCollection::GameTileCollection() {
    std::vector<GameTile*> deleteAfterTest;
    for (int i = 0; i < GameEngine::GAME_SIZE; ++i) {
        deleteAfterTest.clear();
        for (int j = 0; j < GameEngine::GAME_SIZE; ++j) {
            deleteAfterTest.push_back(new Wall());
            //setTileAt(i, j, new Wall());
        }
        m_collection.push_back(deleteAfterTest);
    }
}*/

// Metoda getTileAt() vrací herní pole na zadané pozici v kolekci herních polí
GameTile *GameTileCollection::getTileAt(int x, int y) {
    return m_collection.at(x).at(y);
}

// Metoda setTileAt() nastaví herní pole na zadané pozici v kolekci herních polí
void GameTileCollection::setTileAt(int x, int y, GameTile* gameTile) {
    m_collection.at(x).at(y) = gameTile;
}

// Konstruktor třídy GameTileCollection, nastavuje kolekci herních polí
GameTileCollection::GameTileCollection(std::vector<std::vector<GameTile *>> collection) {
    m_collection = collection;
}
