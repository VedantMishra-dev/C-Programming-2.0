#include<stdio.h>
#include<limits.h>
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }

    //find maximum 
    int mn = INT_MAX;
    for(int i=0;i<n;i++) {
        if(arr[i] < mn) {
            mn = arr[i];
        }
    }
    printf("The Minimum Element is %d",mn);
}