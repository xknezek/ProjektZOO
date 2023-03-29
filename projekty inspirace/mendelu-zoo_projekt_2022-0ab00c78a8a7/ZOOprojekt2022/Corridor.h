//
// Created by xkosina on 03.12.2022.
//

#ifndef ZOOPROJEKT2022_CORRIDOR_H
#define ZOOPROJEKT2022_CORRIDOR_H
#include <iostream>
#include <vector>
#include "Map.h"
#include "Trap.h"
class Corridor: public Map {
private:
    std::string m_orientation;
public:
    Corridor(int width, int height, std::string orientation);
    void addTrapToCorridor(Trap*trap);
    std::string getOrientation() override;
};


#endif //ZOOPROJEKT2022_CORRIDOR_H
