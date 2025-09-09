#include <stdio.h>
#include <stdint.h>

int count_set_bits(uint32_t n) {
    int count = 0;
    while (n) {
        n = n & (n - 1);  // clear the rightmost 1
        count++;
    }
    return count;
}

int main() {
    uint32_t num;
    printf("Enter a number: ");
    scanf("%u", &num);

    int result = count_set_bits(num);
    printf("Number of 1s in binary: %d\n", result);

    return 0;
}
