//
// Created by root on 29.11.2022.
//

#include "CountDown.h"
#include "FreeSpace.h"

// Konstruktor třídy CountDown, nastavuje výchozí hodnoty
CountDown::CountDown() {
    m_is_passthrough = false;
    m_is_interactable = true;
    m_description = "Counter 3 2 1 pooof";
}

// Metoda render() vrací znak, který zobrazuje aktuální stav počítadla
char CountDown::render() {
    return std::to_string(m_count)[0];
}

// Metoda interact() zpracovává interakci s hráčem
GameTile *CountDown::interact(Player *player) {
    // Zvýší zdraví hráče o jedna
    player->setHealth(player->getHealth() + 1);
    // Odečte jeden bod z počítadla
    m_count--;
    // Pokud je počítadlo větší než nula, hráč zůstává na aktuálním poli
    if(m_count > 0){
        return this;
    }else{
        // Pokud je počítadlo rovno nule, hráč je přesunut na volné herní pole
        return new FreeSpace();
    }
}
