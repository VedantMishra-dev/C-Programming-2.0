#include<stdio.h>
int main() {
    int n;
    printf("Enter no : ");
    scanf("%d",&n);

    for(int i=97;i<=(97+n);i++) {
        for(int j=97;j<=(97+n);j++) {
            printf("%c ",(char)j);
        }
        printf("\n");
    }
    
    return 0;
}