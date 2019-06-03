#pragma once

#include "Screen.h"
#include "ScreenManager.h"
#include "Building.h"
#include <vector>
#include <SFML/Graphics.hpp>
#include "Factory.h"
#include "CoalPowerPlant.h"
#include "NuclearPowerPlant.h"
#include "time.h"
#include "helper.h"


class ScreenGame : Screen {
private:
	std::vector<Building*> game_objects;
	ScreenManager* manager;
	sf::Texture map;
	int x = 0;
	int y = 0;
	float mx = 0;
	float my = 0;
	float scale = 0.9f;
	bool building = false;
	bool paused = false;
	int build_option = -1;
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