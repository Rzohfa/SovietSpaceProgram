#pragma once

#include "ctx.h"
#include "Screen.h"
#include <SFML/Graphics.hpp>
#include <vector>


class ScreenManager
{
public:
	std::vector<Screen*> screens;
	Screen* current_screen;
	ScreenManager(Screen*);
	void addScreen(Screen*);
	void displayScreen();
	void update(int);
	void draw();
	void onKeyPress();
	void onKeyRelease();
	void onMousePress();
	void onMouseDrag();
};

