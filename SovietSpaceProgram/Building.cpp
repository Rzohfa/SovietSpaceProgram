#include "Building.h"
#include <iostream>


Building::Building(int x, int y, int width, int height)
{
	texture.loadFromFile("buildings_tex.png");
	position.x = x;
	position.y = y;
	size.width = width;
	size.height = height;
}

int Building::getX()
{
	return position.x;
}

int Building::getY()
{
	return position.y;
}

int Building::getWidth()
{
	return size.width;
}

int Building::getHeight()
{
	return size.height;
}