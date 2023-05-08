//
// Created by root on 24.11.2022.
//

#include "FreeSpace.h"

// Metoda render() vrací znak pro zobrazení volného pole
char FreeSpace::render() {
    return ' ';
}

// Konstruktor třídy FreeSpace, nastavuje výchozí hodnoty
FreeSpace::FreeSpace() : GameTile() {
    m_is_passthrough = true;   // hráč může projít volným polem
    m_is_interactable = false;    // hráč s volným polem nemůže interagovat
    m_description = "Volne misto";   // popis volného pole
}

