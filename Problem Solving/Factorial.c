#include<stdio.h>
int factorial(int n) {
    int f = 1;
    for(int i = n;i>0;i--) {
        f = f * i;
    }
    return f;
}
int main() {
    int n;
    printf("Enter No: ");
    scanf("%d",&n);
    printf("The factorial of %d is %d",n,factorial(n));
}