#include <vector>
#include "PlayerClass.h"

class Game 
{
	private:
		std::vector<Player> players;


public:
	void displayMenu();
	void setPlayers(int num_of_players);
	int getOption();
	void parseOption(int option);
	int getPlayerSize() { return players.size(); }

};