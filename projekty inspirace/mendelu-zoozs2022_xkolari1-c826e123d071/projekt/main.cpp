#include <iostream>
#include "GameEngine.h"

//inicializace staticke promenne
int GameEngine::DEBUG_COUNT = 0;

int main() {

    //main class inicialization
    GameEngine* g = new GameEngine();
    g->run();

    return 0;
}
