#include <stdio.h>
#include <string.h>
#include <math.h>

unsigned int binary_to_decimal(const char *binary_str) {
    unsigned int decimal = 0;
    int len = strlen(binary_str);

    // Traverse from rightmost bit (LSB)
    for (int i = 0; i < len; i++) {
        if (binary_str[len - i - 1] == '1') {
            decimal += (1 << i);  // 2^i
        }
    }
    return decimal;
}

int main() {
    char binary[33];
    printf("Enter a binary number: ");
    scanf("%32s", binary);

    unsigned int decimal = binary_to_decimal(binary);
    printf("Decimal: %u\n", decimal);

    return 0;
}
