#include <stdio.h>
#include <stdint.h>

typedef struct {
    uint32_t RES[4];          // reserved space
    volatile uint32_t REG;    // our register at offset 0x10
} MYDEV_Type;

int main() {
    static uint32_t fake_mem[10];
    MYDEV_Type* mydev = (MYDEV_Type*)fake_mem;

    mydev->REG = 42;

    printf("fake_mem[4] = %u\n", fake_mem[4]);
}
