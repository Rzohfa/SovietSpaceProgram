#pragma once

#include "ScreenMenu.h"
#include "ScreenManager.h"
#include <SFML/Graphics.hpp>
#include <vector>
#include "Text.h"
#include "helper.h"

class ScreenPause : Screen {
private:
	sf::Texture background;
	float height = 1.0f;
	float width = 1.0f;
	float scaleX;
	float scaleY;		
	std::vector<button> buttons;
	ScreenManager* manager;
	void drawButtons();
public:
	ScreenPause(float, float);
	void update();
	void draw();
	void onKeyPress();
	void onKeyRelease();
	void onMousePress();
	void onMouseDrag();
	void addButton(int, int, std::string);
	void setManager(ScreenManager*);
	void changeScreen(int);
};