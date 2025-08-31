// Problem 5 – Logic + Embedded Twist

// A microcontroller’s register stores an 8-bit value representing the status of 8 LEDs (1 = ON, 0 = OFF).
// Input the value as an integer (0–255).
// Print which LED numbers are ON.

// Example:

// Input: 173  (Binary: 10101101)
// Output: LEDs ON: 1 3 4 6 8

#include<stdio.h>
int main() {
    int n;
    printf("Enter No: ");
    scanf("%d",&n);
    for(int i=0;i<8;i++) {
        if(n & (1<<i)) {
            printf("%d no LED is On\n",i+1);
        }
    }        
}