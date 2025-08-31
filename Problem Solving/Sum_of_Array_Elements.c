#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>

//Using Recursion
int sum_of_element(int arr[],int n) {
    if(n == 0) return 0;
    return arr[n-1]+ sum_of_element(arr,n-1);
}
int main() {
    int arr[] = {21,14,65,23,42,54};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("%d\n",n);
    int sum = 0;
    for(int i=0;i<n;i++) {
        sum += arr[i];
    }
    printf("%d\n",sum);
    printf("%d",sum_of_element(arr,n));
}