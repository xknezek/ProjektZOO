#include <iostream>
#include <io.h>
#include <fcntl.h>
#include <windows.h>
#include "MapManager.h"
#include "Update.h"
#include "Menu.h"


int main() {
    _setmode(_fileno(stdout), _O_U16TEXT);
    /*CONSOLE_FONT_INFOEX cfi;
    cfi.cbSize = sizeof(cfi);
    cfi.dwFontSize.X= 24;
    cfi.dwFontSize.Y= 24;*/
    Update* up = new Update();

    MapManager* map = new MapManager();
    map->generateMap(10,10);
    up->doUpdate(map);//launches the game
    return 0;
}

