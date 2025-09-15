#include <stdio.h>

void passing_array_through_function(int arr[],int n) {
    for(int i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
}
int main() {
    int arr[] = {1,2,3,42,32};
    int n = sizeof(arr)/sizeof(arr[0]);
    passing_array_through_function(arr,n);
    return 0;
}
