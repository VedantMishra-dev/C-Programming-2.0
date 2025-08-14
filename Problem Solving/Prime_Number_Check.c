#include<stdio.h>
#include <stdbool.h>
bool prime(int n) {
     for(int i=2;i<=n/2;i++) {
        if(n%i == 0) {
            printf("Composite");
            return false;
        }
    }
    printf("Prime");
    return true;
}
int main() {
    int n;
    printf("Enter Number ");
    scanf("%d",&n);
    prime(n);
}