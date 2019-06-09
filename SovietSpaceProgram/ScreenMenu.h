#pragma once

#include "Screen.h"
#include "ScreenManager.h"
#include "ScreenGame.h"
#include <SFML/Graphics.hpp>
#include <vector>
#include "Text.h"
#include "helper.h"

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
	float scaleY;		
	std::vector<button> buttons;
	ScreenManager* manager;
	void drawButtons();
public:
	ScreenMenu(float, float);
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