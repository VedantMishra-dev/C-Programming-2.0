#include <stdio.h>
#include <stdint.h>

#define SCALE (1 << 8)

int16_t toFixed(float x) { return (int16_t)(x * SCALE); }
float toFloat(int16_t fx) { return ((float)fx / SCALE); }

int16_t fixedAdd(int16_t a, int16_t b) { return a + b; }
int16_t fixedSub(int16_t a, int16_t b) { return a - b; }
int16_t fixedMul(int16_t a, int16_t b) { return (int16_t)(((int32_t)a * b) >> 8); }
int16_t fixedDiv(int16_t a, int16_t b) { return (int16_t)(((int32_t)a << 8) / b); }

int main() {
    int16_t A = toFixed(3.75);
    int16_t B = toFixed(-2.5);

    int16_t sum = fixedAdd(A, B);
    int16_t prod = fixedMul(A, B);
    int16_t quot = fixedDiv(A, B);

    printf("Sum: %f\n", toFloat(sum));
    printf("Product: %f\n", toFloat(prod));
    printf("Quotient: %f\n", toFloat(quot));

    return 0;
}
