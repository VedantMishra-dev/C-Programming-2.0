#include<stdio.h>

int main() {
    int y = 4;
    int *b = NULL;
    *b = 10;
    printf("%p\n",*b);
}