#include<stdio.h>
#include<stdint.h>

int change(int n,int binary[]) {
    int i = 0;
    while(n>0) {
        binary[i] = n%2;
        n = n/2;
        i++;
    }
    return i;
}

int main() {
    int n;
    printf("Enter No: ");
    scanf("%d", &n);
    int binary[32];

    int bits;

    bits = change(n,binary);
    
    for(int j=bits-1;j>=0;j--) {
        printf("%d ",binary[j]);
    }
    
}