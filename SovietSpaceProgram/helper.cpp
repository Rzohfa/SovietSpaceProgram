#include "helper.h"

namespace game
{
	Click click;
	sf::RenderWindow* window;
	bool keyboard[100];
	//int electricity_balance = 0;
	std::thread time_thread;
	GameRes* resources = new GameRes();
	int mission = 0;
	Dates dates[12];

	void initGame(sf::RenderWindow* ref)
	{
		initKeyboard();
		setWindow(ref);
		
		dates[0] = { 21,7,1957 };
		dates[1] = { 4,10,1957 };
		dates[2] = { 3,11,1957 };
		dates[3] = { 4,1,1959 };
		dates[4] = { 14,9,1959 };
		dates[5] = { 7,10,1959 };
		dates[6] = { 12,4,1961 };
		dates[7] = { 16,6,1963 };
		dates[8] = { 18,3,1965 };
		dates[9] = { 1,3,1966 };
		dates[10] = { 23,4,1971 };
		dates[11] = { 15,7,1975 };

		resources->toZero();

		game_time::timeReset(1,5,1957);
		time_thread = std::thread(game_time::timePass);
	}

	void initKeyboard()
	{
		for (auto i : keyboard)
			i = false;
	}

	void pressKey(int code)
	{
		try
		{
			if (code < 0 || code > 99)
				throw(code);
			else
				keyboard[code] = true;
		}
		catch (int e)
		{
			std::cout << "ERROR: Unknown key. Key code: " << code << std::endl;
		}
	}

	void releaseKey(int code)
	{
		try
		{
			if (code < 0 || code > 99)
				throw(code);
			else
				keyboard[code] = false;
		}
		catch (int e)
		{
			std::cout << "ERROR: Unknown key. Key code: " << code << std::endl;
		}
	}

	bool getKey(int key)
	{
		return keyboard[key];
	}

	void pressMouse(int code, int x, int y)
	{
		click.clicked = true;
		click.button = code;
		click.x = x;
		click.y = y;
	}

	void releaseMouse() 
	{
		click.clicked = false;
		click.button = -1;
		click.x = -1;
		click.y = -1;
	}

	bool isClicked()
	{
		return click.clicked;
	}

	int getX()
	{
		return click.x;
	}

	int getY()
	{
		return click.y;
	}

	int getMouseKey()
	{
		return click.button;
	}

	void setWindow(sf::RenderWindow* ref)
	{
		window = ref;
	}

	void produce(std::string a)
	{
		resources->produce(a);
	}

	void closeWindow()
	{
		game_time::stopGame();
		time_thread.join();
		window->close();
	}

	void startGame()
	{
		game_time::resume();
	}

	void pauseGame()
	{
		game_time::pause();
	}

	bool missionFinished()
	{
		return resources->missionFinished(mission);
	}

	void finishMission()
	{
		mission++;
		game_time::setDay(dates[mission].day - 1);
		game_time::setMonth(dates[mission].month);
		game_time::setYear(dates[mission].year);
		resources->toZero();
	}

	bool missionFailed()
	{
		if (game_time::getDay() > dates[mission].day &&
			game_time::getMonth() == dates[mission].month &&
			game_time::getYear() == dates[mission].year)
			return true;
		
		return false;
	}

	int getMission() {
		return mission+1;
	}

	void setDate()
	{
		game_time::setDay(dates[mission].day);
		game_time::setMonth(dates[mission].month - 1);
		game_time::setYear(dates[mission].year);
	}

	void showResources()
	{
		resources->toPopup();
	}


}