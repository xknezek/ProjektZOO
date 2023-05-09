//
// Created by root on 24.11.2022.
//

#include "Controls.h"
#include "..\InterfaceRenderer.h"

//Konstruktor pro třídu Controls.
Controls::Controls(int x, int y, int width, int height, int id) : RenderableBlock(x, y, width, height, id) {

}

//Metoda pro vypsání ovládání.
void Controls::render(GameState *gameState) {
    print(0, 0, "[pohyb:sipky] [exit:e] [weapons:w] [potions:p]                                                     ");
    gameState->setNeedsRender(InterfaceRenderer::UI_CONTROLS, false);
}
