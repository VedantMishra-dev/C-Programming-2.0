#include <stdio.h>

// structure for complex numbers
typedef struct {
    double real;
    double imag;
} Complex;

// function to multiply two complex numbers
Complex multiply(Complex a, Complex b) {
    Complex result;
    result.real = a.real * b.real - a.imag * b.imag;
    result.imag = a.real * b.imag + a.imag * b.real;
    return result;
}

// function to add two complex numbers
Complex add(Complex a, Complex b) {
    Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

// function to subtract two complex numbers
Complex subtract(Complex a, Complex b) {
    Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}

int main() {
    // inputs
    Complex x1 = {2.0, 3.0};
    Complex x2 = {4.0, 6.0};
    Complex W  = {0.25, -0.75};

    // compute W * x2
    Complex Wx2 = multiply(W, x2);

    // butterfly outputs
    Complex X1p = add(x1, Wx2);
    Complex X2p = subtract(x1, Wx2);

    // print results
    printf("X1' = %.2f + j%.2f\n", X1p.real, X1p.imag);
    printf("X2' = %.2f + j%.2f\n", X2p.real, X2p.imag);

    return 0;
}
