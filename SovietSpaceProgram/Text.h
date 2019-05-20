#pragma once

#include <string>
#include <SFML/Graphics.hpp>
#include "ctx.h"

namespace txt
{
	struct sign
	{
		int row = 0;
		int column = 0;
	};
	void printText(std::string);
	sign findChar(int);
}