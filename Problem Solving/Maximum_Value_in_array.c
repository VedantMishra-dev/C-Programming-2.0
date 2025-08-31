#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
int main() {
    int arr[] = {12,42,85,43,65,45};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max_value = INT16_MIN;
    for(int i=0;i<n;i++) {
        if(arr[i]>max_value) {
            max_value = arr[i];
        }
    }
    printf("%d",max_value);
}