//
// Created by xkosina on 03.12.2022.
//

#ifndef ZOOPROJEKT2022_MENU_H
#define ZOOPROJEKT2022_MENU_H
#include "Map.h"
#include "Inventory.h"
#include "Dungeon.h"
#include <vector>

class Menu {
public:
    static void drawMap(std::vector<std::vector<Map*>> map);
    void showInventory(std::vector<Inventory*>item);
    void showDungeon(std::vector<Dungeon*>dungeon);
   static void mainMenu();
};


#endif //ZOOPROJEKT2022_MENU_H
