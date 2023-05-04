//
// Created by root on 29.11.2022.
//

#include "CountDown.h"
#include "FreeSpace.h"

CountDown::CountDown() {
    m_is_passthrough = false;
    m_is_interactable = true;
    m_description = "Counter 3 2 1 pooof";
}

char CountDown::render() {
    return std::to_string(m_count)[0];
}

GameTile *CountDown::interact(Player *player) {
    player->setHealth(player->getHealth() + 1);
    m_count--;
    if(m_count > 0){
        return this;
    }else{
        return new FreeSpace();
    }
}
