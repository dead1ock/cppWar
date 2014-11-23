/**
 * Dallin Wellington
 * A C++ implementation of the card game War.
 */

#include <iostream>

#include "Card.h"
#include "Queue.h"

using namespace std;

void main(void)
{
	Card card(0, 2);
	Card card2(0, 13);

	cout << (card >= card2) << '\n';
	cout << (card == card2) << '\n';
	cout << card << '\n';
	cout << card2 << '\n';

	Queue cardQueue;

	cout << cardQueue.remove() << '\n';
	cardQueue.insert(&card);
	cardQueue.insert(&card2);
	cout << cardQueue.getSize() << '\n';
	cout << *cardQueue.remove() << '\n';
	cout << *cardQueue.remove() << '\n';
	cout << cardQueue.getSize() << '\n';

	system("pause");
	return;
}