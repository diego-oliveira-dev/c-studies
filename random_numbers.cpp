#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));
    int chosenNumber = (rand() % 101); // chooses a random number between 0 and 100

    printf("I'm thinking of a number between 0 and 100.\n");

    int guess;
    do {
        printf("\nMake a guess: ");
        scanf("%d", &guess);

        if (guess > chosenNumber) {
            printf("Guess lower.\n");
        }
        
        if (guess < chosenNumber) {
            printf("Guess higher.\n");
        }

    } while (guess != chosenNumber);

    printf("\nYou got it!\n");
    printf("The number I was thinking was %d!\n", chosenNumber);

    return 0;
}