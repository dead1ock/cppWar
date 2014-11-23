#include "Card.h"

const char* SuitToString(unsigned int suit)
{
	switch (suit)
	{
	case 0:
		return "Hearts";
	case 1:
		return "Spades";
	case 2:
		return "Diamonds";
	case 3:
		return "Clubs";
	default:
		return "";
	}
}

const char* ValueToString(unsigned int value)
{
	switch (value)
	{
	case 2:
		return "2";
	case 3:
		return "3";
	case 4:
		return "4";
	case 5:
		return "5";
	case 6:
		return "6";
	case 7:
		return "7";
	case 8:
		return "8";
	case 9:
		return "9";
	case 10:
		return "10";
	case 11:
		return "Jack";
	case 12:
		return "Queen";
	case 13:
		return "King";
	case 14:
		return "Ace";
	default:
		return "";
	}
}

Card::Card()
	: mSuit(0)
	, mValue(0)
{

}

Card::Card(unsigned int suit, unsigned int value)
	: mSuit(suit)
	, mValue(value)
{

}

Card::~Card()
{

}

int Card::operator==(const Card& other)
{
	return (mValue == other.mValue);
}

int Card::operator>=(const Card& other)
{
	if (mValue == 2 && other.mValue == 13)
		return 1;
	else if (mValue == 13 && other.mValue == 2)
		return 0;
	else
		return (mValue >= other.mValue);
}

std::ostream& operator<<(std::ostream& stream, const Card& other)
{
	return stream << ValueToString(other.mValue) << " of " << SuitToString(other.mSuit);
}