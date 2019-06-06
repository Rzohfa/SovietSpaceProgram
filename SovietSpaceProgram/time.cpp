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
				Sleep(1000);

				manager->current_screen->update();

				printDate();

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

	void timeReset()
	{
		date.year = 1950;
		date.month = 1;
		date.day = 1;
	}

	void pause()
	{
		notPaused = false;
		std::cout << "paused\n";
	}
	
	void resume()
	{
		notPaused = true;
		std::cout << "resumed\n";
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
}