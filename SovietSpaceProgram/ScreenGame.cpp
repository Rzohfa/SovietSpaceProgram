#include "ScreenGame.h"
#include <iostream>


ScreenGame::ScreenGame(std::string filename, int x, int y)
{
	if (!map.loadFromFile(filename))
		std::cout << "ERROR:\tCan't load map from file\n";
	this->x = x;
	this->y = y;
}

void ScreenGame::update()
{
	if (game_objects.size() > 0)
	{
		for (auto i : game_objects)
			i->produce();
	}
}

void ScreenGame::draw()
{
	ctx::save();
	ctx::scale(2, 2);
	txt::printText(game_time::toString() + "  Mission: " + std::to_string(game::getMission()));

	ctx::restore();

	ctx::save();

	ctx::save();

	ctx::translate(x / 2, y / 2);
	ctx::scale(scale, scale);
	ctx::translate(mx, my);

	ctx::drawImage(
		map,
		0, 0, 2400, 1805,
		-((float)2400 / 2),
		-((float)1805 / 2),
		2400, 1805);

	for (auto i : game_objects)
		i->draw();

	ctx::restore();
	
	//debug();

	control();
	
	ctx::save();

	if (showResources)
	{
		game::showResources();
	}

	ctx::restore();

	ctx::restore();

}

