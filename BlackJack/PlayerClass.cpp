#include <iostream>
#include "PlayerClass.h"
#include <random>


Player::Player()
{
	do {

		std::string name{};
		std::cout << "Enter Player Name: ";
		std::cin >> name;
		this->set_name(name);

	} while (std::cin.fail());
	
}

char draw_card()
{
	enum Cards
	{
		ACE = 1,
		TWO = 2,
		THREE = 3,
		FOUR = 4,
		FIVE = 5,
		SIX = 6,
		SEVEN = 7,
		EIGHT = 8,
		NINE = 8,
		TEN = 10,
		KING = 10,
		QUEEN = 10,
	};






	return 'a';

}