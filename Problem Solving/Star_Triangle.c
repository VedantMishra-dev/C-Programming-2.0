#include <stdio.h>
int main()
{
    int n,m;
    printf("Enter Row No & Colum No: ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}