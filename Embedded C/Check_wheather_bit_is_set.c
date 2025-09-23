#include<stdio.h>
#include<stdint.h>
#include<stdbool.h>

int main() {
    uint8_t n;
    printf("Enter No: ");
    scanf("%u",&n);
    int bit;
    printf("Enter bit: ");
    scanf("%d",&bit);
    if(n &= (n<<bit)) printf("SET");
    else printf("NOT SET");
}