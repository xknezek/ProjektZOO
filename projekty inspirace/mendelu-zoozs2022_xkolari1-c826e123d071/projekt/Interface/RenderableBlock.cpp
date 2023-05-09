

#include "RenderableBlock.h"
#include "InterfaceRenderer.h"

RenderableBlock::RenderableBlock(int x, int y, int width, int height, int id) {
    m_start_x = x;
    m_start_y = y;
    m_width = width;
    m_height = height;
    m_id = id;
}

void RenderableBlock::print(int x, int y, std::string s) {
    InterfaceRenderer::printToXY(x+m_start_x, y+m_start_y, s);
}

void RenderableBlock::printChar(int x, int y, char c) {
    InterfaceRenderer::printCharToXY(x+m_start_x, y+m_start_y, c);
}

void RenderableBlock::clear() {
    fillWithChar(' ');
}

void RenderableBlock::fill() {
    fillWithChar('X');
}

void RenderableBlock::fillWithChar(char c) {
    for (int i = 0; i < m_height; ++i) {
        for (int j = 0; j < m_width; ++j) {
            printChar(j, i, c);
        }
    }
}

void RenderableBlock::checkAndRender(GameState *gameState) {
    if(gameState->needsRerender(m_id)) render(gameState);
}

void RenderableBlock::printBorder() {
    //znaky
    //─ 196
    //│ 179
    //┐ 191
    //└ 192
    //┘ 217
    //┌ 218
    //levy horni roh
    printChar(0, 0, char(218));
    //pravy horni roh
    printChar(m_width-1, 0, char(191));
    //pravy spodni roh
    printChar(m_width-1, m_height-1, char(217));
    //levy spodni roh
    printChar(0, m_height-1, char(192));
    //horni strana
    for (int i = 1; i < m_width-1; ++i) {
        printChar(i, 0, char(196));
    }
    //spodni strana
    for (int i = 1; i < m_width-1; ++i) {
        printChar(i, m_height-1, char(196));
    }
    //leva strana
    for (int i = 1; i < m_height-1; ++i) {
        printChar(0, i, char(179));
    }
    //prava strana
    for (int i = 1; i < m_height-1; ++i) {
        printChar(m_width-1, i, char(179));
    }
}

void RenderableBlock::printToCenter(int y, std::string line) {
    print((m_width * 0.5) - (line.length() * 0.5), y, line);
}
