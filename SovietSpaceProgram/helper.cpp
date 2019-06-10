#include "helper.h"

namespace game
{
	Click click;
	sf::RenderWindow* window;
	bool keyboard[100];
	std::vector<resource> resources;
	std::vector<product> products;
	int electricity_balance = 0;
	std::thread time_thread;

	void initGame(sf::RenderWindow* ref)
	{
		initKeyboard();
		setWindow(ref);
		
		std::vector<resource> craft_guide;
		
		craft_guide.push_back({ "clay", 4 });
		products.push_back({ "brick", 4, craft_guide });

		craft_guide.clear();
		craft_guide.push_back({ "sand", 4 });
		products.push_back({ "glass", 4, craft_guide });

		craft_guide.clear();
		craft_guide.push_back({ "coal", 1 });
		craft_guide.push_back({ "oil", 1 });
		products.push_back({ "plastic", 4, craft_guide });

		craft_guide.clear();
		craft_guide.push_back({ "iron", 4 });
		craft_guide.push_back({ "silicon", 4 });
		products.push_back({ "fuel tank", 4, craft_guide });

		craft_guide.clear();
		craft_guide.push_back({ "structural element", 4 });
		craft_guide.push_back({ "computer", 4 });
		craft_guide.push_back({ "glass", 4 });
		products.push_back({ "cockpit", 4, craft_guide });

		craft_guide.clear();
		craft_guide.push_back({ "memory chip", 4 });
		craft_guide.push_back({ "processor", 4 });
		products.push_back({ "computer", 4, craft_guide });

		craft_guide.clear();
		craft_guide.push_back({ "computer", 4 });
		craft_guide.push_back({ "structural element", 4 });
		products.push_back({ "sond", 4, craft_guide });

		craft_guide.clear();
		craft_guide.push_back({ "fuel tank", 4 });
		craft_guide.push_back({ "structural element", 4 });
		products.push_back({ "engine", 4, craft_guide });

		craft_guide.clear();
		craft_guide.push_back({ "titanium", 4 });
		craft_guide.push_back({ "aluminium", 4 });
		craft_guide.push_back({ "magnesium", 4 });
		craft_guide.push_back({ "carbon fiber", 4 });
		craft_guide.push_back({ "ablator", 4 });
		products.push_back({ "structural element", 4, craft_guide });
		
		craft_guide.clear();
		craft_guide.push_back({ "plastic", 4 });
		craft_guide.push_back({ "copper", 4 });
		craft_guide.push_back({ "electronics", 4 });
		products.push_back({ "processor", 4, craft_guide });

		craft_guide.clear();
		craft_guide.push_back({ "copper", 4 });
		craft_guide.push_back({ "plastic", 4 });
		products.push_back({ "electronics", 4, craft_guide });

		craft_guide.clear();
		craft_guide.push_back({ "electronics", 4 });
		products.push_back({ "memory chip", 4, craft_guide });

		craft_guide.clear();
		craft_guide.push_back({ "coal", 4 });
		craft_guide.push_back({ "plastic", 4 });
		products.push_back({ "carbon fiber", 4, craft_guide });

		craft_guide.clear();
		craft_guide.push_back({ "coal", 4 });
		craft_guide.push_back({ "graphite", 4 });
		craft_guide.push_back({ "plastic", 4 });
		products.push_back({ "ablator", 4, craft_guide });

		craft_guide.clear();

		resources.push_back({ "clay", 0 });
		resources.push_back({ "coal", 0 });
		resources.push_back({ "iron", 0 });
		resources.push_back({ "copper", 0 });
		resources.push_back({ "sand", 0 });
		resources.push_back({ "oil", 0 });
		resources.push_back({ "titanium", 0 });
		resources.push_back({ "aluminium", 0 });
		resources.push_back({ "magnesium", 0 });
		resources.push_back({ "silicon", 0});
		resources.push_back({ "graphite", 0 });
		resources.push_back({ "brick", 0 });
		resources.push_back({ "glass", 0 });
		resources.push_back({ "plastic", 0 });
		resources.push_back({ "fuel tank", 0 });
		resources.push_back({ "cockpit", 0 });
		resources.push_back({ "computer", 0 });
		resources.push_back({ "sond", 0 });
		resources.push_back({ "engine", 0 });
		resources.push_back({ "structural element", 0 });
		resources.push_back({ "processor", 0 });
		resources.push_back({ "memory chip", 0 });
		resources.push_back({ "electronics", 0 });
		resources.push_back({ "carbon fiber", 0 });
		resources.push_back({ "ablator", 0});

		game_time::timeReset();
		time_thread = std::thread(game_time::timePass);
	}

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
		game_time::stopGame();
		time_thread.join();
		window->close();
	}

	void produce(std::string to_produce)
	{
		if (electricity_balance > 0)
		{
			bool req_met = true;

			for (auto i : products)
			{
				if (i.name == to_produce)
				{
					for (auto j : i.craft_recipe)
					{
						req_met = false;
						for (auto k : resources)
						{
							if ((k.name == j.name) && (k.amount >= j.amount))
							{
								req_met = true;
							}
						}
					}

					if (req_met)
					{
						for (auto j : i.craft_recipe)
						{
							for (auto k : resources)
							{
								if ((k.name == j.name) && (k.amount >= j.amount))
								{
									k.amount -= j.amount;
								}
							}
						}
						for (auto j : resources)
						{
							if (j.name == i.name)
							{
								j.amount += i.produced_count;
							}
						}
					}
				}
			}
		}
	}
	
	void startGame()
	{
		game_time::resume();
	}

	void pauseGame()
	{
		game_time::pause();
	}

	//sf::Image getScreenshot()
	//{
	//	return window->capture();
	//}
}