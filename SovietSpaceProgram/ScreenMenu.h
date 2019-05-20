#pragma once

#include "Screen.h"
#include <SFML/Graphics.hpp>
#include <vector>
#include "Text.h"

struct button 
{
	int x;
	int y;
	std::string content;
};

class ScreenMenu : Screen {
private:
	sf::Texture background;
	float height = 1.0f;
	float width = 1.0f;
	float scaleX;
	float scaleY;		// potencjalny œmietnik, DRY
	std::vector<button> buttons;
	void drawButtons();
public:
	ScreenMenu(float, float);
	void update();
	void draw();
	void onKeyPress();
	void onKeyRelease();
	void onMousePress(sf::RenderWindow*, sf::Event);
	void onMouseDrag();
	void addButton(int, int, std::string);
};