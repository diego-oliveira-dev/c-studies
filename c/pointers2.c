#include <stdio.h>
#include <stdlib.h>
/* 
Practice Problem: Write a program that uses the dereference operator (*) 
to change the value of a variable through its pointer.
*/

int main() {
    int num = 100;
    int *ptr = &num;

    printf("Original value of num: %d\n", num);
    *ptr = 500;
    printf("New value of num after pointer assignment: %d\n", num);

    return EXIT_SUCCESS;
}