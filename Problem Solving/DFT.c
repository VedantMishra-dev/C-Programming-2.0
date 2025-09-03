// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>

#define PI 3.14159265358979323846

int main() {
    int N;
    printf("Enter N: ");
    scanf("%d",&N);
    

    double X[N];
    printf("Enter Numbers: x[n]\n");
    for(int i=0;i<N;i++){
        scanf("%lf",&X[i]);
    }
    
    printf("\n");
    printf("x[n] is: ");
    for(int i=0;i<N;i++){
        printf("%f ",X[i]);
    }
    printf("\n");
   
    double Xr[N],Xi[N];
    
    for(int k=0;k<N;k++) {
        Xr[k] = 0.0;
        Xi[k] = 0.0;
        
        for(int n=0;n<N;n++) {
            
            double angle = (2*PI*k*n)/N;
            
           Xr[k] = Xr[k] + X[n] * cos(angle);
           Xi[k] = Xi[k] - X[n] * sin(angle);
        }
    }
    
    printf("\n");
    for(int k=0;k<N;k++) {
        printf("X[%d] = %.2f + j%.2f\n", k, Xr[k], Xi[k]);
    }
    return 0;
}
