//
// Created by root on 18.11.2022.
//

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_E 101
#define KEY_SPACE 32
#define KEY_P 112
#define KEY_W 119
#define KEY_ENTER 13

#include "InputHandler.h"


//Metoda pro získávání vstupu od hráče a porovnávání s přednastavenými konstantami.
int InputHandler::getCommandForInput(int ascii) {
    //GameEngine::debugMessage(std::to_string(ascii));
    switch (ascii) {
        case KEY_UP:
            //GameEngine::debugMessage("up");
            return CommandProcessor::UP;
            break;
        case KEY_DOWN:
            //GameEngine::debugMessage("down");
            return CommandProcessor::DOWN;
            break;
        case KEY_LEFT:
            //GameEngine::debugMessage("left");
            return CommandProcessor::LEFT;
            break;
        case KEY_RIGHT:
            //GameEngine::debugMessage("right");
            return CommandProcessor::RIGHT;
            break;
        case KEY_SPACE:
            //GameEngine::debugMessage("space");
            return CommandProcessor::SPACE;
            break;
        case KEY_E:
            //GameEngine::debugMessage("e");
            return CommandProcessor::EXIT;
            break;
        case KEY_W:
            //GameEngine::debugMessage("e");
            return CommandProcessor::WEAPON_MENU;
            break;
        case KEY_P:
            //GameEngine::debugMessage("e");
            return CommandProcessor::POTION_MENU;
            break;
        case KEY_ENTER:
            //GameEngine::debugMessage("e");
            return CommandProcessor::ENTER;
            break;
        default:
            return CommandProcessor::IGNORED;
            break;
    }
}
