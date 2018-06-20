#include "julia.hpp"

Julia::Julia() {
    resx = 40;
    resy = 40;
    maxIter = 1000;
    radius = 2;
    c = Complex(1 - PHI, 0);
}

Julia::Julia(int x, int y, int iterations, double r, double realC, double imC) {
    resx = x;
    resy = y;
    maxIter = iterations;
    radius = r;
    c = Complex(realC, imC);
}

Julia::Julia(int x, int y, int iterations, double r, Complex C) {
    resx = x;
    resy = y;
    maxIter = iterations;
    radius = r;
    c = C;
}

Complex Julia::map(Complex z) {
    return z*z + c;
}
