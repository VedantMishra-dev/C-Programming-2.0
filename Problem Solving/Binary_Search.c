#include<stdio.h>
#include<stdint.h>
extern int c;
int main() {
    int arr[] = {1,2,3,4,45,123,124,567};
    int target = 124;
    int n = sizeof(arr)/sizeof(arr[0]);
    int low =0,high = n-1,mid ;
    while(low<=high) {
        mid = (low+high)/2;
        if(arr[mid]==target) {
            printf("Found at index %d",mid);
            break;
        }
        else if(target > arr[mid]) {
            low = mid+1;
        }
        else high = mid-1;
        
    }
    
    
    return 0;
}