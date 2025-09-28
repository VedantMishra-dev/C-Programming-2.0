#include<stdio.h>
#include<string.h>
void printarray(int *ptr,int n) {
    for(int i=0;i<n;i++) {
        printf("%d ",ptr[i]);
    }
}
int main() {
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int start = 0,end= n-1;
    while(start<=end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    printarray(arr,n);
}