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
    int mx = INT_MIN;
    for(int i=0;i<n;i++) {
        if(arr[i]>mx) {
            mx = arr[i];
        }
    }
    printf("The Maximum Element is %d",mx);
}