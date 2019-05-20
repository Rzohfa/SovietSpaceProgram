#pragma once

#include "ctx.h"
#include <SFML/Window.hpp>
#include "helper.h"

class Screen {
public:
	virtual void update() {}
	virtual void draw() {}
	virtual void onKeyPress() {}
	virtual void onKeyRelease() {}
	virtual void onMousePress() {}
	virtual void onMouseDrag() {}
};