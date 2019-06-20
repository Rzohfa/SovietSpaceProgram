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

class Factory
{
private:
	std::string producing;
	sf::Texture texture;
	dimensions size;
	localization position;
public:
	Factory(int, int, std::string);
	int getX();
	int getY();
	int getWidth();
	int getHeight();
	void setPosition(int, int);
	void draw();
	void produce();
};