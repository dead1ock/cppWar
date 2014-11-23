/**
 * Dallin Wellington
 * A C++ implementation of the card game War.
 */

#include <iostream>

#include "Card.h"
#include "Queue.h"
#include "Deck.h"

using namespace std;

void main(void)
{
	Deck deck;
	Queue p1;
	Queue p2;

	p1.insert(deck.remove());
	p2.insert(deck.remove());

	cout << deck.getSize() << '\n';
	cout << p1.getSize() << '\n';
	cout << p2.getSize() << '\n';

	system("pause");
	return;
}