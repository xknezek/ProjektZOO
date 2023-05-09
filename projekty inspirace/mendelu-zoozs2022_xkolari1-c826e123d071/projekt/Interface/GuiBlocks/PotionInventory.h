

#ifndef PROJEKT_POTIONINVENTORY_H
#define PROJEKT_POTIONINVENTORY_H


#include "../RenderableBlock.h"

class PotionInventory : public RenderableBlock{
public:
    PotionInventory(int x, int y, int width, int height, int id);
    void render(GameState* gameState);

};


#endif //PROJEKT_POTIONINVENTORY_H
