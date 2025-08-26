#include<stdio.h>
int main() {
    // we need to print 1 3 5 7 9
    int a = 1;
    for(int i = 1;i<=10;i++) {
        printf("%d ",a);
        a += 2;
    }
    return 0;
}