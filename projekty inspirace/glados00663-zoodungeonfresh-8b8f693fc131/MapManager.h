//
// Created by XMG on 10.12.2022.
//

#ifndef ZOOPROJECT_MAPMANAGER_H
#define ZOOPROJECT_MAPMANAGER_H
#include <vector>
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <bits/stdc++.h>

using namespace std;
class MapManager {
        int m_currentLevel;
        int m_playerPositionX;
        int m_playerPositionY;
        int m_size;
        int m_count;
        vector<vector<vector<wchar_t>>> mapColection; // vekor obashující všechny mapy
    public:
        MapManager();
         // construktor mapManageru

        void generateMap(int size, int count);//generátor všech map a levelů, přidává hráče na začátek každého levelu

        void movePlayer(int x, int y);

        void printMap(int level);// vypisuje level podle toho jaký level si požádáme
};


#endif //ZOOPROJECT_MAPMANAGER_H
