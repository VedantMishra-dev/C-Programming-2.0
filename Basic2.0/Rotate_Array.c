#include "reversing_array.h"

void rotate_array(int arr[], int n, int k) {
    k = k % n; // handle k > n

    // Right rotation
    reverse_array(arr, 0, n-k-1);
    reverse_array(arr, n-k, n-1);
    reverse_array(arr, 0, n-1);
}
