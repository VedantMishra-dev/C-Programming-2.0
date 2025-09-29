#include<stdio.h>
#include "Reversing_Array.c"
extern void reverse_array(int arr[],int start,int end);
extern void printarray(int *ptr,int n);

void rotate_array(int arr[],int n,int k) {
    reverse_array(arr,0,n-k-1);
    reverse_array(arr,n-k,n-1);
    reverse_array(arr,0,n-1);
}
