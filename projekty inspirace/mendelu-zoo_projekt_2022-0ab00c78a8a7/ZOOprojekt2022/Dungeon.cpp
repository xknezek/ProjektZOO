//
// Created by xkosina on 03.12.2022.
//

#include "Dungeon.h"
#include "Room.h"
#include "Corridor.h"
#include "Menu.h"

Dungeon::Dungeon(Warrior *warrior) {}

void Dungeon::addMap(Map *map, std::string direction)
{
    if(direction=="right")
    {
        Corridor* firstCorrior = new Corridor(4,3,"leftRight");
        m_maps.at(0).push_back(firstCorrior);
    }
    else
    {
        if(direction=="down")
        {
            Corridor* newCorridor = new Corridor(3,3,"topDown");
            std::vector<Map*> pom;
            pom.push_back(newCorridor);
            m_maps.push_back(pom);
        }
        else
        {
            Room* newRoom = new Room(5, 5, true);
            std::vector<Map*> pom;
            pom.push_back(newRoom);
            m_maps.push_back(pom);
        }
    }


}

void Dungeon::startGame()
{
    generateMaps();
    addMap(nullptr, "right");
    addMap(nullptr,"right");
    addMap(nullptr,"down");
    m_maps.at(0).push_back(new Room(5,5,true));
    Menu::drawMap(m_maps);
}

void Dungeon::endGame() {
Dungeon::m_run=false;
std::cout<<"END GAME"<<std::endl;
}

Warrior *Dungeon::getWarrior() {return 0;}

void Dungeon::generateMaps()
{
    Room* firstRoom = new Room(5, 5, true);
    std::vector<Map*> pom;
    pom.push_back(firstRoom);
    m_maps.push_back(pom);
}