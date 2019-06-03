#pragma once

#include <SFML/Graphics.hpp>
#include "ctx.h"

struct dimensions
{
	int width = 0;
	int height = 0;
};

struct localization
{
	int x = 0;
	int y = 0;
};


class Building 
{
protected:
	dimensions size;
	localization position;
public:
	Building(int, int, int, int);
	sf::Texture texture;
	int getX();
	int getY();
	int getWidth();
	int getHeight();
	virtual void draw() {};
	virtual void onClick() {};
	virtual void produce() {};
};
