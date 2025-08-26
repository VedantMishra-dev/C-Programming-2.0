#include<stdio.h>
int main() {
    int arr[] = {1,2,3,4,5};
    int *ptr = &arr[0];
    printf("%p\n",arr);
    printf("%p\n",ptr);
    printf("%p",*ptr);
}