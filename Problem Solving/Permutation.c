#include <stdio.h>

int factorial(int p) {
    int fact = 1;
    for(int i=1;i<=p;i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n,r;
    printf("Enter n and r: ");
    scanf("%d%d",&n,&r);
    int permutation = factorial(n)/(factorial(n-r));
    printf("%d\n",permutation);
    return 0;
}
