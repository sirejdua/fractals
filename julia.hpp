#ifndef JULIA_H
#define JULIA_H

#include "fractals.hpp"
#include "Complex.hpp"

class Julia: public Fractal{
    public:
    	using Fractal::generate;
	Complex c;
	Julia();
	Julia(int, int, int, double, double, double);
	Julia(int, int, int, double, Complex);
	virtual Complex map(Complex);
};

#endif
