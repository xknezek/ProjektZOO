

#include "Controls.h"
#include "..\InterfaceRenderer.h"

Controls::Controls(int x, int y, int width, int height, int id) : RenderableBlock(x, y, width, height, id) {

}

void Controls::render(GameState *gameState) {
    print(0, 0, "[pohyb:sipky] [exit:e] [weapons:w] [potions:p]      ZOO 2022/23 xkolari1, xpecink1, xsalaj, xzilavy");
    gameState->setNeedsRender(InterfaceRenderer::UI_CONTROLS, false);
}
