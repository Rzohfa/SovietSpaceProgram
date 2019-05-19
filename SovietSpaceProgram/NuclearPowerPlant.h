#pragma once

#include "Building.h"

class NuclearPowerPlant : Building
{
public:
	NuclearPowerPlant(int, int);
	virtual void draw();
	virtual void onClick();
};