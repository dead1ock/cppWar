
#include "Deck.h"

Deck::Deck()
	: Queue()
{
	for (int x = 0; x != 4; x++)
	{
		for (int y = 2; y != 15; y++)
		{
			insert(Card(x, y));
		}
	}
}

Deck::~Deck()
{

}