

#include "GameState.h"
#include "../Resources/Tiles/Wall.h"
#include "../Resources/GameTileCollectionFactory.h"
#include "..\Interface\InterfaceRenderer.h"
#include "../GameEngine.h"

bool GameState::needsRerender(int blockId) {
    new Player();
    return m_needs_rerender[blockId]; // Return whether the specified block needs to be rerendered
}

GameState::GameState() {
    auto* factory = new GameTileCollectionFactory(); // Create a new game tile collection factory
    for (int i = 0; i <= 8; ++i) {
        m_collections[i] = factory->createTileCollectionFromBlueprint(i); // Create a game tile collection for each map using the factory
    }
}

GameTileCollection *GameState::getCollectionToRender() {
    return m_collections[m_active_map_index]; // Return the game tile collection for the active map
}

Player *GameState::getPlayer() {
    return m_player;
}

void GameState::setNeedsRender(int blockId, bool value) {//sets the specific part if it needs to be rendered
    m_needs_rerender[blockId] = value;
}

int GameState::getActiveMapIndex() {
    return m_active_map_index;
}

void GameState::setActiveMapIndex(int index) {//sets the index of the currently active map to the given value
    m_needs_rerender[InterfaceRenderer::UI_MAP_RERENDER] = true;
    //InterfaceRenderer::UI_MAP_RERENDER represents the index of the UI element responsible for rendering the game map.
    // it is used to mark that the map needs to be re-rendered when the active map index is changed
    m_active_map_index = index;
}

std::vector<std::pair<int, int>> GameState::getPixelUpdates() {
    // adds a pair of integers representing the coordinates of a pixel that has been updated to the m_pixel_updates vector
    return m_pixel_updates;
}

void GameState::addPixelUpdate(int x, int y) {
    //adds a pair of integers representing the coordinates of a pixel that has been updated to the m_pixel_updates vector
    std::pair<int, int> pom;
    pom.first = x;
    pom.second = y;
    m_pixel_updates.push_back(pom);
}

void GameState::clearPixelUpdates() {
    m_pixel_updates.clear();
}

void GameState::addHint(std::string hint) {
    if(!(m_hint.empty())){//If the m_hint string is not empty, it appends the new hint to the end of the existing string, separated by |
        //GameEngine::debugMessage("append");
        m_hint.append(" | ");
        m_hint.append(hint);
    } else {
        m_hint = hint;
    }
    m_needs_rerender[InterfaceRenderer::UI_HINTS] = true;//m_needs_redner keeps track of whether a block of the game needs to be re-rendered
}

std::string GameState::getHint() {
    return m_hint;
}

void GameState::clearHint() {
    m_hint.clear();
}

bool GameState::getChooseWeaponMode() {
    return m_choose_weapon_mode;
}

void GameState::setChooseWeaponMode(bool value) {
    m_choose_weapon_mode = value;
}

bool GameState::getChoosePotionMode() {
    return m_choose_potion_mode;
}

void GameState::setChoosePotionMode(bool value) {
    m_choose_potion_mode = value;
}
