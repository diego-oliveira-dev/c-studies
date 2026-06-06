#include <stdio.h>
#include <stdlib.h>

// note: if the addedFunction() is below the main(), main() will not be able to call it

int main() {
    // rand(); -> returns a random integer from 0 to INT_MAX
    int randomNumber = rand() % 100; // returns a random integer from 0 to 99 
    printf("%d\n", randomNumber);
    
    printf("Type a number: ");
    int number;
    scanf("%d", &number);
    printf("You typed %d\n", number);

    printf("Type something: ");
    char stringBuffer[100];
    scanf("%s", stringBuffer);
    printf("You typed '%s'\n", stringBuffer);

    // note: if scanf encounter a whitespace, it 'terminates' itself and just the first word is read
    // so if the input was hello world, you would have to add and read 2 char variables, as showed below

    // note: we'll find better ways to work with that in the future

    // char stringBuffer1[100];
    // char stringBuffer2[100];
    // scanf("%s %s", stringBuffer1, stringBuffer2); -> input = hello world
    // printf("%s %s", stringBuffer1, stringBuffer2); -> output = hello world

    return 0;
}