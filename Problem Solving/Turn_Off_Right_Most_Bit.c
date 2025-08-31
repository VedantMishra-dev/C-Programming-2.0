#include<stdio.h>
#include<stdint.h>
int main() {
    uint8_t y = 13;
    y &= ~(1);
    printf("%hhu",y);
}