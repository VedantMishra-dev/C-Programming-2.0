//  Problem 4 – Find Odd or Even

//  Problem: Given an integer, check if it’s odd or even.

#include<stdio.h>
#include<stdint.h>
void check_even_or_odd(uint8_t t) {
    if(t & 1) printf("Odd No");
    else printf("Even no");
}
int main() {
    uint8_t t;
    printf("Enter no : ");
    scanf("%hhu",&t);
    check_even_or_odd(t);
}