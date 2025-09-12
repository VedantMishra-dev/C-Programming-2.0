#include<stdio.h>

int main() {
    int y = 4;
    int *p = &y;
    printf("%d \n",*(&y));
    printf("%p",p);
    printf("\n%p ",&(*p));
    return 0;
}