// Problem 1 – Extract Sensor ID

// Given data byte: Bits [6:4] store sensor ID, extract it.
// Example: data = 0x5A → sensor_id = 5.

#include <stdio.h>
#include<stdint.h>
int main() {
    // unsigned char data = 0x2B; // there is a sensor id in between 3-5 bit
    // unsigned char sensor_id;
    // sensor_id = (data & 0x70) >> 3;
    // printf("%u",sensor_id);
    uint8_t y = 72;
    y ^= ~(1<<5);
    printf("%u",y);
}
