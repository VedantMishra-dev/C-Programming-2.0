#include <stdio.h>

int main()
{
    int arr[3] = {1, 2, 3};
    int *p = arr; // arr decays to &arr[0]

    // sizeof
    printf("%zu\n", sizeof(arr)); // usually 12 (3 ints)
    printf("%zu\n", sizeof(p));   // usually 8 (on 64-bit system)


    printf("\n");

    int brr[3] = {1,2,3};

    int *ptr = brr;

    for(int i=0;i<3;i++) {
        printf("%p ",p[i]);
    }
    return 0;
}