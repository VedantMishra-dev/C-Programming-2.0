#include <stdio.h>

void swap(int a,int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("a: %d\n",a);
    printf("b: %d\n",b);
}
int main() {
    int a,b;
    printf("Enter two no: ");
    scanf("%d%d",&a,&b);
    swap(a,b);
    return 0;
}
