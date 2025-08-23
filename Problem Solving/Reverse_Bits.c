// Problem 5 – Reverse Bits
// Given an 8-bit value, reverse its bits (e.g., 0b00010110 → 0b01101000).


#include<stdio.h>
#include<stdint.h>
uint8_t reverse_bits(uint8_t num) {
    uint8_t result =0;
    for(int i=0;i<8;i++) {
        result = result << 1;
        result |= (num & 1);
        num = num >> 1;
    }
    return result;
}
int main() {
    uint8_t value;

    // if you wanna take input in hex:
    // printf("Enter 8 bit value in hex : ");
    // if(scanf("%hhx",&value)!=1) {
    //     printf("INvalid input");
    //     return 1;
    // }
    scanf("%u",&value);
    uint8_t reversed = reverse_bits(value);
    printf("%u",reversed);
    return 0;
}








// Input decimal

// #include <stdio.h>

// int main() {
//     unsigned char n;
//     scanf("%hhu", &n);  // read an unsigned 8-bit number

//     unsigned char result = 0;
//     for (int i = 0; i < 8; i++) {
//         result <<= 1;        // make space for the next bit
//         result |= (n & 1);   // copy LSB of n into result
//         n >>= 1;             // move to next bit of n
//     }

//     printf("%u\n", result);
//     return 0;
// }
