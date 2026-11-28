#include <stdio.h>
#include "trump.h"

int selectTrump(int player) {
    int trump;

    printf("\nPlayer %d, select Trump:\n", player);
    printf("0 = Clubs\n");
    printf("1 = Diamonds\n");
    printf("2 = Hearts\n");
    printf("3 = Spades\n");

    printf("Enter your choice: ");
    scanf("%d", &trump);

    while (trump < 0 || trump > 3) {
        printf("Invalid choice. Select again: ");
        scanf("%d", &trump);
    }

    return trump;
}
