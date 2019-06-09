#pragma once

#include <vector>
#include "ctx.h"
#include "Text.h"
#include "time.h"
#include "helper.h"

namespace popup
{
	void showPopup(int x, int y, float ts, float cs, std::string t, std::vector<std::string> c);
};