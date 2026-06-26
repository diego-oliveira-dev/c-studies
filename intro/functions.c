#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#if 0
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

// implementation of val++ (adds 1 to the value but return the old value)
int pre_increment(int *val) {
    *val += 1;
    return *val;
}

// implementation of ++val (adds 1 to the value and return the new value)
int post_increment(int *val) {
    int old_value = *val;
    *val += 1;
    return old_value;
}
#endif

void bswap32_in_place(int *input) {
    // given a number 0xBEEFCAFE, this function swaps the order of the bytes
    // expected result: 0xFECAFEBE
    
    // *bytes ~ 00 11 22 33 ~ BE EF CA FE
    // considering int *bytes as parameter
    // int swapped = 0;
    // swapped |= (*bytes >> 24) & 0x000000FF; // 00 00 00 00
    // swapped |= (*bytes << 8) & 0x00FF0000; // 33 22 11 00
    // swapped |= (*bytes >> 8) & 0x000FF00; // 33 00 11 00
    // swapped |= (*bytes << 24) & 0xFF000000; // 33 00 00 00

    // Another way:
    // uint32_t swapped =
    //     ((*bytes & 0x000000FF) << 24) |
    //     ((*bytes & 0x0000FF00) << 8)  |
    //     ((*bytes & 0x00FF0000) >> 8)  |
    //     ((*bytes & 0xFF000000) >> 24);

    // Another (and more sofisticated) way:
    int swapped = 0;
    uint8_t *bytes = (uint8_t *) input;
    // input = 00 11 22 33
    for (int i = 0; i < sizeof(int); i++) {
        // swapped |= (*(bytes + i) << (8 * i));
        // Even though this looks correct, most machines nowadays are little endian
        // Little endian is a convention where the least significant byte comes first
        // In this case, the LSB is 33, so in memory, it is layed out like 33 22 11 00
        // It would work on a big endian machine (the oposite of little endian) though 

        // To make it work in a little endian machine, we have to do the opposite:
        // swapped |= (*(bytes + i) << (8 * (sizeof(int) - 1 - i)));
        
        // Another way:
        *((uint8_t *) &swapped + (3 - i)) |= *(bytes + i);
    }
    *input = swapped;
}

int main() {
#if 0
    // int a = 7;
    // int b = 43;
    // printf("\nInitially: a = %d, b = %d\n\n", a, b);

    // printf("If we only swap the values:\n");
    // swap_values(a, b);
    // printf("(At main method) a = %d, b = %d\n\n", a, b);
    /* 
    This happens because primitive types in C are passed by value.
    This means that when we pass values into a method, we are essentialy passing a copy of these values and not the values per se.
    So at the main stack frame, the values never changed, since the swapping occur at the method stack frame.
    */

    // printf("If we swap the pointers:\n");
    // swap_pointers(&a, &b);
    // printf("(At main method) a = %d, b = %d\n\n", a, b);
    /*
    This, on the other hand, is the correct approach: it swaps the pointers (memory addresses of those values) and not the values itself.
    So we have to modify the methods a little bit, passing the memory addresses and using pointers as parameters.
    */

    // In Java, method parameters are evaluated left to right
    // In C, function parameters are (usually) evlauated right to left
    // printf("pre_increment(a): %d, %d, %d \n", a, pre_increment(&a), a);
    // printf("post_increment(a): %d, %d, %d \n", a, post_increment(&a), a);
#endif

    int sample = 0xAABBCCDDu;
    puts("");
    printf("> original: %08X\n", sample);
    bswap32_in_place(&sample);
    printf("> new sample: %08X\n\n", sample);

    return EXIT_SUCCESS;
}