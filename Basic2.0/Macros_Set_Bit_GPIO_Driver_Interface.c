#include <stdio.h>
#include <stdint.h>
#define set_bit(reg, bit) (reg = reg | (1u << bit))    // set bit
#define clear_bit(reg, bit)(reg = reg & (~(1u << bit)))  // clear bit
#define toggle_bit(reg, bit) (reg = reg ^ (1u << bit)) // toggle bit
#define read_bit(reg, bit) (reg = (reg >> bit) & 1)    // read bit

uint32_t x = 6; // assign 0

int main()
{
    clear_bit(x, 2); // 0000 --> 0010
    printf("%u\n", x);
}
