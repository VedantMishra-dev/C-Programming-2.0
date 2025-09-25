#include<stdio.h>
int main() {
    int x =12;
    int y = 15;
    
    const int *ptr = &x;
    printf("%d\n",ptr);
    ptr = &y;
    printf("%d\n",ptr);

    int *const ptr = &x;
    *ptr = 16;
    printf("%d\n",*ptr);

}