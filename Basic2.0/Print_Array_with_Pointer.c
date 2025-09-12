#include<stdio.h>

int main() {
    double a[3] = {1.1,2.3,5.4};
    for(int i=0;i<3;i++) {
        printf("%f ",*(a + i));
    }
    return 0;
}