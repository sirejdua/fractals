#include <iostream>
#include "Complex.hpp"
#include "fractals.hpp"

using namespace std;

vector< vector<double> > Fractal::generate() {
    vector< vector<double> > brightness;
    Complex z;
    int iter;
    brightness.resize(resy, vector<double>(resx, 0));
    for (int i = 0; i < resx; i++) {
	for (int j = 0; j < resy; j++) {
	    z = mapping(i, j);
	    iter = 0;
	    cout << z << ", ";

	    while ((z.mod() < radius) && (iter < maxIter)) {
		z = map(z);
		iter++;
	    }
	    brightness[j][i] = 1 - (double) iter / maxIter;
	}
	cout << endl;
    }
    return brightness;
}

Complex Fractal::mapping(int x, int y) {
    double startx = -2.5;
    double endx = 1;
    double starty = -1;
    double endy = 1;
    // ^ these are scale parameters that can be changed later, passed as input.
    // [-2.5, 1] x [-1, 1] is recommended by wikipedia
    double target_x = x*(endx - startx)/resx + startx;
    double target_y = y*(starty - endy)/resy + endy;
    return Complex(target_x, target_y);
}
