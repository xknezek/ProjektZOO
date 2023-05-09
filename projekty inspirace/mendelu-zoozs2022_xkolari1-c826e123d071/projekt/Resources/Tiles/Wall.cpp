

#include "Wall.h"

Wall::Wall() : GameTile(){
    m_is_passthrough = false;
    m_is_interactable = false;
    m_description = "Zed";
}

char Wall::render() {
    return (char)254;
}
