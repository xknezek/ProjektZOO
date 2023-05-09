

#ifndef PROJEKT_GAMETITLE_H
#define PROJEKT_GAMETITLE_H


#include "../RenderableBlock.h"

class GameTitle : public RenderableBlock {
public:
    GameTitle(int x, int y, int width, int height, int id);
    void render(GameState* gameState);
};


#endif //PROJEKT_GAMETITLE_H
