#include<stdio.h>
int *create_array() {
    static int arr[] = {1,2,3,4,5};
    return arr;
}
int main() {    
    int *ptr = create_array();
    for(int i=0;i<5;i++) {
        printf("%d ",ptr[i]);
    }
}