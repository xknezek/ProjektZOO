//
// Created by root on 18.11.2022.
//

#include "GameState.h"
#include "../Resources/Tiles/Wall.h"
#include "../Resources/GameTileCollectionFactory.h"
#include "..\Interface\InterfaceRenderer.h"
#include "../GameEngine.h"

bool GameState::needsRerender(int blockId) {
    new Player();
    return m_needs_rerender[blockId];
}

GameState::GameState() {
    auto* factory = new GameTileCollectionFactory();
    for (int i = 0; i <= 8; ++i) {
        m_collections[i] = factory->createTileCollectionFromBlueprint(i);
    }
}

GameTileCollection *GameState::getCollectionToRender() {
    return m_collections[m_active_map_index];
}

Player *GameState::getPlayer() {
    return m_player;
}

void GameState::setNeedsRender(int blockId, bool value) {
    m_needs_rerender[blockId] = value;
}

int GameState::getActiveMapIndex() {
    return m_active_map_index;
}

void GameState::setActiveMapIndex(int index) {
    m_needs_rerender[InterfaceRenderer::UI_MAP_RERENDER] = true;
    m_active_map_index = index;
}

std::vector<std::pair<int, int>> GameState::getPixelUpdates() {
    return m_pixel_updates;
}

void GameState::addPixelUpdate(int x, int y) {
    std::pair<int, int> pom;
    pom.first = x;
    pom.second = y;
    m_pixel_updates.push_back(pom);
}

void GameState::clearPixelUpdates() {
    m_pixel_updates.clear();
}

void GameState::addHint(std::string hint) {
    if(!(m_hint.empty())){
        //GameEngine::debugMessage("append");
        m_hint.append(" | ");
        m_hint.append(hint);
    } else {
        m_hint = hint;
    }
    m_needs_rerender[InterfaceRenderer::UI_HINTS] = true;
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
