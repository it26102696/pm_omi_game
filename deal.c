#include "deal.h"
void distributeInitialCards(Card deck[], Card players[4] [8]) {
	int index = 0;
	for (int card = 0; card < 4; card++)
	{
		for (int player = 0; player < 4; player++)
		{
			players[player][card] = deck[index];
			index++;
		}
	}
}
void distributeRemainingCards(Card deck[],Card players[4][8]){
	int index = 16;
	for (int card = 4; card <8; card++)
	{
		for (int player = 0; player <4; player++) {
			players[player][card] = deck[index];
			index++;
		}
	}
}

