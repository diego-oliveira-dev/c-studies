#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int length(char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

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

bool compare(char* str1, char* str2) {
    int size = length(str1);
    for (int i = 0; i < size; i++) {
        if (str1[i] != str2[i]) return false;
    }
    return true;
}

bool isPalyndrome(char* word, int word_size) {
    char reversed[word_size + 1];
    reverse(word, word_size, reversed);
    if (compare(word, reversed)) {
        return true;  
    } 
    return false;
}

int main() {
    char word[] = "RACECAR";
    int word_size = length(word);
    
    char reversed[word_size + 1];
    reverse(word, word_size, reversed);
    
    printf("Word: %s\n", word);
    printf("Length: %d\n", word_size);
    printf("Reversed: %s\n", reversed);
    printf("Is palyndrome? %s\n", isPalyndrome(word, word_size) ? "true" : "false");

    // printf("Are they equal? %s\n", compare("DIEGO", "diego") ? "true" : "false");

    return EXIT_SUCCESS;
}