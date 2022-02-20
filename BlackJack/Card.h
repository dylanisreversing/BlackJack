#pragma once
#include <string>
#include <vector>
class Card
{
private:
	enum class Suit { HEARTS, CLUBS, SPADES, DIAMONDS };
	enum class Value {
		ACE, TWO, THREE, FOUR, FIVE, SIX, SEVEN,
		EIGHT, NINE, TEN, KING, QUEEN, JACK
	};

	Suit cSuit{};
	Value cValue{};

public:

	Card();
	void setSuit(Suit);
	void setValue(Value);

};