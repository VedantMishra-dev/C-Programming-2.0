#include <stdio.h>
#include <string.h>

int main() {
    int arr[] = {1,2,4,5,2,35,32};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    for(int i=0;i<n;i++) {
        if(arr[i]%2==0) sum += arr[i];
    }
    printf("The sum is %d ",sum);
    return 0;
}