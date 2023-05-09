//
// Created by root on 18.11.2022.
//

#ifndef PROJEKT_GAMEENGINE_H
#define PROJEKT_GAMEENGINE_H

#include "iostream"
#include "Interface/InterfaceRenderer.h"
#include "Interface/InputHandler.h"
#include "Logic/CommandProcessor.h"
#include "vector"

class GameEngine {
private:
    InterfaceRenderer* m_renderer = new InterfaceRenderer();
    GameState* m_game_state = new GameState();
    CommandProcessor* m_command_processor = new CommandProcessor();

public:
    // static variables for debugging
    static int DEBUG_COUNT;
    static const bool DEBUG = true;
    static const int DEBUG_ROWS_FROM_TOP = 28;
    static void debugMessage(std::string message);
    static void resetDebug();
    void run();
    void handleAction(int action);
};

#endif //PROJEKT_GAMEENGINE_H
