#include "resources.h"


GameRes::GameRes()
{
	std::vector<resource> craft_guide;

	//craft_guide.push_back({ "clay", 1 });
	//products.push_back({ "brick", 1, craft_guide });

	craft_guide.clear();
	//craft_guide.push_back({ "sand", 1 });
	//products.push_back({ "glass", 1, craft_guide });

	craft_guide.clear();
	//craft_guide.push_back({ "coal", 1 });
	//craft_guide.push_back({ "oil", 1 });
	craft_guide.push_back({ "nic", 1 });
	products[0] = { "plastic", 8, craft_guide };

	craft_guide.clear();
	//craft_guide.push_back({ "iron", 1 });
	//craft_guide.push_back({ "silicon", 1 });
	craft_guide.push_back({ "nic", 1 });
	products[1] = { "fuel tank", 1, craft_guide };

	craft_guide.clear();
	craft_guide.push_back({ "structural", 1 });
	craft_guide.push_back({ "computer", 1 });
	//craft_guide.push_back({ "glass", 1 });
	products[2] = { "cockpit", 1, craft_guide };

	craft_guide.clear();
	craft_guide.push_back({ "memory chip", 1 });
	craft_guide.push_back({ "processor", 1 });
	products[3] = { "computer", 1, craft_guide };

	craft_guide.clear();
	craft_guide.push_back({ "computer", 1 });
	craft_guide.push_back({ "structural", 1 });
	products[4] = { "sond", 1, craft_guide };

	craft_guide.clear();
	craft_guide.push_back({ "fuel tank", 1 });
	craft_guide.push_back({ "structural", 1 });
	products[5] = { "engine", 1, craft_guide };

	craft_guide.clear();
	//craft_guide.push_back({ "titanium", 1 });
	//craft_guide.push_back({ "aluminium", 1 });
	//craft_guide.push_back({ "magnesium", 1 });
	craft_guide.push_back({ "carbon fiber", 1 });
	craft_guide.push_back({ "ablator", 1 });
	products[6] = { "structural", 1, craft_guide };

	craft_guide.clear();
	craft_guide.push_back({ "plastic", 4 });
	//craft_guide.push_back({ "copper", 1 });
	craft_guide.push_back({ "electronics", 4 });
	products[7] = { "processor", 4, craft_guide };

	craft_guide.clear();
	//craft_guide.push_back({ "copper", 1 });
	craft_guide.push_back({ "plastic", 1 });
	products[8] = { "electronics", 8, craft_guide };

	craft_guide.clear();
	craft_guide.push_back({ "electronics", 4 });
	products[9] = { "memory chip", 4, craft_guide };

	craft_guide.clear();
	//craft_guide.push_back({ "coal", 1 });
	craft_guide.push_back({ "plastic", 1 });
	products[10] = { "carbon fiber", 1, craft_guide };

	craft_guide.clear();
	//craft_guide.push_back({ "coal", 1 });
	//craft_guide.push_back({ "graphite", 1 });
	craft_guide.push_back({ "plastic", 1 });
	products[11] = { "ablator", 1, craft_guide };

	craft_guide.clear();

	//resources.push_back({ "clay", 0 });
	//resources.push_back({ "coal", 0 });
	//resources.push_back({ "iron", 0 });
	//resources.push_back({ "copper", 0 });
	//resources.push_back({ "sand", 0 });
	//resources.push_back({ "oil", 0 });
	//resources.push_back({ "titanium", 0 });
	//resources.push_back({ "aluminium", 0 });
	//resources.push_back({ "magnesium", 0 });
	//resources.push_back({ "silicon", 0 });
	//resources.push_back({ "graphite", 0 });
	//resources.push_back({ "brick", 0 });
	//resources.push_back({ "glass", 0 });
	//resources.push_back({ "plastic", 0 });
	//resources.push_back({ "fuel tank", 0 });
	//resources.push_back({ "cockpit", 0 });
	//resources.push_back({ "computer", 0 });
	//resources.push_back({ "sond", 0 });
	//resources.push_back({ "engine", 0 });
	//resources.push_back({ "structural", 0 });
	//resources.push_back({ "processor", 0 });
	//resources.push_back({ "memory chip", 0 });
	//resources.push_back({ "electronics", 0 });
	//resources.push_back({ "carbon fiber", 0 });
	//resources.push_back({ "ablator", 0 });

	resourcesa[0] = "plastic";
	resourcesa[1] = "fuel tank";
	resourcesa[2] = "cockpit";
	resourcesa[3] = "computer";
	resourcesa[4] = "sond";
	resourcesa[5] = "engine";
	resourcesa[6] = "structural";
	resourcesa[7] = "processor";
	resourcesa[9] = "memory chip";
	resourcesa[8] = "electronics";
	resourcesa[10] = "carbon fiber";
	resourcesa[11] = "ablator";

	resourcesb[0] = 0;
	resourcesb[1] = 0;
	resourcesb[2] = 0;
	resourcesb[3] = 0;
	resourcesb[4] = 0;
	resourcesb[5] = 0;
	resourcesb[6] = 0;
	resourcesb[7] = 0;
	resourcesb[8] = 0;
	resourcesb[9] = 0;
	resourcesb[10] = 0;
	resourcesb[11] = 0;

}

