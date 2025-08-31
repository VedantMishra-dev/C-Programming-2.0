#include<stdio.h>
long long int count_digit(long long int n) {
        long long int count = 0;

    while(n>0) {
        long long int last_digit = n%10;
        n=n/10;
        count++;
    }
    return count;
}
int main() {
    long long int n;
    printf("Enter No : ");
    scanf("%lld",&n);
    printf("%lld",count_digit(n));
    return 0;
}