#include<stdio.h>
#define type_of(x) _Generic((x), \
    int: "int", \
    float: "float", \
    double: "double", \
    char *: "char *", \
    default: "unknown")

int main() {
    float y = 3.14;
    int *ip = (int*)&y;   // cast address of y to int*
    printf("%p \n",*ip);
    printf("%s ",type_of(*ip));

}