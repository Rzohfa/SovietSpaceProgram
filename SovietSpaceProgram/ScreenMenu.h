#pragma once

#include "Screen.h"
#include <SFML/Graphics.hpp>

class ScreenMenu : Screen {
private:
	sf::Texture background;
	int height = 1440;
	int width = 2560;
public:
	ScreenMenu();
	void update();
	void draw();
	void onKeyPress();
	void onKeyRelease();
	void onMousePress();
	void onMouseDrag();
};