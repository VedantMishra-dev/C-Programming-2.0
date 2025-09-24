#include<stdio.h>
int main() {
    char data = 100;
    printf("The address is : %p\n",&data);
    char *p = &data;
    char value = *p;

    printf("%d\n",value);
    
    value = 65;

    printf("%d\n",value);

}