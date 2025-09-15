#include<stdio.h>
#include<stdint.h>
extern int c;
int main() {
    int arr[10] = {1,2,3,4,5};
    int n = 5;
    int pos;
    printf("Enter the positon of value at which you want to insert ");
    scanf("%d",&pos);
    int val;
    printf("Enter the value ");
    scanf("%d",&val);
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
