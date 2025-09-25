#include<stdio.h>

long long int f = 0xffff123456771221;
int main() {
    char *paddress1 = (char*)(&f);
    printf("The value at address %p is %x\n",paddress1,*paddress1);

    paddress1 = paddress1 + 1;
    printf("The value at address %p is %x\n",paddress1,*paddress1);

    paddress1 = paddress1 + 4;
    printf("The value at address %p is %x\n",paddress1,*paddress1);

}