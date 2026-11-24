#include<stdlib.h>// use to library random,malloc,srand things
#include"shuffle.h"
void shuffledeck (Card deck[]) {
	int i;
	int j;
	Card temperory;
	for (i = 31; i > 0; i = i -1) 
	{    
		j = rand() % (i +1);
		temperory = deck[i];
		deck[i] = deck[j];
		deck[j] = temperory;
	}
}
