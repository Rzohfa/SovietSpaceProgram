#pragma once

#include "Building.h"

class CoalPowerPlant : Building
{
public:
	CoalPowerPlant(int, int);
	virtual void draw();
	virtual void onClick();
};