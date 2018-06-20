// implement the operations for complex numbers
// addition, subtraction, multiplication, (division?)

#include <iostream>
#include <cmath>
#include "Complex.hpp"
using namespace std;

Complex::Complex(){
    x = 0;
    y = 0;
}

Complex::Complex(double a, double b) {
    x = a;
    y = b;
}

double Complex::getx() const {
    return x;
}

double Complex::gety() const {
    return y;
}

double Complex::mod() const {
    return sqrt(x*x + y*y);
}

Complex Complex::inv() {
    double scale = (double) 1/(x*x + y*y);
    return Complex(x / scale, -1.0*y / scale);
}

Complex Complex::add(Complex other) {
    return Complex(x + other.getx(), y + other.gety());
}

Complex Complex::sub(Complex other) {
    return Complex(x - other.getx(), y - other.gety());
}

Complex Complex::mul(Complex other) {
    double u = other.getx();
    double v = other.gety();
    return Complex(x*u - y*v, x*v + y*u);
}

Complex Complex::div(Complex other) {
    return this->mul(other.inv());
}

Complex Complex::operator+(Complex other) {
    return this->add(other);
}

Complex Complex::operator-(Complex other) {
    return this->sub(other);
}

Complex Complex::operator*(Complex other) {
    return this->mul(other);
}

Complex Complex::operator/(Complex other) {
    return this->div(other);
}

std::ostream &operator<<(std::ostream &strm, Complex const &c) {
	return strm << c.getx() << " + " << c.gety() << "i";
}


