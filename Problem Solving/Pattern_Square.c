#include<stdio.h>
#include<stdbool.h>
void linear_search(int arr[],int n,int val) {
    for(int i=0;i<n;i++) {
        if(arr[i] == val) {
            printf("The Value %d is at %d index ",val,i);
            break;
        }
    }
}
int main() {
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int val = 4;
    linear_search(arr,n,val);
}