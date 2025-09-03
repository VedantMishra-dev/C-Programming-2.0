#include<stdio.h>
int sum_of_digit(int n) {
    int sum =0;
    while(n>0) {
        int last_digit = n % 10;
        sum += last_digit;
        n = n/10;
    }
    return sum;
}
int reverse_no(int n) {
    int reverse_no = 0;
    while(n>0) {
        int last_digit = n % 10;
        reverse_no = reverse_no * 10;
        reverse_no = reverse_no + last_digit;
        n = n/10;
    }
    return reverse_no;
}
int main() {
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);
    printf("The sum of digit is %d and reverse of the number is %d",sum_of_digit(n),reverse_no(n));
    return 0;
}