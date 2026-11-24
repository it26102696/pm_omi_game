#include<stdio.h>
#include "deck.h"
int main(void) {
	Card deck[32];
	initializeDeck(deck);
	for (int i = 0; i < 32; i++) {
		printf("rank: %d suit: %d\n", deck[i].rank, deck[i].suit);
	}
	return 0;
}
