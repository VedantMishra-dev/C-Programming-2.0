//  Problem 2 – Check if Number is Power of 2

//  Problem: Write a function to check if a number is a power of 2.
//  Why: Common in memory alignment, buffer sizes.
#include<stdio.h>
#include<stdint.h>
#include<stdint.h>
int main() {
    uint8_t count = 0;
    uint8_t y;
    printf("Enter No : ");
    scanf("%u",&y);
    for(int i=0;i<8;i++) {
        if(y & (1<<i)) {
            count++;
        }
    }
    if(count == 1) printf("Power of 2 ");
    else printf("Not Power of 2 ");
}