#include<stdio.h>
#include<stdint.h>

void my_fun1(void);

int private_data;

int main() {
    private_data = 100;
    printf("the private data is %d\n",private_data);
    my_fun1();
    printf("the private data is %d\n",private_data);
    return 0;
}
