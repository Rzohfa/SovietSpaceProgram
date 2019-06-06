#include "Popup.h"

Popup::Popup(std::string t, std::string c, float ts, float cs, int x, int y)
{
	title = t;
	content = c;
	title_scale = ts;
	content_scale = cs;
	this->x = x;
	this->y = y;
}

void Popup::showPopup()
{
	ctx::save();

	ctx::fillStyle(60, 60, 60);
	ctx::fillRect((1920 - x) / 2, (1080 - y) / 2, x, y);
	
	ctx::save();
	ctx::translate(((x - title.length()) / 2) * title_scale, ((y - title.length()) / 2) * title_scale);
	ctx::scale(title_scale / 2, title_scale / 2);
	txt::printText(title);
	ctx::restore();

	ctx::restore();
}