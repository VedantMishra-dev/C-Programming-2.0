#include<stdio.h>
int main() {
    // 3 12 48 
    // int 4 bytes 
    int a = 3;
    for(int i = 1; i<=10;i++) {
        printf("%d ",a);
        a *= 4;
    }
    return 0;
}