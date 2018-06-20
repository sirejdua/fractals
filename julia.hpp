#ifndef JULIA_H
#define JULIA_H

#include "Complex.hpp"

class Julia{
    public:
    	//using Fractal::generate;
        double radius;
        Complex c;
        int maxIter;

        Julia();
        Julia(int, double, double, double);
        Julia(int, double, Complex);
        Complex map(Complex);
        double computer(Complex z);
};

#endif
