#include<stdio.h>
int highest_factor(int n) {
    for(int i = n-1;i>=2;i--) {
        if(n%i == 0) {
            return i;
        }
    }
}
int main() {
    int n;
    printf("Enter no: ");
    scanf("%d",&n);
    printf("%d",highest_factor(n));
    return 0 ;
}