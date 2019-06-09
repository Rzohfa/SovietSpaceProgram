#include "Popup.h"

namespace popup
{

	//std::string title;
	//std::string content;
	//float title_scale;
	//float content_scale;
	//int x;
	//int y;

	void showPopup(int x, int y, float ts, float cs, std::string t, std::vector<std::string> c)
	{
		game_time::pause();

		ctx::save();

		ctx::fillStyle(60, 60, 60);
		ctx::fillRect((1920 - x) / 2, (1080 - y) / 2, x, y);

		ctx::save();
		ctx::translate(960 - 4 * ts * t.length(), (1100 - y) / 2);
		ctx::scale(ts, ts);
		txt::printText(t);
		ctx::restore();

		ctx::scale(cs, cs);
		ctx::translate((970 - 0.5 * x) / cs, (((1120 - y) / 2) + (12 * ts)) / cs);
		for (auto i : c)
		{
			txt::printText(i);
			ctx::translate(0, ((6 * cs) / 1));
		}

		//ctx::save();
		//
		//ctx::fillStyle(90, 90, 90);
		//ctx::fillRect(0, 0, x - 40, 30);
		//ctx::save();
		//ctx::translate(
		//	((112 * 0.65) - (5 * 4)),
		//	(float)(((1080 + y) / 2) - 10));
		//txt::printText("close");
		//ctx::restore();
		//
		//
		//ctx::restore();

		ctx::restore();

		game_time::resume();
	}
}

