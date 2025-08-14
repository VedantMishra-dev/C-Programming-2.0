// Problem 2 – Check Specific Bit

// Write a function isButtonPressed(status, pin) that returns 1 if the pin is high, else 0.

// We are given:

// A status variable (usually an unsigned char or uint8_t) that contains the state of multiple pins packed into its bits.
// A pin number (0–7) representing which bit we want to check.

// Goal:
// Write a function isButtonPressed(status, pin) that:
// Returns 1 if that specific pin's bit is high (1).
// Returns 0 if that pin's bit is low (0).

#include<stdio.h>
#include<stdbool.h>
bool isButtonPressed(unsigned char status,int pin) {
    if(status & (1<<pin)) {
        return true;
    }
    return false;
}
int main() {
    unsigned char status;
    int pin;

    printf("Enter status byte(0-255): ");
    scanf("%u",&status);

    printf("Enter pin no: ");
    scanf("%d",&pin);
    if(isButtonPressed(status,pin)) printf("%d is High",pin);
    else printf("%d is Low",pin);

}