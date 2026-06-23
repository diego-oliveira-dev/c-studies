#include <stdio.h>
#include <stdlib.h>
/* 
Practice Problem: Print the memory addresses of two different variables (e.g., an int and a float) 
using the address-of operator (&). Additionally, print the address of a pointer variable itself.
*/

int main() {
    int a = 10;
    int *a_ptr = &a;
    float b = 20.5f;

    printf("Address of integer variable 'a': %p\n", &a);
    printf("Address of float variable 'b': %p\n", &b);
    printf("Address of stored IN pointer 'a_ptr': %p\n", (void *) a_ptr);
    printf("Address of pointer variable 'a_ptr' itself: %p\n", &a_ptr);

    return EXIT_SUCCESS;
}