#pragma once
#include <iostream>
class Player
{
private:
	double chips{100};
	std::string name{};
	int current_score{};
	std::vector<char> cards{};

	

public:
	double get_chips() { return chips; }
	void set_chips(double addedChips) { chips += addedChips; }
	std::string get_name() { return name; }
	void set_name(std::string newName) { name = newName; }
	char draw_card();

	Player();
	Player(std::string name, double chips);

};