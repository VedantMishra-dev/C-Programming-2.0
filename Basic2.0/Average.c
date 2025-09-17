#include<stdio.h>
#include<stdint.h>
int main() {
    float n1,n2,n3;
    // fflush(stdout); // this is for like trigger here no need is there
    printf("Enter no :");
    scanf("%f",&n1);
    printf("Enter no :");
    scanf("%f",&n2);
    printf("Enter no :");
    scanf("%f",&n3);
    float avg = (n1+n2+n3)/3;
    printf("%f",avg);

    // this is for when we run .exe file then op suddenly disappears for that

    // getchar();
    // printf("\nPress Enter to Continue...");
    // getchar();

    //we can do this thing by this
    printf("\nPress Enter to Continue...");
    while(getchar() != '\n') {

    }
    getchar();
    return 0;
}