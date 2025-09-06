#include <stdio.h>
#include <stdint.h>
#include<stdbool.h>

static inline void set_bit(volatile uint32_t *reg,uint8_t bit) {
    (*reg = *reg | (1u << bit));   // set bit
}
static inline void clear_bit(volatile uint32_t *reg,uint8_t bit) {
    (*reg = *reg & ~(1u << bit));  // clear bit
}
static inline void toggle_bit(volatile uint32_t *reg,uint8_t bit) {
    (*reg = *reg ^ (1u << bit)); // toggle bit
}
static inline bool read_bit(volatile uint32_t *reg,uint8_t bit) {
    return ((*reg >> bit) & 1U); // read bit
}

uint32_t x = 0; // assign 0

int main()
{
    set_bit(&x, 2); // 0000 --> 0010
    printf(" after set 2nd bit %u\n", x);
    clear_bit(&x, 2); // 0000 --> 0010
    printf(" after clearing 2nd bit %u\n", x);
    toggle_bit(&x, 2); // 0000 --> 0010
    printf(" after toggling 2nd bit %u\n", x);
    read_bit(&x, 2); // 0000 --> 0010
    printf(" 2nd bit %u\n", x);
}
