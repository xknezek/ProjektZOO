//
// Created by root on 06.12.2022.
//

#include "PotionInventory.h"
#include "../InterfaceRenderer.h"

//Konstruktor pro třídu PotionInventory.
PotionInventory::PotionInventory(int x, int y, int width, int height, int id) : RenderableBlock(x, y, width, height, id) {}

//Metoda pro vypsání ohraničení inventáře a obsahu inventáře
void PotionInventory::render(GameState* gameState) {
    printBorder();
    printToCenter(0, "Potiony");
    int x = 0;
    for (Potion *potion: gameState->getPlayer()->getPotionCollection()) {
        print(3, 2 + x++, potion->getName());
    }
    gameState->setNeedsRender(InterfaceRenderer::UI_WEAPONS, false);
}
