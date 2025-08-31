#include<stdio.h>
#include<stdint.h>
#include<stdbool.h>
bool set(uint8_t t,int n) {
    if(t &= (1<<n)) {
        return true;
    }
    return false;
}
int main() {
    uint8_t t = 0x8D;
    // Wanna Clear 5th bit which is already clear

    // t &= ~(1<<5);
    // printf("%u",t);

    //one more method pehle check karte hai ki wheather the specific bit is low or high
    // set(t);

    int n;
    printf("Which Bit You want to put Low ");
    scanf("%d",&n);
    if(set(t,n)) {
        t &= ~(1<<n);
        printf("%u",t);
    } 
}