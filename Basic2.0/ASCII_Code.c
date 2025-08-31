#include<stdio.h>
int main() {
    // char a1 = 65;
    // char a2 = 112;
    // char a3 = 112;
    // char a4 = 108;
    // char a5 = 101;
    // char a6 = 58;
    // char a7 = 41;

    char a[] = {'A','p','p','l','e',':',')'};
    int n = sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++) {
        printf("the ASCII value of %c is ",a[i]);
        printf("%d\n",(int)a[i]);
    }

    return 0;
}