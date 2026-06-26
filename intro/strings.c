#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../lib/customlib.h"

void reverse(char* src, int str_size, char* dest) {
    int left = 0;
    int right = str_size - 1;
    while (left <= right) {
        dest[left] = src[right];
        dest[right] = src[left];
        left++;
        right--;
    }
    dest[str_size] = '\0'; 
}

bool isPalyndrome(char* word, int word_size) {
    char reversed[word_size + 1];
    reverse(word, word_size, reversed);
    if (compare_str(word, reversed)) {
        return true;  
    } 
    return false;
}

int main() {
    char word[] = "RACECAR";
    int word_size = length_str(word);
    
    char reversed[word_size + 1];
    reverse(word, word_size, reversed);
    
    printf("Word: %s\n", word);
    printf("Length: %d\n", word_size);
    printf("Reversed: %s\n", reversed);
    printf("Is palyndrome? %s\n", isPalyndrome(word, word_size) ? "true" : "false");
    
    return EXIT_SUCCESS;
}