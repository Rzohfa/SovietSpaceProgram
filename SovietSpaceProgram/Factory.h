#pragma once

#include "Building.h"

class Factory : Building
{
public:
	Factory(int, int);
	virtual void draw();
	virtual void onClick();
};