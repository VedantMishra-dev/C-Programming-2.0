// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main() {
    int N;
    printf("Enter N (number of samples): ");
    scanf("%d", &N);

    double Fs = 8000.0; // Sampling frequency
    double f = 1000.0;  // Sine wave frequency

    double x[N]; // Signal array

    // Generate sine wave
    for (int n = 0; n < N; n++) {
        x[n] = sin(2 * PI * f * n / Fs);
    }

    printf("\nx[n] (Sine Wave Samples):\n");
    for (int i = 0; i < N; i++) {
        printf("x[%d] = %f\n", i, x[i]);
    }

    // Arrays for real and imaginary parts of DFT
    double Xr[N], Xi[N];

    // DFT computation
    for (int k = 0; k < N; k++) {
        Xr[k] = 0.0;
        Xi[k] = 0.0;

        for (int n = 0; n < N; n++) {
            double angle = 2 * PI * k * n / N;
            Xr[k] += x[n] * cos(angle);
            Xi[k] -= x[n] * sin(angle);
        }
    }

    // Display DFT results
    printf("\nDFT Output:\n");
    for (int k = 0; k < N; k++) {
        double magnitude = sqrt(Xr[k]*Xr[k] + Xi[k]*Xi[k]);
        printf("X[%d] = %.2f + j%.2f | Magnitude = %.2f\n", k, Xr[k], Xi[k], magnitude);
    }

    return 0;
}
