// Problem 3 – Swap Two Numbers Without Temp Variable

// Problem: Swap two integers using bitwise XOR.
//  Why: Shows XOR’s reversible property.

#include<stdio.h>
#include<stdint.h>
int main() {
    uint8_t a,b;
    printf("Enter first no :");
    scanf("%hhu",&a);
    printf("Enter second no :");
    scanf("%hhu",&b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("%hhu\n",a);
    printf("%hhu",b);
}