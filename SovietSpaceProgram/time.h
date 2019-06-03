#pragma once

#include "ScreenManager.h"
#include <Windows.h>
#include <iostream>

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
}