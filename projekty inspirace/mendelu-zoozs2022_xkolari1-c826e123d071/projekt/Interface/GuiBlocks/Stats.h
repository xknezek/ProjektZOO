

#ifndef PROJEKT_STATS_H
#define PROJEKT_STATS_H


#include "../RenderableBlock.h"

class Stats : public RenderableBlock {
public:
    Stats(int x, int y, int width, int height, int id);
    void render(GameState* gameState);
};


#endif //PROJEKT_STATS_H
