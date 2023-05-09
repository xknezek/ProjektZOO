//
// Created by root on 28.11.2022.
//

#include "GameTileCollectionFactory.h"
#include "../GameEngine.h"
#include "Tiles/Wall.h"
#include "Tiles/FreeSpace.h"
#include "Tiles/CountDown.h"
#include "Tiles/PotionTile.h"
#include "Tiles/WeaponTile.h"

//GameTileCollectionFactory obsahuje 9 natvrdo vytvořených map

void GameTileCollectionFactory::loadBlueprints() {
    //0  1  2
    //3  4  5
    //6  7  8


    //-----------------0--------------------
    m_blueprints[0] =
            "XXXXXXXXXXXXXXXXXXXX" //1
            "X                  X" //2
            "X  XXXXXXXX        X" //3
            "X   XXXXXX         X" //4
            "X    XXXX          X" //5
            "X                  X" //6
            "XXX    X           X" //7
            "X       XXXX       X" //8
            "X        XXXX      X" //9
            "X             X     " //10
            "X    XXX            " //11
            "X           XXX    X" //12
            "X   XXX     XXX    X" //13
            "X   X              X" //14
            "X   X      XXX   XXX" //15
            "X   XX  XXXXXXXX   X" //16
            "X   XXX   XXXXXX   X" //17
            "X   XXXXX  XXXXX   X" //18
            "X                  X" //19
            "XXXXXXXXX  XXXXXXXXX"; //20

    ;
    //-----------------1--------------------
    m_blueprints[1] =
            "XXXXXXXXXXXXXXXXXXXX" //1
            "X  X            X  X" //2
            "X  X            X  X" //3
            "X     XXXXXXXX     X" //4
            "X   X    XX    X   X" //5
            "X   X    XX    X   X" //6
            "X   XXX      XXX   X" //7
            "X                  X" //8
            "X    XXXXXXXXXX    X" //9
            "     X        X     " //10
            "     X        X     " //11
            "X    XXXXXXXXXX    X" //12
            "X   X          X   X" //13
            "X   X          X   X" //14
            "X   XXX  XX  XXX   X" //15
            "X   X    XX    X   X" //16
            "X     XXXXXXXX     X" //17
            "X  X            X  X" //18
            "X  X            X  X" //19
            "XXXXXXXXX  XXXXXXXXX"; //20
    //-----------------2--------------------
    m_blueprints[2] =
             "XXXXXXXXXXXXXXXXXXXX" //1
            "X                  X" //2
            "X    XXXXXXXX      X" //3
            "X    X      X  XX  X" //4
            "X    X      X  X   X" //5
            "X    X      X  X  XX" //6
            "X    X      X  X   X" //7
            "X           X  XX  X" //8
            "XXXXXXXXXXX X  X  XX" //9
            "          X X  X   X" //10
            "          X X  XXX X" //11
            "XXXXXXXX  X XXXX   X" //12
            "X      X  X X      X" //13
            "XX X XXX  X X      X" //14
            "XX X      X X      X" //15
            "XX XXXXXXXX X      X" //16
            "XX X        X      X" //17
            "X  X  XXXXXXX      X" //18
            "X     XXXX         X" //19
            "XXXXXXXXX  XXXXXXXXX"; //20
    //-----------------3--------------------
    m_blueprints[3] =
            "XXXXXXXXX  XXXXXXXXX" //1
            "X      X   X       X" //2
            "X  XXXXX   X       X" //3
            "X      XX  XXX     X" //4
            "X       X  XX      X" //5
            "X    X   X  XX     X" //6
            "X   XX    X   X    X" //7
            "XXX  X     X  X    X" //8
            "X   XX      X  X   X" //9
            "XX   X       X  X   " //10
            "XXX  X     X    X   " //11
            "XXXX X    X    X   X" //12
            "X    X   X    X    X" //13
            "X  XXX  X    X     X" //14
            "X  XXX       X     X" //15
            "X    XXXXXXXXX     X" //16
            "X X             X  X" //17
            "X  XXXX    XXXXX   X" //18
            "X      X           X" //19
            "XXXXXXXXX  XXXXXXXXX"; //20
    //-----------------4--------------------
    m_blueprints[4] =
            "XXXXXXXXX  XXXXXXXXX" //1
            "X     S       Y    X" //2
            "X  XXXXX           X" //3
            "X  XXXXX     C     X" //4
            "X  XXXXX     P     X" //5
            "X  XXXXXU          X" //6
            "X  XXXX   XXXXX    X" //7
            "X  XC  XX          X" //8
            "X XXXX  X   A      X" //9
            "    XK  XXXXXXXX    " //10
            "    XX    CCC       " //11
            "X   XX             X" //12
            "X   XO     X       X" //13
            "X X X      X  C    X" //14
            "X XX  W    X       X" //15
            "X  XX              X" //16
            "X   XX     C       X" //17
            "X    XXC XXXXXXXXXXX" //18
            "X                  X" //19
            "XXXXXXXXX  XXXXXXXXX"; //20
    //-----------------5--------------------
    m_blueprints[5] =
            "XXXXXXXXX  XXXXXXXXX" //1
            "X   X      X       X" //2
            "X  XXXX  XXXXXXX   X" //3
            "X  X           X   X" //4
            "X  X  X     X  X   X" //5
            "X  X  X     X  X   X" //6
            "X  X  X     X  X   X" //7
            "X  X  X     X  X   X" //8
            "X  X  X     X  X   X" //9
            "      X     X      X" //10
            "   X      X    X   X" //11
            "X  X  X     X  X   X" //12
            "X  X  X     X  X   X" //13
            "X  X  X     X  X   X" //14
            "X  X  X     X  X   X" //15
            "X  X  X     X  X   X" //16
            "X  X   X   X   X   X" //17
            "X  XXX   XXXXXXX   X" //18
            "X      X  X        X" //19
            "XXXXXXXXX  XXXXXXXXX"; //20
    //-----------------6--------------------
    m_blueprints[6] =
            "XXXXXXXXX  XXXXXXXXX" //1
            "X                  X" //2
            "X  XXXXXXX  XXXXX  X" //3
            "X            XXXX  X" //4
            "XXX           XXX  X" //5
            "X  XX XX XX XX   XXX" //6
            "XXX                X" //7
            "X   XX XX XX       X" //8
            "X              XXXXX" //9
            "X             XX    " //10
            "X               X   " //11
            "X  XX  XX     X X  X" //12
            "X  XXX  XX    X X  X" //13
            "X  XX     X   X X  X" //14
            "X  XX   X  X  X X  X" //15
            "X  XXX  X   X X X  X" //16
            "X  X     XX   X X  X" //17
            "X  XXXX XX   X  X  X" //18
            "X      X   XX      X" //19
            "XXXXXXXXXXXXXXXXXXXX"; //20
    //-----------------7--------------------
    m_blueprints[7] =
            "XXXXXXXXX  XXXXXXXXX" //1
            "X                  X" //2
            "XXXXXXXX  XXXXXXXXXX" //3
            "X                  X" //4
            "XXXX XXX  XXX   XXXX" //5
            "X       XX         X" //6
            "X  XXXXXXXXXXXXX   X" //7
            "X   XXXXXXXXXXX    X" //8
            "X     XXXXXXXX     X" //9
            "       XXXXXX       " //10
            "        XXXX        " //11
            "X        XX        X" //12
            "X     XXX  XXX     X" //13
            "X    X       X     X" //14
            "X   X    XX  X     X" //15
            "X  X    X  X   X   X" //16
            "X X    X    X   X  X" //17
            "X  X  X      X     X" //18
            "X    X        X    X" //19
            "XXXXXXXXXXXXXXXXXXXX"; //20
    //-----------------8--------------------
    m_blueprints[8] =
            "XXXXXXXXX  XXXXXXXXX" //1
            "X       X    X     X" //2
            "X  XXXXXXXXX X  XX X" //3
            "X  X         X  XX X" //4
            "X  X XXXXXXXXX  X  X" //5
            "X  X X    X  X  X XX" //6
            "X  X X X  X  X  X XX" //7
            "X  X X X  X  X  X  X" //8
            "X  X   X  X  X  X XX" //9
            "    XXX   X  X  X  X" //10
            "      X      X  XX X" //11
            "X  X  X      X  X  X" //12
            "X  X  X         X XX" //13
            "X  XXXX   X     X  X" //14
            "X  XXXX   X     XX X" //15
            "X  X      X     X  X" //16
            "X  X            X XX" //17
            "X  XXXXXXXXXXXXXX  X" //18
            "X                  X" //19
            "XXXXXXXXXXXXXXXXXXXX"; //20
}

