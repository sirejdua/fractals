#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

class Complex
{
    private:
        int x;
        int y;
    public:
        Complex();
        Complex(double, double);
        double getx() const;
        double gety() const;
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
