// Problem 1 – Extract Sensor ID

// Given data byte: Bits [6:4] store sensor ID, extract it.
// Example: data = 0x5A → sensor_id = 5.

#include <stdio.h>
int main() {
    unsigned char data = 0x5A;
    unsigned char sensor_id;
    sensor_id = (data & 0x70) >> 4;
    printf("%u",sensor_id);
}
