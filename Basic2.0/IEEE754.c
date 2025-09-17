#include<stdio.h>
int main() {
    float f = 45.7564357545;
    printf("%f\n",f);
    printf("%0.9f\n",f); // till the 6 points after decimal is correct but after wrong
    
    double p = 34.78976834578;
    printf("%0.11lf\n",p);

    //scientific notation
    printf("%e\n",p);
    printf("%e\n",f);
    printf("%0.2ef\n",f);
    

    //charge 
    float se = -1.6891245347e-19;
    printf("%f\n",se);
    printf("%e\n",se);
    printf("%le\n",se);

    double qe = -1.6891245347e-19;
    printf("%f\n",qe);
    printf("%e\n",qe);
    printf("%0.11le\n",qe);
}