//
// Created by xkosina on 03.12.2022.
//

#include "Menu.h"
#include <iostream>
#include <windows.h>
#include "Warrior.h"

void Menu::mainMenu()
{
    int a = 1;
    std::cout << "1. NOVY DUNGEON" << std::endl;
    std::cout << "2. ULOZENE DUNGEONY" << std::endl;
    std::cout << "3. UKONCIT HRU" << std::endl;

    while(a==1)
    {
        if(GetKeyState('1') & 0x8000)
        {
            system("cls");
            Warrior* warrior = new Warrior("Pepa", 100);
            Dungeon* newDungeon = new Dungeon(warrior);
            newDungeon->startGame();
        }

        if(GetKeyState('3') & 0x8000)
            a=0;
    }
}

void Menu::drawMap(std::vector<std::vector<Map*>> map)
{
    for(int i=0; i<map.size(); i++)//pro radky s mapami
    {
        for(int j=0; j<5; j++) //pro kazdy radek mapy
        {
            for(int k=0; k<map.at(i).size(); k++) //pro kazdou mapu
            {
                if(map.at(i).at(k)->getMap().at(0).size()==5)//pokud je mistnost 6 vysoka
                {
                    for(int l=0; l<map.at(i).at(k)->getMap().at(0).size(); l++) // vytiskni vsechny Tile radku
                    {
                        std::cout << map.at(i).at(k)->getMap().at(j).at(l)->getSymbol() << " ";
                    }
                }
                else
                {
                    if(j!=0 & j!=4) //pokud je trojkova
                    {
                        //if()
                        for(int l=0; l<map.at(i).at(k)->getMap().at(0).size(); l++) // vytiskni vsechny Tile radku
                        {
                            if(map.at(i).at(k)->getOrientation()=="topDown" & l==0)
                                std::cout << "  ";
                            std::cout << map.at(i).at(k)->getMap().at(j-1).at(l)->getSymbol() << " ";
                        }
                    }
                    else// pokud je nizsi, vynech radek
                    {
                        for(int l=0; l<map.at(i).at(k)->getMap().at(0).size(); l++)
                            std::cout << "  ";
                    }
                }
            }
            std::cout << std::endl;
        }
    }
}

void Menu::showDungeon(std::vector<Dungeon *> dungeon) {
}

void Menu::showInventory(std::vector<Inventory*> item) {}