void GameRes::produce(std::string to_produce)
{
	
	//std::cout << to_produce << std::endl;
	if (electricity_balance > 0)
	{
		for (int i = 0; i < 12; i++)
		{
			if (resourcesa[i] == to_produce)
			{
				bool req_met = true;
				for (resource a : products[i].craft_recipe)
					if(a.name != "nic")
						for (int j = 0; j < 12; j++)
							if (resourcesa[j] == a.name)
								if (resourcesb[j] < a.amount)
									req_met = false;
				
				//std::cout << to_produce << std::endl;
				if (req_met)
				{
					//std::cout << to_produce << std::endl;
					for (auto a : products[i].craft_recipe)
						for (int j = 0; j < 12; j++)
							if (resourcesa[j] == a.name)
								resourcesb[j] -= a.amount;

					resourcesb[i] += products[i].produced_count;
				}
			}
		}
	}
}

void GameRes::toPopup()
{
	std::vector<std::string> content;
	std::string tmp;
	for (int i = 0; i < 12; i++)
	{
		tmp = std::to_string(resourcesb[i]);
		tmp.append("   ");
		tmp.append(resourcesa[i]);
		content.push_back(tmp);
	}
	popup::showPopup(500, 500, 3.5, 2, "RESOURCES", content);
	content.clear();
}

void GameRes::toZero()
{
	for (int i = 0; i < 12; i++)
	{
		resourcesb[i] = 0;
	}
}

void GameRes::electricity(int x)
{
	electricity_balance += x;
}

