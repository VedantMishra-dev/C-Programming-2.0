#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

void Sort_Number_of_0s_and_1s(int arr[],int n) {
    int noz=0,noo=0;
    for(int i=0;i<n;i++) {
        if(arr[i] == 0) noz++;
        else if(arr[i] == 1) noo++;
    }
    for(int i=0;i<noz+noo;i++) {
        if(i < noz ) arr[i] = 0;
        else if(i>noz && i<(noo+noz)) arr[i] = 1;
    }
    
}
void print_array(int arr[],int n) {
    for(int i=0;i<n;i++) {
        printf("%d ",*(arr+i));
    }
}
int main() {
    int arr[ ] = {0,1,0,1,0,0,0,1,1,1,0,1,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    Sort_Number_of_0s_and_1s(arr,n);
    print_array(arr,n);
}