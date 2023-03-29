#include "Update.h"
#include "Menu.cpp"
#include <cstdlib>
#include <windows.h>




Update::Update() {};
Menu* menu = new Menu();
void Update::firstTitle() {
	system("CLS");//clears the console
	menu->printTitle();//prints logo of our game
	setShowTitleValue(false);//makes sure titles don t print again
	Sleep(2000);//waits 2000 ms
	menu->inicialise();//launches settings of the game and the game
}

void Update::ifSpace() {
	
	system("CLS");//clears the console
	menu->inicialise();
}
void Update::doUpdate(MapManager* map)
{

	setShowTitleValue(true);
	setUpdateValue(true);
	
	std::string input="";

	while (updatevalue == true) {
		cin >> input;
		if (showTitle == true) {//if the user launches console for the first time this appears
			firstTitle();
			

		}
		if (GetAsyncKeyState(VK_ESCAPE)==true) {//controling if escape has been pressed
			PrintFinalTitle();
			setUpdateValue(false);
		}
		if (input==" ") {//if user hits space
			ifSpace();
			
		}
		//maybe switch it to switch
		if (input == "w") {//input of the movment
			map->movePlayer(0, 1);
		}
		if (input == "a") {
			//pot�ebuje se to clearnout a znova vygenerovat
			map->movePlayer(-1, 0);
		}
		if (input == "s") {
			map->movePlayer(0, -1);
		}
		if (input == "d") {
			map->movePlayer(1,0);
		}
        else{
            cout<<"spatne jste zadali"<<std::endl;
        }



	}
};
void Update::PrintFinalTitle() {
	std::cout << R"( 
* * * * * * * * * * * * *
*                       *
*	Made by:        *
*	-------------   *
*	Filip Hnilica   *
*	*************   *
*	Tim Prikryl     *
*	*************   *
*	Vit Vodicka     *
*                       *
* * * * * * * * * * * * *
  )" << '\n';
}

void Update::setShowTitleValue(bool value) {//setters of the values
	showTitle = value;
}
void Update::setUpdateValue(bool value) {
	updatevalue = value;
}
void Update::setMovment(bool value) {
	movement = value;
}
