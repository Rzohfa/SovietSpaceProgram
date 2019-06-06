#pragma once

#include "time.h"
#include "helper.h"
#include <cstdlib>

class Event
{
private:
	std::string type;
	std::string text;
	gameDate activation_date;
	int chance_of_happen;
public:
	Event(std::string type, std::string txt, int ch, int d, int m, int y);
	void canItHappen();
	void canItFinish();
	void makeItHappen();
};