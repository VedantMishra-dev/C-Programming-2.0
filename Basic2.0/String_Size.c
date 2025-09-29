#include<stdio.h>
#include<string.h>
int main() {
    char array1[] = {'h','e','l','l','o','\0'};
    char array2[] = "hello";
    printf("%d ",sizeof(array1));
    printf("%d ",sizeof(array2));
}