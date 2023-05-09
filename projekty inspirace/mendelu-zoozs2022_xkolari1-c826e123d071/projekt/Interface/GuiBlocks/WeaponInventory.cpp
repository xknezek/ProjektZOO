

#include "WeaponInventory.h"
#include "../InterfaceRenderer.h"

WeaponInventory::WeaponInventory(int x, int y, int width, int height, int id) : RenderableBlock(x, y, width, height, id) {}

void WeaponInventory::render(GameState *gameState) {
    printBorder();
    printToCenter(0, "Weapons");
    int x = 0;
    for (Weapon *weapon: gameState->getPlayer()->getWeaponCollection()) {
        print(3, 2 + x++, weapon->getName());
    }
    if (x > 0) {
        for (int i = 0; i < 7; ++i) {
            print(2, 2+i, " ");
        }
        printChar(2, 2 + gameState->getPlayer()->getActiveWeaponID(), (char) 62);
    }

    gameState->setNeedsRender(InterfaceRenderer::UI_WEAPONS, false);
}
