#include <stdio.h>
#include "Rotating_Array.h"

void printarray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;

    printf("Enter k: ");
    scanf("%d", &k);

    rotate_array(arr, n, k);
    printarray(arr, n);

    return 0;
}
