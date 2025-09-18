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
    int smx = INT_MIN;

    for(int i=0;i<n;i++) {
        if(arr[i]>mx) {
            smx = mx; 
            mx = arr[i];
        } else if(arr[i]>smx && arr[i]!=mx) {
            smx = arr[i];
        }
    }
    printf("The Maximum Element is %d\n",mx);

    if(smx==INT_MIN) {
        printf("No second maximum element exists");
    } else {
        printf("The Second Maximum Element is %d",smx);
    }
}