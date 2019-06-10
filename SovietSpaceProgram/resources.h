#pragma once

#include "Products.h"
#include "Popup.h"
#include <iostream>

class GameRes
{
private:
	int electricity_balance = 1;
	std::vector<resource> resources;
	std::string resourcesa[12];
	int resourcesb[12];
	product products[12];
public:
	GameRes();
	void produce(std::string);
	//void mine(std::string);
	void toPopup();
	void toZero();
	bool missionFinished(int);
	void electricity(int);
	bool canBuild(std::string, int);
};