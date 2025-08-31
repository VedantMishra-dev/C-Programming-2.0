#include<stdio.h>
void print_number_1_to_100(){
    for(int i=1;i<=100;i++) {
        printf("%d ",i);
    }
}
void print_even_number_from_a_to_b(int a,int b) {
    for(int i=a;i<=b;i++) {
        if(i%2==0) {
            printf("%d ",i);
        }
    }
}
void print_table(int n) {
    for(int i=1;i<=10;i++) {
        printf("%d\n",n*i);
    }
}
int main() {
    print_number_1_to_100();
    int a,b,n;
    printf("\nEnter a and b respectively: ");
    scanf("%d%d",&a,&b);
    print_even_number_from_a_to_b(a,b);
    printf("\nOf Which No do you want to print the table : ");
    scanf("%d",&n);
    print_table(n);
    return 0;
}