#pragma once

#include "ScreenMenu.h"
#include "ScreenManager.h"
#include <SFML/Graphics.hpp>
#include <vector>
#include "Text.h"

class ScreenPause : Screen {
private:
	sf::Texture background;
	float height = 1.0f;
	float width = 1.0f;
	float scaleX;
	float scaleY;		// potencjalny œmietnik, DRY
	std::vector<button> buttons;
	ScreenManager* manager;
	void drawButtons();
public:
	ScreenPause(float, float);
	void update();
	void draw();
	void onKeyPress();
	void onKeyRelease();
	void onMousePress(sf::RenderWindow*, sf::Event);
	void onMouseDrag();
	void addButton(int, int, std::string);
	void setManager(ScreenManager*);
	void changeScreen(int);
};