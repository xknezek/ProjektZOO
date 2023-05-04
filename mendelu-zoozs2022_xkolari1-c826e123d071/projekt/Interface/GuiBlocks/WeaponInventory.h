//
// Created by root on 24.11.2022.
//

#ifndef PROJEKT_WEAPONINVENTORY_H
#define PROJEKT_WEAPONINVENTORY_H


#include "../RenderableBlock.h"
#include <vector>

class WeaponInventory : public RenderableBlock {
private:
    //TODO vector m_inventory;
public:
    WeaponInventory(int x, int y, int width, int height, int id);
    void render(GameState* gameState);
};


#endif //PROJEKT_WEAPONINVENTORY_H
