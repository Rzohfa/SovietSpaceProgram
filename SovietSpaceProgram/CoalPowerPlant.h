#pragma once

#include "Building.h"

class CoalPowerPlant : Building
{
public:
	CoalPowerPlant(int, int);
	void draw();
	void onClick();
	void produce();
};