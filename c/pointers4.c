#include <stdlib.h>
#include <stdio.h>
/* 
Practice Problem: Write a program to print the size (in bytes) of a pointer to an integer, 
a pointer to a character, and a pointer to a float on your system.
*/

int main() {
    int *int_ptr;
    float *float_ptr;
    char *char_ptr;
    
    printf("Size of int pointer (int *): %zu bytes\n", sizeof(int_ptr));
    printf("Size of char pointer (char *): %zu bytes\n", sizeof(char_ptr));
    printf("Size of float pointer (float *): %zu bytes\n\n", sizeof(float_ptr));

    printf("Size of 'int' variable: %zu bytes\n", sizeof(int));
    printf("Size of 'float' variable: %zu bytes\n", sizeof(float));

    return EXIT_SUCCESS;
}