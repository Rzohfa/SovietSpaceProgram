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
	void addScreen(Screen*);
	void displayScreen(int);

};

