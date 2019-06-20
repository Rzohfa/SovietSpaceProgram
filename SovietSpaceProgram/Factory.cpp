#include "Factory.h"
#include "helper.h"

Factory::Factory(int x, int y, std::string producing) 
{
	this->producing = producing;
	texture.loadFromFile("buildings_tex.png");
	this->position.x = x;
	this->position.y = y;
	size.width = 57;
	size.height = 27;
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
	//std::cout << producing << std::endl;
	
	game::produce(producing);
}

int Factory::getX()
{
	return this->position.x;
}

int Factory::getY()
{
	return this->position.y;
}

int Factory::getWidth()
{
	return this->size.width;
}

int Factory::getHeight()
{
	return this->size.height;
}

void Factory::setPosition(int _x, int _y) {
	this->position.x = _x;
	this->position.y = _y;
}