// Problem 3 – Embedded-Oriented (Bitwise)

// Given an integer, toggle the 3rd bit (counting from 0 as the least significant bit).
// Print the number before and after toggling.

#include<stdio.h>
int main() {
    int n;
    printf("Enter No : ");
    scanf("%d",&n);
    // 12 1100 and you wanna make it 4 so 0100
    int step_1 = 1<<3;
    int step_2 = n ^ step_1;
    printf("%d",step_2);
    printf("\n");
    n ^= (1<<3);
    printf("%d",n);

}