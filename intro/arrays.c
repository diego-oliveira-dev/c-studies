#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

static const int ARR_SIZE = 3;

void print_array(int *arr, int arr_size) {
    for (int i = 0; i < arr_size; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}

int main() {
    int arr[] = {1, 2, 3};

    // int first = arr[0]; // arr[0] -> *(arr + 0)
    // int second = arr[1]; // arr[1] -> *(arr + 1)
    // int third = arr[2]; // arr[2] -> *(arr + 2)

    print_array(arr, ARR_SIZE);

    return EXIT_SUCCESS;
}