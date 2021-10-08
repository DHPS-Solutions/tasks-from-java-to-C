#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct player {
    char name[50];
    int sum;
} player;

int throwDice();
int playRound(struct player, struct player);
int checkWinState(struct player, struct player);


int main() {

    time_t t;
    srand((unsigned) time(&t));

    struct player playerA;
    struct player playerB;

    strcpy(playerA.name, "Carl");
    strcpy(playerB.name, "Skybert");

    playerA.sum = 0;
    playerB.sum = 0;

    playRound(playerA, playerB);

    return 0;

}

int throwDice() {

    return rand() % 6 + 1;

}


int playRound(struct player playerA, struct player playerB) {

    int winner = checkWinState(playerA, playerB);

    if (winner == 0) {
        printf("A tie occurred. Both players got over 100.\n");
        return 0;
    } else if (winner == 1) {
        printf("%s won the game with a %d\n", playerA.name, playerA.sum);
        return 0;
    } else if (winner == 2) {
        printf("%s won the game with a %d\n", playerB.name, playerB.sum);
        return 0;
    }

    int diceRoll = throwDice();
    playerA.sum += diceRoll;
    printf("%s rolled a %d and is now at %d\n", playerA.name, diceRoll, playerA.sum);

    diceRoll = throwDice();
    playerB.sum += diceRoll;
    printf("%s rolled a %d and is now at %d\n", playerB.name, diceRoll, playerB.sum);

    printf("\n");

    playRound(playerA, playerB);

}

int checkWinState(struct player playerA, struct player playerB) {

    if (playerA.sum >= 100 && playerB.sum >= 100) {
        return 0;
    } else if (playerA.sum >= 100) {
        return 1;
    } else if (playerB.sum >= 100) {
        return 2;
    }

    return -1;

}
