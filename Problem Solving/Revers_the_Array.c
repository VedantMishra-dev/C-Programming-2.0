#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

void print_array(int arr[],int n) {
    for(int i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
}
int main() {
    int arr[ ] = {1,4,64,12,32};
    int n = sizeof(arr)/sizeof(arr[0]);
    int start = 0;
    int end = n-1;
    while(start<end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    print_array(arr,n);
}