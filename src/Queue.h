/**
*
*/

#ifndef _QUEUE_H_
#define _QUEUE_H_

#include "Card.h"

/**
* 
*/
class Queue
{
public:
	Queue();
	~Queue();

	void insert(Card* card);
	Card* remove();
	unsigned int getSize();

private:
	Card** mCards;
	unsigned int mFrontIndex, mBackIndex, mSize;
};

#endif // _QUEUE_H_