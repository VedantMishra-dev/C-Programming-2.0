#include <stdio.h>
#include <stdint.h>

// Macros
#define SET_BIT(REG, BIT)    ((REG) |= (1U << (BIT)))
#define CLEAR_BIT(REG, BIT)  ((REG) &= ~(1U << (BIT)))
#define TOGGLE_BIT(REG, BIT) ((REG) ^= (1U << (BIT)))
#define READ_BIT(REG, BIT)   (((REG) >> (BIT)) & 1U)

int main(void) {
    uint32_t x = 0;  // fake register, all bits = 0

    printf("Initial: %u\n", x);

    // Set bit 3
    SET_BIT(x, 3);
    printf("After SET_BIT(x,3): %u\n", x);

    // Clear bit 3
    CLEAR_BIT(x, 3);
    printf("After CLEAR_BIT(x,3): %u\n", x);

    // Toggle bit 2
    TOGGLE_BIT(x, 2);
    printf("After TOGGLE_BIT(x,2): %u\n", x);

    // Read bit 2
    printf("READ_BIT(x,2): %u\n", READ_BIT(x, 2));

    return 0;
}
