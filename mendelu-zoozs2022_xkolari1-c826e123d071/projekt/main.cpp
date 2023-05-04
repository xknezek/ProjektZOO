#include <iostream>
#include "GameEngine.h"

//inicializace staticke promenne
int GameEngine::DEBUG_COUNT = 0;

int main() {

    //Inicializace hlavni tridy, ktera se stara o vsechno ostatni
    GameEngine* g = new GameEngine();
    g->run();

    return 0;
}
