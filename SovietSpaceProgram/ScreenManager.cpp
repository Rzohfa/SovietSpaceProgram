#include "ScreenManager.h"


void ScreenManager::addScreen(Screen* screen)
{
	screens.push_back(screen);
}

void ScreenManager::displayScreen(int which)
{
	current_screen = screens[0];
	current_screen->draw();
}