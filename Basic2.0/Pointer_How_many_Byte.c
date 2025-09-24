#include<stdio.h>

long long int f = 0xffff123456771221;
int main() {
    char *paddress1 = (char*)(&f);
    printf("The value at address %p is %x\n",paddress1,*paddress1);

    int *paddress2 = (int*)(&f);
    printf("The value at address %p is %x\n",paddress2,*paddress2);

    short int *paddress3 = (short int*)(&f);
    printf("The value at address %p is %x\n",paddress3,*paddress3);

    long long int *paddress4 = (long long int*)(&f);
    printf("The value at address %p is %I64x\n",paddress4,*paddress4);

}