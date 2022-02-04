// BlackJack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "PlayerClass.h"
#include "Game.h"
#include <vector>


int main()
{
	Game localgame;
	localgame.displayMenu();

	while (true)
	{
		int option{ localgame.getOption() };
		localgame.parseOption(option);

	}
}

