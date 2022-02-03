// BlackJack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "PlayerClass.h"
#include <vector>


void displayMenu()
{
	std::cout << "[1] Start New Game" << '\n';
	std::cout << "[2] Display Chips" << '\n';

}

int main()
{
	std::vector<Player> Players;
	displayMenu();

	while (true)
	{
		int num_of_players{};
		int option_selected{};
		std::cout << "Enter Option: ";
		std::cin >> option_selected;

		switch (option_selected) {

		case 1:
			Players.clear();
			do
			{
				std::cout << "How many players (Max 5): ";
				std::cin >> num_of_players;

			} while (std::cin.fail() || (num_of_players < 1 || num_of_players > 5));
			Players.resize(num_of_players);
			break;

		case 2:
			std::string username_selected{};
			std::cout << "Who would you like to display chips for? ";
			std::cin >> username_selected;

			bool isFound{ false };
			for (Player &p : Players)
			{
				if (p.get_name() == username_selected)
				{
					isFound = true;
					std::cout << p.get_name() << " has " << p.get_chips() << " chips.\n";
				}
			}
			if (isFound == false)
			{
				std::cout << username_selected << " does not exist.\n";
			}
		}
	}
}

