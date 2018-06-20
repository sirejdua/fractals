#include <iostream>
#include "Complex.hpp"
#include "fractals.hpp"

using namespace std;

template <class T>
Fractal<T>::Fractal() {
    resx = 40;
    resy = 40;
    G = T();
}

template <class T>
Fractal<T>::Fractal(int x, int y) {
    resx = x;
    resy = y;
    G = T();
}

template <class T>
vector< vector<double> > Fractal<T>::generate() {
    vector< vector<double> > brightness;
    Complex z;
    double b;
    brightness.resize(resy, vector<double>(resx, 0));
    for (int i = 0; i < resx; i++) {
        for (int j = 0; j < resy; j++) {
            z = mapping(i, j);
            b = G.computer(z);
            brightness[j][i] = 1 - b; // b;
        }
    }
    return brightness;
}

template <class T>
Complex Fractal<T>::mapping(int x, int y) {
    double startx = -2;
    double endx = 2;
    double starty = -1;
    double endy = 1;
    // ^ these are scale parameters that can be changed later, passed as input.
    // [-2.5, 1] x [-1, 1] is recommended by wikipedia
    double target_x = x*(endx - startx)/resx + startx;
    double target_y = y*(starty - endy)/resy + endy;
    return Complex(target_x, target_y);
}

