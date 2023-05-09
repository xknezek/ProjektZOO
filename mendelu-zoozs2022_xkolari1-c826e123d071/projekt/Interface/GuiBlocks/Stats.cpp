//
// Created by root on 24.11.2022.
//

#include "Stats.h"
#include "../InterfaceRenderer.h"

//Konstruktor pro třídu Stats.
Stats::Stats(int x, int y, int width, int height, int id) : RenderableBlock(x, y, width, height, id) {

}

//Metoda pro vypsání ohraničení statistik hráče a samotných statistik.
void Stats::render(GameState *gameState) {
    printBorder();
    printToCenter( 0, "Staty");
    //print(1, 1, std::to_string(gameState->getPlayer()->deleteAfterTest));
    print(1, 1, ("health: " + std::to_string(gameState->getPlayer()->getHealth())));
    print(1, 2, ("damage: " + std::to_string(gameState->getPlayer()->getDamage())));

    gameState->setNeedsRender(InterfaceRenderer::UI_STATS, false);
}
