#include <stdio.h>
#include "main.h"
void printarray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1,6,2,3,7,4,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;

    printf("Enter k: ");
    scanf("%d", &k);

    rotate_array(arr, n, k);
    printarray(arr, n);

    return 0;
}
