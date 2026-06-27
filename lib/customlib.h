#ifndef CUSTOMLIB_H
#define CUSTOMLIB_H

#include <stdio.h>
#include <stdbool.h>

size_t length_str(const char *str);
// returns the length of a String excluding the null terminator '\0'

bool compare_str(const char *str1, const char *str2);
// returns true if all characters from each String match, returns false if they don't

bool compare_arr(const int *arr1, const size_t arr1_size, const int *arr2, const size_t arr2_size);
// returns true if all elements from each array match, returns false if they don't

void print_array(const int *arr, const size_t arr_size);
// given an array [a,b,c,...n], it prints the array as "[a,b,c,...n]"

#endif