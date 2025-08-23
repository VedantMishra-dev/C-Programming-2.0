// Problem 3 – Swap Two Numbers Without Temp Variable

// Problem: Swap two integers using bitwise XOR.
//  Why: Shows XOR’s reversible property.

#include<stdio.h>
#include<stdint.h>
int main() {
    uint8_t a=12,b=13;
    // printf("Enter first no :");
    // scanf("%u",&a);
    // printf("Enter second no :");
    // scanf("%u",&b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("%u\n",a);
    printf("%u",b);
}