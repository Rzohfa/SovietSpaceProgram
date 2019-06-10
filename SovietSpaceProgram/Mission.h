#pragma once

#include "Popup.h"

class Mission
{
public:
	bool historyPops[13] = { 0 };
	int number = 1;
	int day = 0;
	int month = 0;
	int year = 0;
	int pi = 0;
	bool endOfGame = false;
	void showPopup();
};