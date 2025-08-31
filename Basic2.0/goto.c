#include<stdio.h>
int main() {
    int n = 5;
    start:
        printf("%d\n",n*n);
        n++;
    if(n<=10) goto start;
    return 0;
}