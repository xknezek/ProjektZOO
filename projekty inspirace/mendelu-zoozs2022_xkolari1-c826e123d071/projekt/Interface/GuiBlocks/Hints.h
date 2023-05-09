
#ifndef PROJEKT_HINTS_H
#define PROJEKT_HINTS_H


#include "../RenderableBlock.h"

class Hints : public RenderableBlock {

public:
    Hints(int x, int y, int width, int height, int id);
    void render(GameState* gameState);
};


#endif //PROJEKT_HINTS_H
