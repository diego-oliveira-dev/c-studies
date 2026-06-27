#include <stdio.h>
#include <stdlib.h>
#include "../lib/customlib.h"

void runningSum(int *nums, size_t nums_size) {
    // Time Complexity -> O(n)
    int sum = 0;
    for (size_t i = 0; i < nums_size; i++) {
        sum += nums[i];
        nums[i] = sum;
    }
}

int main() {
    int nums[] = {1,2,3,4};
    size_t nums_size = sizeof(nums) / sizeof(nums[0]);
    
    runningSum(nums, nums_size);

    puts("\nInput: nums = [1,2,3,4]\n");
    puts("Expected output: [1,3,6,10]");
    printf("Actual output:   ");
    print_array(nums, nums_size);
    puts("");

    return EXIT_SUCCESS;
}