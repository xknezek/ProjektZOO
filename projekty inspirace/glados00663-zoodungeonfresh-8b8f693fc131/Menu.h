#include <iostream>
#include <stdlib.h>
#include <iostream>
#include <stdlib.h>

#ifndef ZOOPROJECT_MENU_H
#define ZOOPROJECT_MENU_H

using namespace ::std;

class Menu {
  int m_roomCount; // Počet map/místností
    //Velikost místnosti
    int m_roomSize;

public:
  Menu(); // Konstruktor
    bool validInput(string input);


  void inicialise();//funkce si řekne o základní parametry

  int getRoomCount();

  int getRoomSize();
    void printTitle();
};


#endif //_MENU_H