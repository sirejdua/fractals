#ifndef MANDELBROT_H
#define MANDELBROT_H

#include "Complex.hpp"
#include "generator.hpp"

class Mandelbrot: public Generator {
    public:
        Complex z;

        Mandelbrot();
        Mandelbrot(int);
        Complex map(Complex, Complex);
        double computer(Complex z);
};

#endif
