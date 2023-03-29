
#include "Menu.h"
#include "MapManager.h"

   Menu::Menu(){

};
  bool Menu::validInput(std::string input) {
    bool isNeg = false;
    int itr = 0;
    if (input.size() == 0)
      return false;
    if (input[0] == '-') {
      return false;
    }
    for (int i = itr; i < input.size(); i++) {
      if (!isdigit(input[i]))
        return false;
    }
    return true;
  }

  void Menu::inicialise() {     // Funkce si řekne o zadání základních hodnot
    string input;         // String pojme input, nakonci se převede na int
    bool opakovat = true; // Pomocný bool pro opakování cyklů
    cout << "Zadejte požadovaný počet místností." << endl << flush;
    while (opakovat) {
      cin >> input;
      if (validInput(input)) {     // Kontrola, zda se jedná o celé číslo
        m_roomCount = stoi(input); // Převod stringu na int
        opakovat = false;          // Ukončení cyklu díky pomocnému boolu :3
      } else {
        cout << "Neplatná hodnota!" << endl << flush;
      }
    }
    opakovat = true;
    input = "";
    cout << "Zadejte lichou velikost jednotlivých místnostív intervalu <5;15>."
         << endl << flush;
    while (opakovat) {
      cin >> input;
      if (validInput(input) && stoi(input) >= 5 && stoi(input) <= 15 &&
          stoi(input) % 2 == 1) { // Kontrola podmínek
        m_roomSize = stoi(input);
        opakovat = false;
      } else {
        cout << "Neplatná hodnota!" << endl << flush;
      }
    }
    
    //MapManager.map->generateMap(m_roomSize, m_roomCount); //Vygeneruje novou mapu
    system("CLS"); //Vymaže z konzole nastavení
    //ap->printMap(1); //Zobrazí první místnost
  }

  int Menu::getRoomCount() { return m_roomCount; }

  int Menu::getRoomSize() { return m_roomSize; };

void Menu::printTitle() { // Bude cenit, jméno hry kdyžtak potom změníme
  std::cout << R"( 
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
*    __ __       __          __ __        __         __ __          *
*   / // ___ ___/ ___ ___   / // __ _____/ /____ _  / // _______ _  *
*  / _  / _ / _  / _ / -_) / _  / // (_-/ __/ _ `/ / _  / __/ _ `/  *
* /_//_/\___\_,_/_//_\__/ /_//_/\_,_/___\__/\_,_/ /_//_/_/  \_,_/   *
*                                                                   *
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
  )" << '\n';
}

/*int main() {
  Menu *Test = new Menu();
  Test->inicialise();
  cout << "Počet místností je:" << endl << flush;
  cout << Test->getRoomCount() << endl;
  cout << "Velikost místností je:" << endl << flush;
  cout << Test->getRoomSize() << endl << flush;
  clearTerminal();
  cout << "Přeji pěkný den! :o)" << endl;
}*/