bool GameRes::missionFinished(int mission)
{
	bool finished = true;
	if (mission == 0)
	{
		for (int i = 0; i < 12; i++)
		{
			if (resourcesa[i] == "engine" && resourcesb[i] < 4)
				finished = false;
			else if (resourcesa[i] == "structural" && resourcesb[i] < 4)
				finished = false;
			else if (resourcesa[i] == "fuel tank" && resourcesb[i] < 8)
				finished = false;
			else if (resourcesa[i] == "sond" && resourcesb[i] < 1)
				finished = false;
		}
	}
	else if (mission == 1)
	{
		for (int i = 0; i < 12; i++)
		{
			if (resourcesa[i] == "engine" && resourcesb[i] < 4)
				finished = false;
			else if (resourcesa[i] == "structural" && resourcesb[i] < 4)
				finished = false;
			else if (resourcesa[i] == "fuel tank" && resourcesb[i] < 8)
				finished = false;
			else if (resourcesa[i] == "sond" && resourcesb[i] < 1)
				finished = false;
			else if (resourcesa[i] == "ablator" && resourcesb[i] < 1)
				finished = false;
		}
	}
	else if (mission == 2)
	{
		for (int i = 0; i < 12; i++)
		{
			if (resourcesa[i] == "engine" && resourcesb[i] < 4)
				finished = false;
			else if (resourcesa[i] == "structural" && resourcesb[i] < 4)
				finished = false;
			else if (resourcesa[i] == "fuel tank" && resourcesb[i] < 8)
				finished = false;
			else if (resourcesa[i] == "cockpit" && resourcesb[i] < 1)
				finished = false;
			else if (resourcesa[i] == "ablator" && resourcesb[i] < 2)
				finished = false;
		}
	}
	else if (mission == 3)
	{
		for (int i = 0; i < 12; i++)
		{
			if (resourcesa[i] == "engine" && resourcesb[i] < 8)
				finished = false;
			else if (resourcesa[i] == "structural" && resourcesb[i] < 8)
				finished = false;
			else if (resourcesa[i] == "fuel tank" && resourcesb[i] < 16)
				finished = false;
			else if (resourcesa[i] == "sond" && resourcesb[i] < 1)
				finished = false;
			else if (resourcesa[i] == "ablator" && resourcesb[i] < 1)
				finished = false;
			else if (resourcesa[i] == "computer" && resourcesb[i] < 1)
				finished = false;
		}
	}
	else if (mission == 4)
	{
		for (int i = 0; i < 12; i++)
		{
			if (resourcesa[i] == "engine" && resourcesb[i] < 8)
				finished = false;
			else if (resourcesa[i] == "structural" && resourcesb[i] < 8)
				finished = false;
			else if (resourcesa[i] == "fuel tank" && resourcesb[i] < 16)
				finished = false;
			else if (resourcesa[i] == "sond" && resourcesb[i] < 1)
				finished = false;
			else if (resourcesa[i] == "ablator" && resourcesb[i] < 1)
				finished = false;
			else if (resourcesa[i] == "computer" && resourcesb[i] < 2)
				finished = false;
		}
	}
	else if (mission == 5)
	{
		for (int i = 0; i < 12; i++)
		{
			if (resourcesa[i] == "engine" && resourcesb[i] < 12)
				finished = false;
			else if (resourcesa[i] == "structural" && resourcesb[i] < 12)
				finished = false;
			else if (resourcesa[i] == "fuel tank" && resourcesb[i] < 24)
				finished = false;
			else if (resourcesa[i] == "sond" && resourcesb[i] < 1)
				finished = false;
			else if (resourcesa[i] == "ablator" && resourcesb[i] < 2)
				finished = false;
			else if (resourcesa[i] == "computer" && resourcesb[i] < 1)
				finished = false;
		}
	}
	else if (mission == 6)
	{
		for (int i = 0; i < 12; i++)
		{
			if (resourcesa[i] == "engine" && resourcesb[i] < 8)
				finished = false;
			else if (resourcesa[i] == "structural" && resourcesb[i] < 8)
				finished = false;
			else if (resourcesa[i] == "fuel tank" && resourcesb[i] < 16)
				finished = false;
			else if (resourcesa[i] == "cockpit" && resourcesb[i] < 1)
				finished = false;
			else if (resourcesa[i] == "computer" && resourcesb[i] < 2)
				finished = false;
			else if (resourcesa[i] == "ablator" && resourcesb[i] < 2)
				finished = false;
		}
	}
	else if (mission == 7)
	{
		for (int i = 0; i < 12; i++)
		{
			if (resourcesa[i] == "engine" && resourcesb[i] < 8)
				finished = false;
			else if (resourcesa[i] == "structural" && resourcesb[i] < 8)
				finished = false;
			else if (resourcesa[i] == "fuel tank" && resourcesb[i] < 16)
				finished = false;
			else if (resourcesa[i] == "cockpit" && resourcesb[i] < 1)
				finished = false;
			else if (resourcesa[i] == "computer" && resourcesb[i] < 3)
				finished = false;
			else if (resourcesa[i] == "ablator" && resourcesb[i] < 3)
				finished = false;
		}
	}
	else if (mission == 8)
	{
		for (int i = 0; i < 12; i++)
		{
			if (resourcesa[i] == "engine" && resourcesb[i] < 12)
				finished = false;
			else if (resourcesa[i] == "structural" && resourcesb[i] < 15)
				finished = false;
			else if (resourcesa[i] == "fuel tank" && resourcesb[i] < 24)
				finished = false;
			else if (resourcesa[i] == "cockpit" && resourcesb[i] < 2)
				finished = false;
			else if (resourcesa[i] == "computer" && resourcesb[i] < 4)
				finished = false;
			else if (resourcesa[i] == "ablator" && resourcesb[i] < 3)
				finished = false;
		}
	}
	else if (mission == 9)
	{
		for (int i = 0; i < 12; i++)
		{
			if (resourcesa[i] == "engine" && resourcesb[i] < 16)
				finished = false;
			else if (resourcesa[i] == "structural" && resourcesb[i] < 20)
				finished = false;
			else if (resourcesa[i] == "fuel tank" && resourcesb[i] < 32)
				finished = false;
			else if (resourcesa[i] == "sond" && resourcesb[i] < 1)
				finished = false;
			else if (resourcesa[i] == "computer" && resourcesb[i] < 5)
				finished = false;
			else if (resourcesa[i] == "ablator" && resourcesb[i] < 1)
				finished = false;
		}
	}
	else if (mission == 10)
	{
		for (int i = 0; i < 12; i++)
		{
			if (resourcesa[i] == "engine" && resourcesb[i] < 16)
				finished = false;
			else if (resourcesa[i] == "structural" && resourcesb[i] < 20)
				finished = false;
			else if (resourcesa[i] == "fuel tank" && resourcesb[i] < 32)
				finished = false;
			else if (resourcesa[i] == "cockpit" && resourcesb[i] < 1)
				finished = false;
			else if (resourcesa[i] == "computer" && resourcesb[i] < 6)
				finished = false;
			else if (resourcesa[i] == "ablator" && resourcesb[i] < 4)
				finished = false;
		}
	}
	else if (mission == 11)
	{
		for (int i = 0; i < 12; i++)
		{
			if (resourcesa[i] == "engine" && resourcesb[i] < 16)
				finished = false;
			else if (resourcesa[i] == "structural" && resourcesb[i] < 24)
				finished = false;
			else if (resourcesa[i] == "fuel tank" && resourcesb[i] < 32)
				finished = false;
			else if (resourcesa[i] == "cockpit" && resourcesb[i] < 2)
				finished = false;
			else if (resourcesa[i] == "computer" && resourcesb[i] < 8)
				finished = false;
			else if (resourcesa[i] == "ablator" && resourcesb[i] < 8)
				finished = false;
		}
	}
	return finished;
}

bool GameRes::canBuild(std::string n, int x)
{
	//for (auto i : resources)
	//{
	//	if (resourcesa[i] == n)
	//		if (resourcesb[i] > x)
	//		{
	//			resourcesb[i] -= x;
	//			return true;
	//		}
	//	return false;
	//}
	std::cout << "Wrong resource name!\n";
	return false;
}