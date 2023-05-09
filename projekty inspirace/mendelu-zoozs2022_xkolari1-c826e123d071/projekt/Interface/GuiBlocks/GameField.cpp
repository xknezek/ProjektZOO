

#include "GameField.h"
#include "../../GameEngine.h"

GameField::GameField(int x, int y, int width, int height, int id) : RenderableBlock(x, y, width, height, id) {

}

void GameField::render(GameState *gameState) {
    GameTileCollection* collection = gameState->getCollectionToRender();
    if(!gameState->getPixelUpdates().empty()){
        //proved jen pixel updates
        for (std::pair<int, int> coords : gameState->getPixelUpdates()){
            //GameEngine::debugMessage("first: "+ std::to_string(coords.first)+", second: "+std::to_string(coords.second));
            printChar(coords.first*2, coords.second, collection->getTileAt(coords.first, coords.second)->render());
        }
        gameState->clearPixelUpdates();
    }else if(gameState->needsRerender(InterfaceRenderer::UI_MAP_RERENDER)){
        //update cele mapy
        for (int i = 0; i < GameEngine::GAME_SIZE; ++i) {
            for (int j = 0; j < GameEngine::GAME_SIZE; ++j) {
                printChar(j*2, i, collection->getTileAt(j, i)->render());
            }
        }
        gameState->setNeedsRender(InterfaceRenderer::UI_MAP_RERENDER, false);
    }

    Player* player = gameState->getPlayer();
    printChar(player->getLocationX()*2, player->getLocationY(), player->render());
}
