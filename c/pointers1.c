#include <stdio.h>
#include <stdlib.h>
/* 
Practice Problem: Declare an integer variable, a pointer to an integer, 
and initialize the pointer to the address of the variable. 
Print both the variable’s value and the value accessed via the pointer.
*/

int main() {
    int var = 42;
    int *ptr = &var;

    printf("Variable 'var' value: %d\n", var);
    printf("Variable 'var' address: %p\n", &var);
    printf("Variable 'ptr' address(value of ptr): %p\n", (void *) ptr); // ptr = value stored in the pointer
    // we cast it to void because %p expectes a void * type, so this is convention
    printf("Value accessed via pointer: %d\n", *ptr); // *ptr = value at the address stored by the pointer

    return EXIT_SUCCESS;
}