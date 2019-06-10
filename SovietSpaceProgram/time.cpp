#include "time.h"


namespace game_time
{
	gameDate date;
	bool notPaused = true;
	ScreenManager* manager;
	bool game_plays = true;

	void timePass()
	{
		while (game_plays)
		{
			if (notPaused)
			{
				Sleep(2000);

				manager->current_screen->update();

				//printDate();

				// Remake to normal date if possible
				date.day++;
				if (date.month == 2)
				{
					if (((date.year % 4 == 0) && (date.year % 100 != 0)) || (date.year % 400 == 0))
					{
						if (date.day > 29)
						{
							date.day = 1;
							date.month++;
						}
					}
					else if (date.day > 28)
					{
						date.day = 1;
						date.month++;
					}
				}
				else if ((date.month < 8 && date.month % 2 == 1) || (date.month > 7 && date.month % 2 == 0))
				{
					if (date.day > 31)
					{
						date.month++;
						date.day = 1;
					}
				}
				else
				{
					if (date.day > 30)
					{
						date.month++;
						date.day = 1;
					}
				}
				if (date.month > 12)
				{
					date.year++;
					date.month = 1;
				}
			}
		}
	}

	void timeReset(int d, int m, int y)
	{
		date.year = y;
		date.month = m;
		date.day = d;
	}

	void pause()
	{
		notPaused = false;
		//std::cout << "paused\n";
	}
	
	void resume()
	{
		notPaused = true;
		//std::cout << "resumed\n";
	}

	int getDay()
	{
		return date.day;
	}
	
	int getYear()
	{
		return date.year;
	}
	
	int getMonth()
	{
		return date.month;
	}

	void setDay(int i)
	{
		date.day = i;
	}

	void setYear(int i)
	{
		date.year = i;
	}

	void setMonth(int i)
	{
		date.month = i;
	}

	void printDate()
	{
		std::cout << date.year << " " << date.month << " " << date.day << std::endl;
	}

	void setScreenManager(ScreenManager* mgr)
	{
		manager = mgr;
	}

	void stopGame()
	{
		game_plays = false;
	}

	bool getNotPaused()
	{
		return notPaused;
	}

	std::string toString()
	{
		std::string ret;
		ret = std::to_string(date.day);
		ret.append(".");
		ret.append(std::to_string(date.month));
		ret.append(".");
		ret.append(std::to_string(date.year));
		return ret;
	}

}