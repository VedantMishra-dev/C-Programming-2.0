#include<stdio.h>
#include "file.c"

void my_fun1(void);
static float clock = 11.0592;

static void change_system_clock(float clock);
int private_data; // this is the usecase now none can access or change it
 

int main() {
    private_data = 100;
    printf("the private data is %d\n",private_data);
    my_fun1();
    printf("the private data is %d\n",private_data);
    change_system_clock(clock);
    return 0;
}
static void change_system_clock(float clock) { // now no one can change the system clock
    printf("The system clock is %fHz\n",clock);
}
