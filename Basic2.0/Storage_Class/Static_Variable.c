#include<stdio.h> 
void fun();
int main() {
    fun();
    fun();
    fun();
}
void fun() {
    static int count = 0;
    count ++;
    printf("Function called %d times\n",count);
}