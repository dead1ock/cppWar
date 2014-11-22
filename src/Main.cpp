/**
 * Dallin Wellington
 * A C++ implementation of the card game War.
 */

#include <iostream>
#include "Card.h"

using namespace std;

void main(void)
{
	Card card(0, 2);
	Card card2(0, 13);

	cout << (card >= card2) << '\n';
	cout << (card == card2) << '\n';
	cout << card << '\n';
	cout << card2 << '\n';

	system("pause");
	return;
}