void ScreenGame::control()
{
	//game::pauseGame();
	popupOpened = false;
	if (game::missionFinished())
	{
		failable = false;
		game::pauseGame();
	}
	if (!historyPops[0])
	{
		if (pi == 0)
		{
			game::pauseGame();
			popup::R71();
		}
		else if (pi == 1)
		{
			popup::R72();
		}
		else
		{
			pi = 0;
			game::startGame();
			historyPops[0] = true;
		}
	}
	else if (!historyPops[1] &&
		game_time::getDay() == 21 &&
		game_time::getMonth() == 8 &&
		game_time::getYear() == 1957
		)
	{
		if (pi == 0)
		{
			game::pauseGame();
			popup::S11();
		}
		else if (pi == 1)
		{
			popup::S12();
		}
		else if (pi == 2)
		{
			popup::S13();
		}
		else
		{
			pi = 0;
			game::startGame();
			historyPops[1] = true;
			popupOpened = true;
		}
	}
	else if (!historyPops[2] &&
		game_time::getDay() == 4 &&
		game_time::getMonth() == 10 &&
		game_time::getYear() == 1957
		)
	{
		if (pi == 0)
		{
			game::pauseGame();
			popup::S21();
		}
		else if (pi == 1)
		{
			popup::S22();
		}
		else if (pi == 2)
		{
			popup::S23();
		}
		else
		{
			pi = 0;
			game::startGame();
			historyPops[2] = true;
			popupOpened = true;
		}
	}
	else if (!historyPops[3] &&
		game_time::getDay() == 3 &&
		game_time::getMonth() == 11 &&
		game_time::getYear() == 1957
		)
	{
		if (pi == 0)
		{
			game::pauseGame();
			popup::L11();
		}
		else if (pi == 1)
		{
			popup::L12();
		}
		else if (pi == 2)
		{
			popup::L13();
		}
		else
		{
			pi = 0;
			game::startGame();
			historyPops[3] = true;
			popupOpened = true;
		}
	}
	else if (!historyPops[4] &&
		game_time::getDay() == 4 &&
		game_time::getMonth() == 1 &&
		game_time::getYear() == 1959
		)
	{
		if (pi == 0)
		{
			game::pauseGame();
			popup::L21();
		}
		else if (pi == 1)
		{
			popup::L22();
		}
		else if (pi == 2)
		{
			popup::L23();
		}
		else
		{
			pi = 0;
			game::startGame();
			historyPops[4] = true;
			popupOpened = true;
		}
	}
	else if (!historyPops[5] &&
		game_time::getDay() == 14 &&
		game_time::getMonth() == 9 &&
		game_time::getYear() == 1959
		)
	{
		if (pi == 0)
		{
			game::pauseGame();
			popup::L31();
		}
		else if (pi == 1)
		{
			popup::L32();
		}
		else if (pi == 2)
		{
			popup::L33();
		}
		else
		{
			pi = 0;
			game::startGame();
			historyPops[5] = true;
			popupOpened = true;
		}
	}
	else if (!historyPops[6] &&
		game_time::getDay() == 7 &&
		game_time::getMonth() == 10 &&
		game_time::getYear() == 1959
		)
	{
		if (pi == 0)
		{
			game::pauseGame();
			popup::VT11();
		}
		else if (pi == 1)
		{
			popup::VT12();
		}
		else if (pi == 2)
		{
			popup::VT13();
		}
		else
		{
			pi = 0;
			game::startGame();
			historyPops[6] = true;
			popupOpened = true;
		}
	}
	else if (!historyPops[7] &&
		game_time::getDay() == 12 &&
		game_time::getMonth() == 4 &&
		game_time::getYear() == 1961
		)
	{
		if (pi == 0)
		{
			game::pauseGame();
			popup::VT61();
		}
		else if (pi == 1)
		{
			popup::VT62();
		}
		else if (pi == 2)
		{
			popup::VT63();
		}
		else
		{
			pi = 0;
			game::startGame();
			historyPops[7] = true;
			popupOpened = true;
		}
	}
	else if (!historyPops[8] &&
		game_time::getDay() == 16 &&
		game_time::getMonth() == 6 &&
		game_time::getYear() == 1963
		)
	{
		if (pi == 0)
		{
			game::pauseGame();
			popup::VH21();
		}
		else if (pi == 1)
		{
			popup::VH22();
		}
		else if (pi == 2)
		{
			popup::VH23();
		}
		else
		{
			pi = 0;
			game::startGame();
			historyPops[8] = true;
			popupOpened = true;
		}
	}
	else if (!historyPops[9] &&
		game_time::getDay() == 18 &&
		game_time::getMonth() == 3 &&
		game_time::getYear() == 1965
		)
	{
		if (pi == 0)
		{
			game::pauseGame();
			popup::VE31();
		}
		else if (pi == 1)
		{
			popup::VE32();
		}
		else if (pi == 2)
		{
			popup::VE33();
		}
		else
		{
			pi = 0;
			game::startGame();
			historyPops[9] = true;
			popupOpened = true;
		}
	}
	else if (!historyPops[10] &&
		game_time::getDay() == 1 &&
		game_time::getMonth() == 3 &&
		game_time::getYear() == 1966
		)
	{
		if (pi == 0)
		{
			game::pauseGame();
			popup::SAL11();
		}
		else if (pi == 1)
		{
			popup::SAL12();
		}
		else if (pi == 2)
		{
			popup::SAL13();
		}
		else
		{
			pi = 0;
			game::startGame();
			historyPops[10] = true;
			popupOpened = true;
		}
	}
	else if (!historyPops[11] &&
		game_time::getDay() == 23 &&
		game_time::getMonth() == 4 &&
		game_time::getYear() == 1971
		)
	{
		if (pi == 0)
		{
			game::pauseGame();
			popup::SATP1();
		}
		else if (pi == 1)
		{
			popup::SATP2();
		}
		else
		{
			pi = 0;
			game::startGame();
			historyPops[11] = true;
			popupOpened = true;
		}
	}
	else if (!historyPops[12] &&
		game_time::getDay() == 15 &&
		game_time::getMonth() == 7 &&
		game_time::getYear() == 1975
		)
	{
		if (pi == 0)
		{
			game::pauseGame();
			popup::end1();
		}
		else if (pi == 1)
		{
			popup::end2();
		}
		else
		{
			pi = 0;
			historyPops[12] = true;
			manager->update(1);
		}
	}
	if (popupOpened)
	{
		game::setDate();
	}
	if (game::missionFailed() && failable)
	{
		if (pi == 0)
		{
			game::pauseGame();
			popup::gameFailed();
		}
		else
			manager->update(1);
	}
	if (!failable)
	{
		game::finishMission();
		failable = true;
	}
}

