#include<stdio.h>
int main() {
    int n;
    printf("Enter no : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++) {
        for(int j=65;j<=(65+n);j++) {
            printf("%c ",(char)j);
        }
        printf("\n");
    }
    
    return 0;
}