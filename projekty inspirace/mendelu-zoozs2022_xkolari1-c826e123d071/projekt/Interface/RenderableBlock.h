

#ifndef PROJEKT_RENDERABLEBLOCK_H
#define PROJEKT_RENDERABLEBLOCK_H

#include "iostream"
#include "../Logic/GameState.h"


class RenderableBlock {
protected:
    int m_start_x, m_start_y, m_width, m_height, m_id;
    void fillWithChar(char c);
public:
    RenderableBlock(int x, int y, int width, int height, int id);
    void clear();
    void fill();
    void printBorder();
    void printToCenter(int y, std::string line);
    void print(int x, int y, std::string s);
    void printChar(int x, int y, char c);
    void checkAndRender(GameState* gameState);
    virtual void render(GameState* gameState) = 0;

};


#endif //PROJEKT_RENDERABLEBLOCK_H
