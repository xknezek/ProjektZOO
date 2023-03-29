//
// Created by root on 18.11.2022.
//

#ifndef PROJEKT_GAMESTATE_H
#define PROJEKT_GAMESTATE_H


#include "../Resources/GameTile.h"
#include "../Resources/GameTileCollection.h"
#include "../Resources/Player.h"

class GameState: public Player {
private:
    bool m_needs_rerender[10] = {true, true, true, true, true, true, true, true, false, false};
    int m_active_map_index = 4;
    GameTileCollection* m_collections[9];
    Player* m_player = new Player(5, 15);
    std::vector<std::pair<int, int>> m_pixel_updates;
    std::string m_hint;
    bool m_choose_weapon_mode = false, m_choose_potion_mode = false;

public:
    GameState();
    bool needsRerender(int blockId);
    void setNeedsRender(int blockId, bool value);
    GameTileCollection* getCollectionToRender();
    Player* getPlayer();
    int getActiveMapIndex();
    void setActiveMapIndex(int index);
    std::vector<std::pair<int, int>> getPixelUpdates();
    void addPixelUpdate(int x, int y);
    void clearPixelUpdates();
    void addHint(std::string hint);
    std::string getHint();
    void clearHint();
    bool getChooseWeaponMode();
    bool getChoosePotionMode();
    void setChooseWeaponMode(bool value);
    void setChoosePotionMode(bool value);


};


#endif //PROJEKT_GAMESTATE_H
