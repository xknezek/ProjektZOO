


#include <conio.h>
#include "GameEngine.h"
#include "iostream"
#include "Logic/CommandProcessor.h"
#include <windows.h>
#include <sstream>

using namespace std;

void GameEngine::run() {
    bool run = true;
    int command = 0;
    int input = 0;

    //inicialization and first GUI
    handleAction(CommandProcessor::INIT);


    while (run) {
        //Resets debug messages
        GameEngine::resetDebug();
        //evidates input
        input = getch();
        //revidates the input
        command = InputHandler::getCommandForInput(input);
        // if the command is not ignored
        if (command != CommandProcessor::IGNORED) {
            // if the command is to exit the program
            if (command == CommandProcessor::EXIT) {
                run = false;
            } else {
                //calls handleAction with the command to do
                handleAction(command);
            }
        }
    }
    //it exists the programme
    exit(0);
}


//handles User input
void GameEngine::handleAction(int command) {
    //update game state tim ze ho protahnu pres command processor a ulozim zpet novy state
    m_game_state = m_command_processor->processCommand(command, m_game_state);

    //rerender the state
    m_renderer->printGameState(m_game_state);
}

void GameEngine::resetDebug() {
    GameEngine::DEBUG_COUNT = 0;
}

void GameEngine::debugMessage(std::string message) {
    //TODO deleting debugu by chtel poresit pres renderovani prazdneho obdelniku, muzou tam takhle zustavat radky
    if (GameEngine::DEBUG) {
        std::string eraser = "";
        for (int i = 0; i < 100; ++i) eraser.append(" ");
        InterfaceRenderer::printToXY(0, GameEngine::DEBUG_ROWS_FROM_TOP + GameEngine::DEBUG_COUNT, eraser);
        InterfaceRenderer::printToXY(0, GameEngine::DEBUG_ROWS_FROM_TOP + GameEngine::DEBUG_COUNT, message);
        GameEngine::DEBUG_COUNT++;
    }
}

