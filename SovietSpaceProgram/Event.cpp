#include "Event.h"

Event::Event(std::string type, std::string txt, int ch, int d, int m, int y)
{
	this->type = type;
	this->text = txt;
	this->activation_date.day = d;
	this->activation_date.day = m;
	this->activation_date.day = y;
	this->chance_of_happen = ch;
}

void Event::canItHappen()
{
	if (type == "daily")
	{
		int tmp = rand() % 100;
		if (tmp < chance_of_happen)
			makeItHappen();
	}
	else if (type == "special")
	{
		if (game_time::getDay() == activation_date.day &&
			game_time::getMonth() == activation_date.month &&
			game_time::getYear() == activation_date.year)
			makeItHappen();
	}
}

void Event::canItFinish()
{

}

void Event::makeItHappen()
{

}