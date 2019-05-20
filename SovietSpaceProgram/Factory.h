#pragma once

#include "Building.h"

class Factory : Building
{
public:
	Factory(int, int);
	void draw();
	void onClick();
};