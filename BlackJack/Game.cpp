#include "Game.h"
#include <iostream>

void Game::displayMenu()
{
	std::cout << "[1] Start New Game\n";
	std::cout << "[2] Display Chips\n";

}
void Game::setPlayers(int num_of_players)
{
	this->players.resize(num_of_players);

}


int Game::getOption()
{
	const int num_of_options{ 2 };
	int num_of_players{};
	int option_selected{};
	do
	{
		std::cout << "Enter Option: ";
		std::cin >> option_selected;
	} while (std::cin.fail() || (option_selected > num_of_options));

	return option_selected;
}

void Game::parseOption(int option)
{
	int num_of_players{};
	switch (option) {

	case 1:
		this->players.clear();
		do
		{
			std::cout << "How many players (Max 5): ";
			std::cin >> num_of_players;
			this->setPlayers(num_of_players);

		} while (this->getPlayerSize() < 1 || this->getPlayerSize() > 5);
		break;

	case 2:
		std::string username_selected{};
		std::cout << "Who would you like to display chips for? ";
		std::cin >> username_selected;

		bool isFound{ false };
		for (Player& p : this->players)
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