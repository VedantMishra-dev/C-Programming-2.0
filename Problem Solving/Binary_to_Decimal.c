#include<stdio.h>
#include<stdint.h>

int change(int binary) {
    int lastdigit=0,base = 1,decimal =0;
    while(binary>0) {
        lastdigit = binary%10;
        decimal = decimal + lastdigit*base;
        base = base*2;
        binary = binary/10;
    }
    return decimal;
}

int main() {
    long long binary;
    printf("Enter No: ");
    scanf("%d", &binary);

    printf("%d",change(binary));
    
    
}