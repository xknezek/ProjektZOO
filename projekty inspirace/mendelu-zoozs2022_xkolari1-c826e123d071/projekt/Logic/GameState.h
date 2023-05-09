
#ifndef PROJEKT_GAMESTATE_H
#define PROJEKT_GAMESTATE_H


#include "../Resources/GameTile.h"
#include "../Resources/GameTileCollection.h"
#include "../Resources/Player.h"

class GameState: public Player {
private:
    bool m_needs_rerender[10] = {true, true, true, true, true, true, true, true, false, false}; // An array that stores whether each block needs to be rerendered
    int m_active_map_index = 4; // Index of the active map being rendered
    GameTileCollection* m_collections[9]; // An array of game tile collections for each map
    Player* m_player = new Player(5, 15);
    std::vector<std::pair<int, int>> m_pixel_updates;
    std::string m_hint; // The current hint
    bool m_choose_weapon_mode = false,
    m_choose_potion_mode = false; // indicating whether the player is currently selecting a weapon or potion

public:
    GameState();
    bool needsRerender(int blockId); // Returns whether a block needs to be rerendered
    void setNeedsRender(int blockId, bool value); // Sets whether a block needs to be rerendered
    GameTileCollection* getCollectionToRender(); // Returns the game tile collection to be rendered
    Player* getPlayer();
    int getActiveMapIndex(); // Returns the index of the active map
    void setActiveMapIndex(int index); // Sets the index of the active map
    std::vector<std::pair<int, int>> getPixelUpdates(); // Returns the vector of pixel updates
    void addPixelUpdate(int x, int y);
    void clearPixelUpdates(); // Clears the vector of pixel updates
    void addHint(std::string hint); // Adds a hint message
    std::string getHint(); // Returns the hint
    void clearHint(); // Clears the hint
    bool getChooseWeaponMode(); // Returns whether the player is currently selecting a weapon
    bool getChoosePotionMode(); // Returns whether the player is currently selecting a potion
    void setChooseWeaponMode(bool value); // Sets whether the player is currently selecting a weapon
    void setChoosePotionMode(bool value); // Sets whether the player is currently selecting a potion
};


#endif //PROJEKT_GAMESTATE_H
