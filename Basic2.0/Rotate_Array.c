#include "main.h"

void rotate_array(int arr[], int n, int k) {
    k = k % n; // handle k > n
    reverse_array(arr, 0, n-k-1);
    reverse_array(arr, n-k, n-1);
    reverse_array(arr, 0, n-1);
}