GameTileCollectionFactory::GameTileCollectionFactory() {
    loadBlueprints();
}

GameTileCollection *GameTileCollectionFactory::createTileCollectionFromBlueprint(int index) {

    std::vector<std::vector<GameTile*>> collection;
    std::vector<GameTile*> pom;
    std::string shortcut;
    for (int i = 0; i < GameEngine::GAME_SIZE; ++i) {
        pom.clear();
        for (int j = 0; j < GameEngine::GAME_SIZE; ++j) {
            shortcut = m_blueprints[index][i+(j*GameEngine::GAME_SIZE)];
            pom.push_back(getTileForShortcut(shortcut));
        }
        collection.push_back(pom);
    }

    return new GameTileCollection(collection);
}

GameTile *GameTileCollectionFactory::getTileForShortcut(std::string shortcut) {
    // pismena, ktore su uz zabrane: A, C, K, O, P, S, U, W, X, Y

    //Wall
    if(shortcut == "X") return new Wall();
    if(shortcut == "C") return new CountDown();

    //Potions
    if(shortcut == "O") return new PotionTile("Obelix mix", 10);
    if(shortcut == "P") return new PotionTile("Uber health potion", 15);
    if(shortcut == "U") return new PotionTile("Vodka", -5);
    if(shortcut == "S") return new PotionTile("Bull's fire", 50);
    if(shortcut == "Y") return new PotionTile("Sui juice", 15);

    //WeaponTile
    if(shortcut == "W") return new WeaponTile("Thors hammer", 10);
    if(shortcut == "K") return new WeaponTile("Yo mama knife", 15);
    if(shortcut == "A") return new WeaponTile("Frost Axe", 12);
    return new FreeSpace();
}




