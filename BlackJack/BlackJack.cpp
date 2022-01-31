// BlackJack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "PlayerClass.h"
#include <vector>

int main()
{
	int num_of_players{};
	std::vector<Player> Players;

	do
	{
		std::cout << "How many players (Max 5): ";
		std::cin >> num_of_players;

	} while (std::cin.fail() || (num_of_players < 2 || num_of_players > 5) );

	Players.resize(num_of_players);

	std::cout << Players.at(0).get_name();

	


}

