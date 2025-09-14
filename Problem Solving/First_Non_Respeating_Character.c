#include <stdio.h>
#include <string.h>

char firstNonRepeatingChar(const char *str) {
    int freq[256] = {0}; // ASCII frequency table

    // Count frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Find first character with frequency 1
    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] == 1) {
            return str[i];
        }
    }

    return '\0'; // No unique character
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%99s", str);

    char result = firstNonRepeatingChar(str);
    if (result != '\0') {
        printf("First non-repeating character: %c\n", result);
    } else {
        printf("No unique character found\n");
    }

    return 0;
}