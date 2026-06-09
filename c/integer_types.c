#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main() {
    unsigned int x = 0;
    unsigned int y = -1;

    if (x > y) {
        puts("Math is working!");
        return EXIT_SUCCESS;
    }

    if (x < y) {
        puts("What is happening?");
        return EXIT_FAILURE;
    }

    puts("\nBitwise operations");
    printf("5 & 3 = %d\n", 5 & 3);
    printf("5 | 3 = %d\n", 5 | 3);
    printf("5 ^ 3 = %d\n", 5 ^ 3);
    // 5 = 0101
    // 3 = 0011

    // 5 & 3 = 0001 = 1
    // 5 | 3 = 0111 = 7
    // 5 ^ 3 = 0110 = 6

    puts("\nShifts");
    printf("1 << 1 = %d\n", 1 << 1);
    printf("1 << 2 = %d\n", 1 << 2);
    printf("1 << 3 = %d\n", 1 << 3);
    // 1 = 0001, 2 = 0010, 3 = 0011

    // 1 << 1 = 0001 << 1 = 0010 = 2
    // 1 << 2 = 0001 << 2 = 0100 = 4
    // 1 << 3 = 0001 << 3 = 1000 = 8
}