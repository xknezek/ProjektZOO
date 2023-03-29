//
// Created by xkosina on 03.12.2022.
//

#include <cmath>
#include "Room.h"
Room::Room(int width, int height, bool isVisible): Map(width, height)
{
    std::vector<Tile*> row;

    for(int i=0; i<m_height; i++)
    {
        if(i==0 || i == m_height-1) //horni a dolni hrana
        {
            for(int tile=0; tile<m_width; tile++)
            {
                if(tile+tile+1==m_width) //pokud jsem uprostred
                    row.push_back(new Tile("X", {}, {}, {}));
                else
                    row.push_back(new Tile("0",{}, {}, {}));
            }
        }
        else
        {
            for(int tile=0; tile<m_width; tile++)
            {
                if((tile==0 & i!=m_height-i-1) || (tile==m_width-1 & i!=m_height-i-1))
                    row.push_back(new Tile("0",{}, {}, {}));
                else
                    row.push_back(new Tile("X",{}, {}, {}));
            }
        }

        m_map.push_back(row);
        row.clear();
    }
}
void Room::addMonstrumToRoom(Monster *monster) {}
