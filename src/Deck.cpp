
#include "Deck.h"

#include <time.h>

Deck::Deck()
	: Queue()
{
	srand(time(NULL));

	for (int x = 0; x <= 3; x++)
	{
		for (int y = 2; y <= 14; y++)
		{
			insert(Card(x, y));
		}
	}

	for (int x = 0; x < 100; x++)
	{
		int indexOne = rand() % 51;
		int indexTwo = rand() % 51;
		Card temp = mCards[indexOne];
		mCards[indexOne] = mCards[indexTwo];
		mCards[indexTwo] = temp;
	}
}

Deck::~Deck()
{

}