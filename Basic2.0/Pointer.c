#include<stdio.h>
#include<stdint.h>
int main() {
    char a = 'A';
    unsigned long int t = (unsigned long int)&a;
    // unsigned long int *t = &a;
    // printf("The address of variable a is %d ",t); //0061FF1F  6422299  

    printf("The address of variable a is %I64X ",t);
    return 0;
}