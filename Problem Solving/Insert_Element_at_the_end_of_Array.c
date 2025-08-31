#include<stdio.h>
#include<stdint.h>
int main() {
    int arr[10] = {1,2,3,4,5};
    int n = 5;
    int val  = 34;
    arr[n] = val;
    // print updated array
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}