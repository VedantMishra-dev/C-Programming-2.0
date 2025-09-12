#include<stdio.h>

int main() {
    int y = 4;
    int *b = &y;
    printf("%p\n",b);
    printf("%p\n",*b);


}