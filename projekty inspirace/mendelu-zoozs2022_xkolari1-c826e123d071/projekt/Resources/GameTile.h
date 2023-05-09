
#ifndef PROJEKT_GAMETILE_H
#define PROJEKT_GAMETILE_H


#include <string>
#include "Player.h"

class GameTile {
protected:
    bool m_is_interactable = false, m_is_passthrough = true;
    std::string m_description = "GameTile instance";
public:
    GameTile();
    virtual char render() = 0;
    bool isInteractable();
    bool isPassthrough();
    std::string getDescription();
    virtual GameTile* interact(Player* player);
};


#endif //PROJEKT_GAMETILE_H
