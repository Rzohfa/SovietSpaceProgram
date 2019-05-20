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

}

void ScreenGame::draw()
{
	ctx::save();

	ctx::translate(x / 2, y / 2);
	ctx::scale(scale, scale);
	//ctx::translate(map.getPosition().x, map.getPosition().y);

	ctx::drawImage(
		map, 
		0, 0, 2400, 1805, 
		-((float)2400 / 2), 
		-((float)1805 / 2), 
		2400, 1805);

	ctx::translate(x / -2, y / -2);

	//ctx::translate(-2400, -1805);

	for (auto i : game_objects)
		i->draw();

	ctx::restore();
}

void ScreenGame::onKeyPress()
{
	if (game::getKey(36))
		manager->update(2);
	else if (game::getKey(1))
		addBuilding(0, 500, 500);
	else if (game::getKey(13))
		addBuilding(1, 600, 600);
	else if (game::getKey(12))
		addBuilding(2, 700, 700);
}

void ScreenGame::onKeyRelease()
{

}

void ScreenGame::onMousePress()
{

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
}

void ScreenGame::addBuilding(int choice, int x, int y)
{
	if (choice == 0)
	{
		Factory* tmp = new Factory(x, y);
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

void ScreenGame::clearBuildings()
{
	game_objects.clear();
}

