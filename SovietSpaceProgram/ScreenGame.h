#pragma once

#include "Screen.h"
#include "Building.h"
#include <vector>

class ScreenGame : Screen {
protected:
	std::vector<Building> game_objects;
public:
	void update();
	void draw();
	void onKeyPress();
	void onKeyRelease();
	void onMousePress();
	void onMouseDrag();
};