#include<stdio.h>
int reverse_the_number(int n) {
    int reverse_no = 0;
    while(n>0) {
        reverse_no = reverse_no * 10;
        int last_digit = n%10;
        reverse_no = reverse_no + last_digit;
        n=n/10;
    }
    return reverse_no;
}
int main() {
    int n;
    printf("Enter No: ");
    scanf("%d",&n);
    printf("The reverse number of %d is %d",n,reverse_the_number(n));
    return 0;
}