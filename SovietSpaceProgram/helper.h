#pragma once

#include <iostream>
#include "Screen.h"
#include "ScreenManager.h"
#include <vector>
#include <SFML/Graphics.hpp>
#include "Factory.h"
#include "time.h"
#include <thread>
#include "Text.h"
#include "Popup.h"
#include "resources.h"

namespace game
{
	struct Click
	{
		bool clicked = false;
		int button = -1;
		int x = -1;
		int y = -1;
	};

	struct Dates
	{
		int day;
		int month;
		int year;
	};

	// Initializes all global game variables (eg. keyboard, mouse), starts time thread
	void initGame(sf::RenderWindow* ref);
	// Initializes keyboard array (set all keys to false)
	void initKeyboard();
	// Changes key value in array to true/false
	void pressKey(int);
	void releaseKey(int);
	// Returns key value
	bool getKey(int);
	// Set mouse X, Y, keycode and clicked to true in Click variable
	void pressMouse(int, int, int);
	// Set above values to default and clicked to false
	void releaseMouse();
	// Returns if mouse key is clicked
	bool isClicked();
	// Returns coordinates of current mouse click and which (l/r) button was clicked
	int getX();
	int getY();
	int getMouseKey();
	// Closes the game
	void closeWindow();
	// Sets SFML render window for more flexibility in code
	void setWindow(sf::RenderWindow*);
	// Handles producing stuff to magazine 
	void produce(std::string);

	// Handles time without need to include game_time namespace
	void startGame();
	void pauseGame();

	// Mission control functions
	bool missionFinished();
	void finishMission();
	bool missionFailed();
	int getMission();
	void setDate();

	// Shows resources popup
	void showResources();
}