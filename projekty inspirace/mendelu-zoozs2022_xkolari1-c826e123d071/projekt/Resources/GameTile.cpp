//
// Created by root on 24.11.2022.
//

#include "GameTile.h"

bool GameTile::isInteractable() {
    return m_is_interactable;
}

GameTile::GameTile() {

}

GameTile *GameTile::interact(Player *player) {
    return this;
}

bool GameTile::isPassthrough() {
    return m_is_passthrough;
}

std::string GameTile::getDescription() {
    return m_description;
}

