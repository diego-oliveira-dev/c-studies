#include <stdio.h>
#include <stdlib.h>

int average(int a, int b) {
    int ret_val, sum;
    // sum = a + b;
    ret_val = sum / 2;
    printf("< average(%d, %d) = %d / 2 = %d\n", a, b, sum, ret_val);
    return ret_val;
}

int main() {
    int fn_val = average(10, 20);
    printf("Average: %d\n", fn_val);
    return EXIT_SUCCESS;
}