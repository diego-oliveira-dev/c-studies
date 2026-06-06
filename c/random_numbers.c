#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int chosenNumber = rand() % 101;
    puts("I'm thinking of a number between 0 and 100.");

    int guess;
    do {
        printf("Make a guess: ");
        scanf("%d", &guess);

        if (guess > chosenNumber) {
            puts("Guess lower.");
        }

        if (guess < chosenNumber) {
            puts("Guess higher.");
        }

    } while (guess != chosenNumber);

    puts("You got it!");
    printf("The number I was thinking was %d!\n", chosenNumber);
    
    return EXIT_SUCCESS;
}