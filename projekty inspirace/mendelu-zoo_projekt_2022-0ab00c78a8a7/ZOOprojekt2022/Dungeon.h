//
// Created by xkosina on 03.12.2022.
//

#ifndef ZOOPROJEKT2022_DUNGEON_H
#define ZOOPROJEKT2022_DUNGEON_H
#include "Map.h"
#include <vector>
#include <iostream>
#include "Warrior.h"

class Dungeon {
private:
std::vector<std::vector<Map*>> m_maps;
Warrior* m_warrior;
bool m_run;
public:
    Dungeon(Warrior*warrior);
    void addMap(Map*map, std::string direction);
    void startGame();
    void endGame();
    void generateMaps();
    Warrior* getWarrior();
};


#endif //ZOOPROJEKT2022_DUNGEON_H
