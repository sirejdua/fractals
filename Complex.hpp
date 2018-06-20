#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

#define PHI 1.61803398875

class Complex
{
    private:
        double x;
	double y;
    public:
        Complex();
        Complex(double, double);
        double getx() const;
        double gety() const;
	double mod() const;
        Complex inv();
        Complex add(Complex);
        Complex sub(Complex);
        Complex mul(Complex);
        Complex div(Complex);
        Complex operator+(Complex);
        Complex operator-(Complex);
        Complex operator*(Complex);
        Complex operator/(Complex);

};

std::ostream &operator<<(std::ostream &strm, const Complex &c); 

#endif
