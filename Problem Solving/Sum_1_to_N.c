#include<stdio.h>
void sum_1_to_n(int n) {
    int sum =0;
    for(int i=1;i<=n;i++) {
        sum += i;
        printf("%d + ",i);
    }
    printf("\n");
    printf("The Sum is from 1 to %d is %d",n,sum);
}
int main() {
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);
    sum_1_to_n(n);
    return 0;
}