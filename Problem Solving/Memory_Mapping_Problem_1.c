// Level 1 — Simple memory-mapping and struct layout

// Map a fake peripheral in memory (use an array or pointer to allocated memory) and access fields via a struct.

// Problem 1.1
// Given base 0x20000000 and a register at offset 0x10, create:

// typedef struct {
//     uint32_t RES[4];    // 4 words = 0x10
//     volatile uint32_t REG;
// } MYDEV_Type;

// #define MYDEV ((volatile MYDEV_Type*)0x20000000)

// Write to MYDEV->REG.
// Practice: Instead of real address, use a static uint32_t fake_mem[10]; and cast its address to MYDEV_Type* to test.
// What it tests: calculating offsets, struct alignment.



