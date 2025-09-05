#include <stdio.h>
int main()
{
    int n;
    printf("Enter No: ");
    scanf("%d", &n);

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++) {
            if(i%2!=0) printf("%d ",j);
            else printf("%c ",(j+64));
        }
        printf("\n");
    }
    return 0;
}