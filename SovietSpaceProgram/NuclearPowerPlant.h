#pragma once

#include "Building.h"

class NuclearPowerPlant : Building
{
public:
	NuclearPowerPlant(int, int);
	void draw();
	void onClick();
	void produce();
};