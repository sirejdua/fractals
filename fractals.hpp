#ifndef FRACTAL_H
#define FRACTAL_H

#include <iostream>
#include <vector>
#include "Complex.hpp"

class Fractal {
    public:
        int resx;
        int resy;
        int maxIter;
	double radius;
	// this is for child classes
	virtual Complex map(Complex) = 0;
	std::vector< std::vector<double> > generate();
        Complex mapping(int x, int y);
};

#endif
