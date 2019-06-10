#include "ScreenGame.h"
#include <iostream>


ScreenGame::ScreenGame(std::string filename, int x, int y)
{
	if (!mapImg.loadFromFile(filename))
		std::cout << "ERROR:\tCan't load map from file\n";
	if (!map.loadFromFile(filename))
		std::cout << "ERROR:\tCan't load map from file\n";
	//mapImg = map.copyToImage();
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

	control();

	ctx::restore();

}

void ScreenGame::control()
{
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
	else if (building && game::getKey(27))
		build_option = 0;
	else if (building && game::getKey(28))
		build_option = 1;
	else if (building && game::getKey(29))
		build_option = 2;
	else if (game::getKey(72))
		mx -= 50;
	else if (game::getKey(71))
		mx += 50;
	else if (game::getKey(73))
		my += 50;
	else if (game::getKey(74))
		my -= 50;
	else if (game::getKey(15))
		scale += 0.1f;
	else if (game::getKey(11))
		scale -= 0.1f;
	else if (game::getKey(58))
		pi++;
	else if (game::getKey(17))
	{
		scale = 0.9f;
		mx = 0;
		my = 0;
	}
	else if (game::getKey(14))
	{
		if (paused)
			game_time::resume();
		else
			game_time::pause();
	}


}

void ScreenGame::onKeyRelease()
{

}

void ScreenGame::onMousePress()
{
	if (game::isClicked() && game::getMouseKey() == 0 && building && build_option != -1) {
		addBuilding(build_option, (game::getX() - (x * 0.5)) / scale - mx, (game::getY() - (y * 0.5)) / scale - my);
		//std::cout << mapImg.getPixel((int)((game::getX() - (x * 0.5)) / scale - mx), (int)((game::getY() - (y * 0.5)) / scale - my)).a << std::endl;
	}

	
}

void ScreenGame::onMouseDrag()
{

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

void ScreenGame::addBuilding(int choice, int x, int y)
{

	//mapImg.getPixel(game::getX(), game::getY()).a != 0
	if (true)
	{
		//mapImg = game::getScreenshot();
		std::cout << mapImg.getPixel(game::getX(), game::getY()).g << std::endl;
		if (choice == 0)
		{
			Factory* tmp = new Factory(x, y, "");
			game_objects.push_back((Building*)tmp);
		}
		else if (choice == 1)
		{
			CoalPowerPlant* tmp = new CoalPowerPlant(x, y);
			game_objects.push_back((Building*)tmp);
		}
		else if (choice == 2)
		{
			NuclearPowerPlant* tmp = new NuclearPowerPlant(x, y);
			game_objects.push_back((Building*)tmp);
		}
	}

	build_option = -1;
	building = false;
}

void ScreenGame::clearBuildings()
{
	game_objects.clear();
}

