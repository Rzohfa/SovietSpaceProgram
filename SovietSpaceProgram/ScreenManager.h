#pragma once

#include "ctx.h"
#include "Screen.h"
#include <SFML/Graphics.hpp>
#include <vector>


class ScreenManager : Screen
{
public:
	std::vector<Screen*> screens;
	Screen* current_screen;
	ScreenManager(Screen*);
	void addScreen(Screen*);
	void displayScreen(int);
	void update();
	void draw();
	void onKeyPress();
	void onKeyRelease();
	void onMousePress(sf::RenderWindow*, sf::Event);
	void onMouseDrag();
};

