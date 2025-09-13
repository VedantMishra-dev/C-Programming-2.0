#include <stdio.h>
int main() {
    int a = 15, b = 20;
    int *p1 = &a, *p2 = &b;

    int temp = *p1;   // store value at p1 (15)
    *p1 = *p2;        // put value at p2 (20) into a
    *p2 = temp;       // put stored 15 into b

    printf("a = %d, b = %d\n", a, b);
    return 0;
}
