#include "Factory.h"
#include "helper.h"

Factory::Factory(int x, int y, std::string producing) : Building(x, y, 57, 27) 
{
	this->producing = producing;
}

void Factory::onClick() 
{

}

void Factory::draw()
{
	ctx::save();
	
	ctx::translate(position.x, position.y);
	ctx::drawImage(texture, 111, 7, 57, 27, 0, 0, 57, 27);
	
	ctx::restore();
}

void Factory::produce()
{
	game::produce(producing);
}