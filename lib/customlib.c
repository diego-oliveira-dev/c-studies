#include "customlib.h"

size_t length_str(const char* str) {
    size_t length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

bool compare_str(const char* str1, const char* str2) {
    size_t size = length_str(str1);
    if (size != length_str(str2)) return false;
    for (size_t i = 0; i < size; i++) {
        if (str1[i] != str2[i]) return false;
    }
    return true;
}

bool compare_arr(const int* arr1, size_t arr1_size, const int* arr2, size_t arr2_size) {
    size_t size = arr1_size;
    if (size != arr2_size) return false;
    for (size_t i = 0; i < size; i++) {
        if (arr1[i] != arr2[i]) return false;
    }
    return true;
}

void print_array(const int *arr, size_t arr_size) {
    printf("[");
    for (size_t i = 0; i < arr_size; i++) {
        printf("%d", arr[i]);
        if (i + 1 < arr_size) {
            printf(",");
        }
        
    }
    printf("]\n");
}