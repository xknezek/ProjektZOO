

#ifndef PROJEKT_GAMEFIELD_H
#define PROJEKT_GAMEFIELD_H


#include "../RenderableBlock.h"

class GameField : public RenderableBlock {
public:
    GameField(int x, int y, int width, int height, int id);
    void render(GameState* gameState);
};


#endif //PROJEKT_GAMEFIELD_H
