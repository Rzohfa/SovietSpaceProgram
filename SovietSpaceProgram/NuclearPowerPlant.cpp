#include "NuclearPowerPlant.h"
#include <iostream>

NuclearPowerPlant::NuclearPowerPlant(int x, int y) : Building(x, y, 57, 27) {}

void NuclearPowerPlant::onClick()
{

}

void NuclearPowerPlant::draw()
{
	ctx::save();

	ctx::translate(position.x, position.y);
	ctx::drawImage(texture, 1, 0, 54, 33, 0, 0, 54, 33);

	ctx::restore();
}

void NuclearPowerPlant::produce()
{

}