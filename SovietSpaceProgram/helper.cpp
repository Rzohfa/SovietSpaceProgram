#include "helper.h"

namespace game
{
	Click click;
	sf::RenderWindow* window;
	bool keyboard[100];

	void initKeyboard()
	{
		for (auto i : keyboard)
			i = false;
	}

	void pressKey(int code)
	{
		try
		{
			if (code < 0 || code > 99)
				throw(code);
			else
				keyboard[code] = true;
		}
		catch (int e)
		{
			std::cout << "ERROR: Unknown key. Key code: " << code << std::endl;
		}
	}

	void releaseKey(int code)
	{
		try
		{
			if (code < 0 || code > 99)
				throw(code);
			else
				keyboard[code] = false;
		}
		catch (int e)
		{
			std::cout << "ERROR: Unknown key. Key code: " << code << std::endl;
		}
	}

	bool getKey(int key)
	{
		return keyboard[key];
	}

	void pressMouse(int code, int x, int y)
	{
		click.clicked = true;
		click.button = code;
		click.x = x;
		click.y = y;
	}

	void releaseMouse() 
	{
		click.clicked = false;
		click.button = -1;
		click.x = -1;
		click.y = -1;
	}

	bool isClicked()
	{
		return click.clicked;
	}

	int getX()
	{
		return click.x;
	}

	int getY()
	{
		return click.y;
	}

	int getMouseKey()
	{
		return click.button;
	}

	void setWindow(sf::RenderWindow* ref)
	{
		window = ref;
	}

	void closeWindow()
	{
		window->close();
	}
}