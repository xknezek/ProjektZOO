

#ifndef PROJEKT_COMMANDPROCESSOR_H
#define PROJEKT_COMMANDPROCESSOR_H


#include "GameState.h"

class CommandProcessor {
public:
    static const int IGNORED = 0;
    static const int UP = 1;
    static const int DOWN = 2;
    static const int LEFT = 3;
    static const int RIGHT = 4;
    static const int SPACE = 5;
    static const int WEAPON_MENU = 6;
    static const int POTION_MENU = 7;
    static const int ENTER = 8;
    static const int EXIT = -1;
    static const int INIT = -2;
    GameState* processCommand(int command, GameState* gameState);

};


#endif //PROJEKT_COMMANDPROCESSOR_H
