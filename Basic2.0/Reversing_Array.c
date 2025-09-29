#include<stdio.h>
extern void rotate_array(int arr[],int n,int k);

void reverse_array(int arr[],int start,int end) {
    while(start<=end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void printarray(int *ptr,int n) {
    for(int i=0;i<n;i++) {
        printf("%d ",ptr[i]);
    }
}
int main() {
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int start=0,end=n-1;
    int k;
    printf("Enter k: ");
    scanf("%d",&k);
    // reverse_array(arr,start,end);
    rotate_array(arr,n,k);
    printarray(arr,n);
    
}