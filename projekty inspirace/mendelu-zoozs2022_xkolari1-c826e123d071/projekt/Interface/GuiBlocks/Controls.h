//
// Created by root on 24.11.2022.
//

#ifndef PROJEKT_CONTROLS_H
#define PROJEKT_CONTROLS_H


#include "../RenderableBlock.h"

class Controls : public RenderableBlock {
public:
    Controls(int x, int y, int width, int height, int id);
    void render(GameState* gameState);
};


#endif //PROJEKT_CONTROLS_H
