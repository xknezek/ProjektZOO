//
// Created by root on 24.11.2022.
//

#include "GameTile.h"

// Metoda isInteractable() vrací logickou hodnotu, zda je možné s dlaždicí interagovat
bool GameTile::isInteractable() {
    return m_is_interactable;
}

// Konstruktor třídy GameTile
GameTile::GameTile() {

}

// Metoda interact() reprezentuje interakci hráče s herní dlaždicí
GameTile *GameTile::interact(Player *player) {
    return this;  // vrací odkaz na herní dlaždici, na které se nachází hráč po interakci
}

// Metoda isPassthrough() vrací logickou hodnotu, zda je dlaždice průchozí
bool GameTile::isPassthrough() {
    return m_is_passthrough;
}

// Metoda getDescription() vrací popis dlaždice
std::string GameTile::getDescription() {
    return m_description;
}

