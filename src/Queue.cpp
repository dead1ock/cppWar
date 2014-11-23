/**
*
*/

#include "Queue.h"

Queue::Queue()
	: mFrontIndex(0)
	, mBackIndex(0)
	, mSize(0)
	, mCards()
{

	/*
	for (int x = 0; x < 4; x++)
	{
		for (int y = 2; y < 14; y++)
		{
			mCards[(x * 13) + (y - 2)] = new Card(x, y);
		}
	}
	*/
}

Queue::~Queue()
{
}

void Queue::insert(Card card)
{
	mCards[mFrontIndex++] = card;

	if (mFrontIndex == 52)
		mFrontIndex = 0;

	mSize++;
}

Card Queue::remove()
{
	Card ret;
	
	if (mSize > 0)
	{
		ret = mCards[mBackIndex++];

		if (mBackIndex == 52)
			mBackIndex = 0;

		mSize--;
	}

	return ret;
}

unsigned int Queue::getSize()
{
	return mSize;
}