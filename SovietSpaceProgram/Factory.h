#pragma once

#include "Building.h"

class Factory : Building
{
private:
	std::string producing;
public:
	Factory(int, int, std::string);
	void draw();
	void onClick();
	void produce();
};