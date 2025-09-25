#include<stdio.h>

long long int f = 0xffff123456771221;
int main() {

    //Very good observation about Pointer
    
    short int *paddress1 = (short int*)(&f);
    printf("The value at address %p is %x\n",paddress1,*paddress1);

    paddress1 = paddress1 + 1;
    printf("The value at address %p is %x\n",paddress1,*paddress1);

    int *paddress1 = (short int*)(&f);
    printf("The value at address %p is %x\n",paddress1,*paddress1);

    paddress1 = paddress1 + 1;
    printf("The value at address %p is %x\n",paddress1,*paddress1);


}