#include <stdio.h>
int main()
{
    int a = 5, b = 10;
    int *p = &a; // p points to a

    *p = 20; // Step 1: change value at address of a
    p = &b;  // Step 2: make p point to b
    *p = 30; // Step 3: change value at address of b

    printf("%d ",a);
    printf("%d ",b);
    return 0;
}
