#include "julia.hpp"

Julia::Julia() {
    maxIter = 1000;
    radius = 2;
    c = Complex(1 - PHI, 0);
}

Julia::Julia(int iterations, double r, double realC, double imC) {
    maxIter = iterations;
    radius = r;
    c = Complex(realC, imC);
}

Julia::Julia(int iterations, double r, Complex C) {
    maxIter = iterations;
    radius = r;
    c = C;
}

double Julia::computer(Complex z) {
    int iter = 0;
    while ((z.mod() < radius) && (iter < maxIter)) {
        z = map(z);
        iter++;
    }
    return (double) iter / maxIter;
}

Complex Julia::map(Complex z) {
    return z*z + c;
}

