#include<stdio.h>
#include<stdint.h>

static void clear_bit(uint8_t *reg,int bit) {
    *reg = *reg & (~(1u << bit));
}

uint8_t x = 6;

int main() {
    printf("%u\n",x);
    clear_bit(&x,2);
    printf("%u\n",x);
}