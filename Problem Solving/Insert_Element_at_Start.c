#include<stdio.h>
#include<stdint.h>
extern int c;
int main() {
    int arr[10] = {1,2,3,4,5};
    int n = 5;
    int pos = 0;
    int val = 34;
    for(int i=n;i>=pos;i--) {
        arr[i] = arr[i-1];
    }
    arr[pos] = val;
    n++;
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}