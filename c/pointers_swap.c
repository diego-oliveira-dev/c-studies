#include <stdio.h>
#include <stdlib.h>

void swap_values(int a, int b) {
    int temp = b;
    b = a;
    a = temp;
    printf("(At swap_values method) a = %d, b = %d\n", a, b);
}

void swap_pointers(int *a, int *b) {
    int temp = *b;
    //         ^ means "value at" -> "DEREFERENCE" (technical term)
    // so int temp = *b -> "valut at [the address stored in] temp"
    *b = *a; // value at address b = value at address a
    *a = temp;
    printf("(At swap_pointers method) a = %d, b = %d\n", *a, *b);
}

int main() {
    int a = 7;
    int b = 43;
    printf("\nInitially: a = %d, b = %d\n\n", a, b);

    printf("If we only swap the values:\n");
    swap_values(a, b);
    printf("(At main method) a = %d, b = %d\n\n", a, b);
    /* 
    This happens because primitive types in C are passed by value.
    This means that when we pass values into a method, we are essentialy passing a copy of these values and not the values per se.
    So at the main stack frame, the values never changed, since the swapping occur at the method stack frame.
    */

    printf("If we swap the pointers:\n");
    swap_pointers(&a, &b);
    printf("(At main method) a = %d, b = %d\n\n", a, b);
    /*
    This, on the other hand, is the correct approach: it swaps the pointers (memory addresses of those values) and not the values itself.
    So we have to modify the methods a little bit, passing the memory addresses and using pointers as parameters.
    */

    return EXIT_SUCCESS;
}