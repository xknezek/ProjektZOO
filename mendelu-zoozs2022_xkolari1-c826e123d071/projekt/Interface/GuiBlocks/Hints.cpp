//
// Created by root on 24.11.2022.
//

#include "Hints.h"
#include "..\InterfaceRenderer.h"


//Konstruktor pro třídu Hints.
Hints::Hints(int x, int y, int width, int height, int id) : RenderableBlock(x, y, width, height, id) {

}

//Metoda pro výpis nápovědy pro hráče.
void Hints::render(GameState *gameState) {
    if (!gameState->getHint().empty()) {
        clear();
        printToCenter(0, gameState->getHint());
        gameState->clearHint();
    } else {
        clear();
        gameState->setNeedsRender(InterfaceRenderer::UI_HINTS, false);
    }
}
