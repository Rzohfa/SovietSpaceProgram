#pragma once

#include "ScreenManager.h"
#include <Windows.h>
#include <iostream>

struct gameDate
{
	int day = 0;
	int month = 0;
	int year = 0;
};

namespace game_time
{
	// Handles time movement
	void timePass();
	// Set time to desired date
	void timeReset(int, int, int);
	// Returns current date info
	int getDay();
	int getYear();
	int getMonth();
	// Sets date when timeReset is just to much
	void setDay(int);
	void setYear(int);
	void setMonth(int);
	// Controls time pause state
	void pause();
	void resume();
	// Shows date on console
	void printDate();
	// Sets screen manager for updates
	void setScreenManager(ScreenManager* mgr);
	// Stops the entire game
	void stopGame();
	// Return if the games is paused
	bool getNotPaused();
	// Returns date as string
	std::string toString();
}