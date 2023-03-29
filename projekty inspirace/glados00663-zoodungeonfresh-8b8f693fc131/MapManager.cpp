//
// Created by XMG on 10.12.2022.
//

#include "MapManager.h"
MapManager::MapManager() {

};
void MapManager::generateMap(int size, int count) {
    if(size%2==0) // kontroluje zada je size lichá, pokud ne tak přidá jedničku aby vchod/východ byl vždy uprostře, dále to umožňuje počítat pozici hráče takže je to důležité
    {
        ++size;
    }
    m_size=size;
    m_count=count;
    m_playerPositionX=0;
    m_currentLevel=0;
    m_playerPositionY=m_size/2;
    for(int i=0;i<m_count;i++)
    {
        vector<vector<wchar_t>> v2d; //vektor jednoho levelu co se pak ukládá do 3D vektoru
        for(int j=0;j<m_size;j++)
        {
            vector<wchar_t> v1d;// vektor řádku levelu co se ukládá do vektoru jednoho levelu
            for(int k=0;k<m_size;k++)
            {
                int temp = 1+rand()%20; // generuje náhodné čílo od jedna až 20
                if(((j==0) || j == (m_size-1)) || (( k==0 ) && (j!=m_size/2)) || ((k+1==m_size) && (j!=m_size/2))) // počítá a ukádá okraje mapy a dosazuje tam daný blok
                {
                    v1d.push_back(L'\x25A0'); // blok okraje mapy
                }
                else{ //ukadá podlahu a ostatní věci co nejsou stěny mapy

                    if(j==m_playerPositionY && k==m_playerPositionX)
                    {
                        v1d.push_back(L'\x0D9E');
                    }else{
                        v1d.push_back(L'\x002E');
                    }

                }

            }
            v2d.push_back(v1d);// ukládá řádky do levelu
        }
        mapColection.push_back(v2d);// ukládá level do kolekce levelů
    }
}
void MapManager::movePlayer(int x, int y) {
    if(mapColection[m_currentLevel][m_playerPositionY+y][m_playerPositionX+x]!=L'\x25A0')
    {
        swap(mapColection[m_currentLevel][m_playerPositionY][m_playerPositionX], mapColection[m_currentLevel][m_playerPositionY+y][m_playerPositionX+x]);
        m_playerPositionX+=x;
        m_playerPositionY+=y;
    }
    if(m_playerPositionX>m_size)
    {
        m_currentLevel++;
    }
    if(m_playerPositionX<0)
    {
        m_currentLevel--;
    }
    printMap(m_currentLevel);
}
void MapManager::printMap(int level) {
    system("CLS");
    for(int j=0;j<mapColection[level-1].size();j++) // cykly prochází každý prvek daného prvku a vypisují ho na kozoli
    {

        for(int k=0;k< mapColection[level-1][j].size();k++)
        {
            if(mapColection[level-1][j][k]==L'\x0D9E')
            {
                wcout<< mapColection[level-1][j][k]<<L'\x2005'<<L'\x2005'<<L'\x2005'<<L'\x2006'<<L'\x2006';//wcout se používá z důvodu že místo azci používáme UTF-16
            }else{
                wcout<<mapColection[level-1][j][k]<<"  ";
            }
        }
        wcout<<endl;
    }
    wcout<<endl;
}

