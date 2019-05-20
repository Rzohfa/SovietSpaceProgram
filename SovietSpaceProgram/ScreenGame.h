#pragma once

#include "Screen.h"
#include "ScreenManager.h"
#include "Building.h"
#include <vector>
#include <SFML/Graphics.hpp>
#include "Factory.h"
#include "CoalPowerPlant.h"
#include "NuclearPowerPlant.h"

class ScreenGame : Screen {
private:
	std::vector<Building*> game_objects;
	ScreenManager* manager;
	sf::Texture map;
	int x = 0;
	int y = 0;
	float scale = 0.9f;
public:
	ScreenGame(std::string, int, int);
	void update();
	void draw();
	void onKeyPress();
	void onKeyRelease();
	void onMousePress();
	void onMouseDrag();
	void setManager(ScreenManager*);
	void changeScreen(int);
	void addBuilding(int, int, int);
	void clearBuildings();
};