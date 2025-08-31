// Problem 4 – Company Favorite

// Write a program to reverse a given string without using strrev().
// You must do it using a loop.

// Example:

// Input: hello
// Output: olleh

#include<stdio.h>
#include<string.h>

int main() {
    char str[] = "Vedant";
    int n = strlen(str);
    int first_index = 0;
    int last_index = n-1;
    while(first_index < last_index) {
        char temp = str[first_index];
        str[first_index] = str[last_index];
        str[last_index] = temp;
        first_index++;
        last_index--;
    }
    printf("%s",str);
}