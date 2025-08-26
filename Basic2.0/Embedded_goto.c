#include<stdio.h>
#include<stdint.h>
int main() {
    uint8_t memory = 1;
    uint8_t sensor = 0;

    if(!memory) {
        goto error;
    }
    if(!sensor) {
        goto error;
    }

    printf("System started successfully");
    return 0;

    error :
    printf("System initialization failed ");
    return -1;

}