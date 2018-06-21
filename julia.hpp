#ifndef JULIA_H
#define JULIA_H

#include "Complex.hpp"
#include "generator.hpp"

class Julia: public Generator {
    public:
        Complex c;

        Julia();
        Julia(int, double, double, double);
        Julia(int, double, Complex);
        Complex map(Complex);
        double computer(Complex z);
};

#endif