void ScreenGame::onKeyPress()
{
	if (game::getKey(36))
	{
		manager->update(2);
		game_time::pause();
	}
	else if (game::getKey(1))
		building = true;
	else if (game::getKey(58))
		pi++;
	else if (game::getKey(14))
	{
		if (paused)
			game_time::resume();
		else
			game_time::pause();
	}
	else if (building && game::getKey(85))
		choice = "ablator";
	else if (building && game::getKey(86))
		choice = "carbon fiber";
	else if (building && game::getKey(87))
		choice = "structural";
	else if (building && game::getKey(88))
		choice = "computer";
	else if (building && game::getKey(89))
		choice = "electronics";
	else if (building && game::getKey(90))
		choice = "engine";
	else if (building && game::getKey(91))
		choice = "fuel tank";
	else if (building && game::getKey(92))
		choice = "memory chip";
	else if (building && game::getKey(93))
		choice = "plastic";
	else if (building && game::getKey(94))
		choice = "processor";
	else if (building && game::getKey(95))
		choice = "sond";
	else if (building && game::getKey(96))
		choice = "cockpit";
	else if (game::getKey(60))
		showResources = true;
}

void ScreenGame::onKeyRelease()
{
	if (!game::getKey(60))
		showResources = false;
}

void ScreenGame::onMousePress()
{
	if (game::isClicked() && game::getMouseKey() == 0 && building && choice != "")
		addBuilding((game::getX() - (x * 0.5)) / scale - mx, (game::getY() - (y * 0.5)) / scale - my);
	if (game::isClicked() && game::getMouseKey() != 0 && building)
	{
		building = false;
		choice = "";
	}
		

}

void ScreenGame::setManager(ScreenManager* manager)
{
	this->manager = manager;
}

void ScreenGame::changeScreen(int choice)
{
	manager->update(choice);
	game::pauseGame();
}

void ScreenGame::addBuilding(int x, int y)
{

	if ((int)ctx::getPixel(game::getX(), game::getY()).red  == 0 &&
		(int)ctx::getPixel(game::getX(), game::getY()).green > 0 &&
		(int)ctx::getPixel(game::getX(), game::getY()).blue == 0)
	{
		Factory* tmp = new Factory(x, y, this->choice);
		game_objects.push_back(tmp);
	}

	building = false;
	this->choice = "";
}

void ScreenGame::clearBuildings()
{
	game_objects.clear();
}

void ScreenGame::debug()
{
	if(pi == 0)
		popup::R71();
	else if(pi == 1)
		popup::R72();
	else if(pi == 2)
		popup::S11();
	else if(pi == 3)
		popup::S12();
	else if(pi == 4)
		popup::S13();
	else if(pi == 5)
		popup::S21();
	else if(pi == 6)
		popup::S22();
	else if(pi == 7)
		popup::S23();
	else if(pi == 8)
		popup::L11();
	else if(pi == 9)
		popup::L12();
	else if(pi == 10)
		popup::L13();
	else if(pi == 11)
		popup::L21();
	else if(pi == 12)
		popup::L22();
	else if(pi == 12)
		popup::L23();
	else if(pi == 13)
		popup::L31();
	else if(pi == 14)
		popup::L32();
	else if(pi == 15)
		popup::L33();
	else if(pi == 16)
		popup::VT11();
	else if(pi == 17)
		popup::VT12();
	else if(pi == 18)
		popup::VT13();
	else if(pi == 19)
		popup::VT61();
	else if(pi == 20)
		popup::VT62();
	else if(pi == 21)
		popup::VT63();
	else if(pi == 22)
		popup::VH21();
	else if(pi == 23)
		popup::VH22();
	else if(pi == 24)
		popup::VH23();
	else if(pi == 25)
		popup::VE31();
	else if(pi == 26)
		popup::VE32();
	else if(pi == 27)
		popup::VE33();
	else if(pi == 28)
		popup::SAL11();
	else if(pi == 29)
		popup::SAL12();
	else if(pi == 30)
		popup::SAL13();
	else if(pi == 31)
		popup::SATP1();
	else if(pi == 32)
		popup::SATP2();
	else if(pi == 33)
		popup::end1();
	else if(pi == 34)
		popup::end2();
	else if(pi == 35)
		popup::gameFailed();

}