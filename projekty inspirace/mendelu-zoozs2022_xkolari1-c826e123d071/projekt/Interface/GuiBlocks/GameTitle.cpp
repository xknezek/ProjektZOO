//
// Created by root on 23.11.2022.
//

#include "GameTitle.h"
#include "../InterfaceRenderer.h"

void GameTitle::render(GameState *gameState) {
    //Render hlavicky
    //fillWithChar(char(196)); //─
    printBorder();
    printToCenter(1, "Console DungeonMaster 69");
    gameState->setNeedsRender(InterfaceRenderer::UI_HEADER, false);
}

GameTitle::GameTitle(int x, int y, int width, int height, int id) : RenderableBlock(x, y, width, height, id) {

}
