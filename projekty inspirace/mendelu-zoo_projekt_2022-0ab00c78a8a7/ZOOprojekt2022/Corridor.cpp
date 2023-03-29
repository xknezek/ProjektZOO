//
// Created by xkosina on 03.12.2022.
//

#include "Corridor.h"
Corridor::Corridor(int width, int height, std::string orientation) : Map(width, height)
{
    m_width = width;
    m_height=height;
    m_orientation=orientation;
    std::vector<Tile*> row;

    for(int i=0; i<m_height; i++)
    {
        for(int j=0; j<m_width; j++)
        {
            if(orientation=="topDown")
            {
                if(j==0 || j==2)
                    row.push_back(new Tile("O",{},{},{}));
                else
                    row.push_back(new Tile("x",{},{},{}));
            }
            else
            {
                if(i==0 || i==2)
                    row.push_back(new Tile("O",{},{},{}));
                else
                    row.push_back(new Tile("x",{},{},{}));
            }

        }
        m_map.push_back(row);
        row.clear();
    }
}
void Corridor::addTrapToCorridor(Trap *trap) {}

std::string Corridor::getOrientation()
{
    return m_orientation;
}
