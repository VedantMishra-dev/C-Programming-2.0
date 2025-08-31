#include<stdio.h>
#include<stdbool.h>
bool flag = true;
bool check_prime_number(int n) {
    for(int i=2;i<n/2;i++) {
        if(n%i==0) {
            flag = false;
            break;
        }
    }
    return true;
}
int main() {
    int n;
    printf("Enter No: ");
    scanf("%d",&n);
    if(n==1) {
        printf("Neither Prime Nor Composite");
        return 0;
    }
    check_prime_number(n);
    if(flag == false) printf("composite");
    else if(flag == true) printf("prime");
}