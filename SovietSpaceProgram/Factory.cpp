#include "Factory.h"
#include <iostream>

Factory::Factory(int x, int y) : Building(x, y, 57, 27) {}

void Factory::onClick() 
{

}

void Factory::draw()
{
	ctx::save();
	
	
	//ctx::translate(position.x, position.y);
	//ctx::scale(100, 100);
	ctx::drawImage(texture, 111, 7, 57, 27, 0, 0, 57, 27);
	//ctx::translate(-position.x, -position.y);
	//std::cout << "X:\t" << position.x << "\nY:\t" << position.y << std::endl;
	
	ctx::restore();
}