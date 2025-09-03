#include <stdio.h>
int main()
{
    int n,m;
    printf("Enter Row No: ");
    scanf("%d", &n);
    printf("Enter Column No: ");
    scanf("%d", &m);
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}