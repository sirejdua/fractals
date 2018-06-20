#ifndef FRACTAL_H
#define FRACTAL_H

#include <iostream>
#include <vector>
#include "Complex.hpp"

// Assuming the templating class has the method
// `int computer(Complex)`
// implemented.

template <class T>
class Fractal {
    public:
        Fractal();
        Fractal(int, int);
        int resx;
        int resy;
        // This is our generator G.
        T G;

        std::vector< std::vector<double> > generate();
        Complex mapping(int x, int y);
};

#include "fractals.tpp"
#endif
