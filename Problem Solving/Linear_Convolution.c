// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int N,M;
    printf("Enter N: ");
    scanf("%d",&N);
    printf("Enter M: ");
    scanf("%d",&M);
    int x[N];
    printf("Enter Numbers: x[n]\n");
    for(int i=0;i<N;i++){
        scanf("%d",&x[i]);
    }
    printf("Enter Numbers: h[n]\n");
    int h[M];
    for(int i=0;i<M;i++){
        scanf("%d",&h[i]);
    }
    printf("\n");
    printf("x[n] is: ");
    for(int i=0;i<N;i++){
        printf("%d ",x[i]);
    }
    printf("\n");
    printf("h[n] is: ");
    for(int i=0;i<M;i++){
        printf("%d ",h[i]);
    }
    printf("\n");
    int L = N + M - 1;
    int y[L];
    for(int i=0;i<L;i++) {
        y[i] = 0;
    }
    for (int n = 0; n < L; n++) {
        for (int k = 0; k < N; k++) {
            if ((n-k)>=0 && (n-k)<M) {
                y[n] = y[n] + x[k] * h[n - k];
            }
        }
    }
    printf("y[n] is: ");
    for(int i=0;i<L;i++){
        printf("%d ",y[i]);
    }
    return 0;
}
