#include<stdio.h>
#include<stdbool.h>
bool check_composite(int n) {
    for(int i=2;i<n;i++) {
        if(n%i==0) {
            printf("Composite");
            break;
        }
    }
    printf("Prime");
}
int main() {
    int n;
    printf("Enter No: ");
    scanf("%d",&n);
    check_composite(n);
}