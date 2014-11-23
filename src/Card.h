/**
 *
 */

#ifndef _CARD_H_
#define _CARD_H_

#include <ostream>

/**
 * Represents a card from a standard poker deck.
 * The suit and value are represented by unsigned integer
 * values:
 *
 * Suits
 * Hearts = 0
 * Spades = 1
 * Diamons = 2
 * Clubs = 3
 *
 * Values
 * 2 - 9 = 2 - 9
 * J = 10
 * Q = 11
 * K = 12
 * A = 13
 */
class Card
{
public:
	Card();
	Card(unsigned int suit, unsigned int value);
	~Card();

	int operator==(const Card& other);
	int operator>=(const Card& other);
	friend std::ostream& operator<<(std::ostream& stream, const Card& other);

private:
	unsigned int mSuit;
	unsigned int mValue;
};

#endif // _CARD_H_