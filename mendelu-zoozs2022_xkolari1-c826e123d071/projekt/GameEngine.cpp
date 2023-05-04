//
// Created by root on 18.11.2022.
//


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

    //Probehne inicializace a prvotni vykresleni GUI
    handleAction(CommandProcessor::INIT);

    //Smycka, ktera
    while (run) {
        //Resetuje debug messages
        GameEngine::resetDebug();
        //Zaeviduje input
        input = getch();
        //Posle ho na vyhodnoceni
        command = InputHandler::getCommandForInput(input);
        //Pokud je to neco, co nas zajima
        if (command != CommandProcessor::IGNORED) {
            //a pokud se zrovna nepoukousime vypnout program
            if (command == CommandProcessor::EXIT) {
                run = false;
            } else {
                //posle do dalsi metody
                handleAction(command);
            }
        }
    }
    //Instrukce pro vypnuti
    exit(0);
}


//Metoda pro zpracování uživatelského vstupu
void GameEngine::handleAction(int command) {
    //update game state tim ze ho protahnu pres command processor a ulozim zpet novy state
    m_game_state = m_command_processor->processCommand(command, m_game_state);

    //vykreslim znovu kompletne cely game state
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

