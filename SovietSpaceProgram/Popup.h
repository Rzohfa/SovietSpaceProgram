#pragma once

#include "ctx.h"
#include "Text.h"

class Popup
{
private:
	std::string title;
	// content of popup? could be this:
		std::string content;
	float title_scale;
	float content_scale;
	int x;
	int y;
public:
	Popup(std::string t, std::string c, float ts, float cs, int x, int y);
	void showPopup();
};