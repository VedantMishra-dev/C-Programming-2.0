#include <stdio.h>
int main() {
    float x[8]  = { 1,1,1,1,0.5,0.5,0.5,0.5 };
    float h[6] =  { 0.3,0.25,0.2,0.15,0.1,0.05 };
    printf("x[n] is: ");
    for(int i=0;i<8;i++){
        printf("%0.3f ",x[i]);
    }
    printf("\n");
    printf("h[n] is: ");
    for(int i=0;i<6;i++){
        printf("%0.3f ",h[i]);
    }
    printf("\n");
    int L = 13;
    float y[L];
    for(int i=0;i<L;i++) {
        y[i] = 0;
    }
    for (int n = 0; n < L; n++) {
        for (int k = 0; k < 8; k++) {
            if ((n-k)>=0 && (n-k)<6) {
                y[n] = y[n] + x[k] * h[n - k];
            }
        }
    }
    printf("y[n] is: ");
    for(int i=0;i<L;i++){
        printf("%0.3f ",y[i]);
    }
    return 0;
}
