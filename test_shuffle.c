#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"deck.h"
#include"shuffle.h"
int main ()
{
	Card deck[32];
	srand(time(NULL));
	initializeDeck(deck);
	shuffledeck(deck);
	for (int i = 0; i < 32; i = i+1)
	{
		printf("Rank:%d suit:%d \n", deck[i].rank, deck[i].suit);
	}
	return 0;
}
