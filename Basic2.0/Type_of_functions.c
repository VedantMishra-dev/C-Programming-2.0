#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdint.h>

// No Arguments, Return Value
int get_rand_numer() {
    srand(time(0));  // Seed the random number generator
    return rand()%100;
}
int main() {
    int random_number = get_rand_numer();
    printf("%d\n",random_number);
    printf("\"Programming is fun\"");
    uint8_t t = 76;
    printf("%u",76 | (1<<4));

}