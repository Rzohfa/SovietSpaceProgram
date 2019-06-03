#include "time.h"


namespace game_time
{
	int year = 0;
	int month = 0;
	int day = 0;
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

				// Remake to normal date if possible
				day++;
				if (month == 2)
				{
					if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
					{
						if (day > 29)
						{
							day = 1;
							month++;
						}
					}
					else if (day > 28)
					{
						day = 1;
						month++;
					}
				}
				else if ((month < 8 && month % 2 == 1) || (month > 7 && month % 2 == 0))
				{
					if (day > 31)
					{
						month++;
						day = 1;
					}
				}
				else
				{
					if (day > 30)
					{
						month++;
						day = 1;
					}
				}
				if (month > 12)
				{
					year++;
					month = 1;
				}
			}

			if (notPaused == false)
				std::cout << "paused\n";
		}
	}

	void timeReset()
	{
		year = 1950;
		month = 1;
		day = 1;
	}

	void pause()
	{
		notPaused = false;
	}
	
	void resume()
	{
		notPaused = true;
	}

	int getDay()
	{
		return day;
	}
	
	int getYear()
	{
		return year;
	}
	
	int getMonth()
	{
		return month;
	}

	void printDate()
	{
		std::cout << year << " " << month << " " << day << std::endl;
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