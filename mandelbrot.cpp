#include "mandelbrot.hpp"

Mandelbrot::Mandelbrot() {
    maxIter = 15;
}

Mandelbrot::Mandelbrot(int iterations) {
    maxIter = iterations;
}

Complex Mandelbrot::map(Complex z, Complex c) {
    return z*z + c;
}

double Mandelbrot::computer(Complex c) {
    int iter = 0;
    Complex z(0, 0);
    while ((z.mod() < 2) && (iter < maxIter)) {
        z = map(z, c);
        iter++;
    }
    return (double) (iter / maxIter);
}
