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

	// clay;
	// coal;
	// iron;
	// uranium;
	// copper;
	// sand;
	// oil;
	// titanium;
	// aluminium;
	// magnesium;
	// graphite;
	// silicon;
	//
	// brick;
	// glass;
	// plastic;
	// fuel_tank;
	// cockpit;
	// computer;
	// sond;
	// engine;
	// structural_el;
	// circuits;
	// basic_processing_unit;
	// processing_unit;
	// adv_processing_unit;
	// super_computer;
	// capacitor;
	// resistor;
	// transistor;
	// memory_chip;
	// diode;
	// carbon_fiber;
	// ablator;

	
	void initGame(sf::RenderWindow* ref);
	void initKeyboard();
	void pressKey(int);
	void releaseKey(int);
	bool getKey(int);
	void pressMouse(int, int, int);
	void releaseMouse();
	bool isClicked();
	int getX();
	int getY();
	int getMouseKey();
	void closeWindow();
	void setWindow(sf::RenderWindow*);
	void produce(std::string);

	void startGame();
	void pauseGame();

	bool missionFinished();
	void finishMission();
	bool missionFailed();

	int getMission();
	void setDate();
	void showResources();
}