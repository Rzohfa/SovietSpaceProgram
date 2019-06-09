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
	void timePass();
	void timeReset();
	int getDay();
	int getYear();
	int getMonth();
	void pause();
	void resume();
	void printDate();
	void setScreenManager(ScreenManager* mgr);
	void stopGame();
	bool getNotPaused();
}