#include <iostream>
#include "PlayerClass.h"


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


	return 'a';

}