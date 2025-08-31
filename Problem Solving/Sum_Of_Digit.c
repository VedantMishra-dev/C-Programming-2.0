#include<stdio.h>
int sum_of_digit(int n) {
    int sum =0;
    while(n>0) {
        int last_digit = n%10;
        sum = sum +last_digit;
        n=n/10;
    }
    return sum;
}
int main() {
    int n;
    printf("Enter No: ");
    scanf("%d",&n);
    printf("The sum of digits %d is %d",n,sum_of_digit(n));
    return 0;
}