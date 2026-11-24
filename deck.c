#include "deck.h"
void initializeDeck(Card deck[]) //deck initialization code 
{
	int index = 0;
	for (int suit = 0; suit <4; suit++)
 {
	for (int rank = 0; rank<8; rank++)
	{
		deck[index].rank = rank;
	        deck[index].suit =  suit;
		index++;
	}
 }
}

