#include <stdlib.h>
#include <stdio.h>
/* 
Practice Problem: Create a function increment_value that takes 
an integer pointer as an argument and increments the value of the 
variable it points to by one. Demonstrate the change in the main function.
*/

void increment_value(int *ptr) {
    (*ptr)++;
}

int main() {
    int count = 10;

    printf("Before function call: %d\n", count);
    increment_value(&count);
    printf("After function call: %d\n", count);
}