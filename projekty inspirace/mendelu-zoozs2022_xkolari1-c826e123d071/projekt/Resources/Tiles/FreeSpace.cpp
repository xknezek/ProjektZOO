

#include "FreeSpace.h"


char FreeSpace::render() {
    return ' ';
}

FreeSpace::FreeSpace() : GameTile() {
    m_is_passthrough = true;
    m_is_interactable = false;
    m_description = "Volne misto";
}

