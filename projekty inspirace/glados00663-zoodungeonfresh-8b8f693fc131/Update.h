#pragma once
#include "Menu.h"

#include "MapManager.h"

#ifndef ZOOPROJECT_UPDATE_H
#define ZOOPROJECT_UPDATE_H

class Update {
	bool updatevalue;
	bool showTitle;
	bool movement;
public:

	Update();

	void ifSpace();
	void firstTitle();

	int Move();

	void PrintFinalTitle();
	void doUpdate(MapManager* map);
	void setUpdateValue(bool value);
	void setShowTitleValue(bool value);
	void setMovment(bool value);
};

#endif //ZOOPROJECT_UPDATE_H