#include <iostream>
#include <fstream>
#include "Complex.hpp"
#include "fractals.hpp"
#include "julia.hpp"
#include "mandelbrot.hpp"
#include "generator.hpp"

using namespace std;

int main() {
    cout << "Testing complex numbers" << endl;
    Complex a(1, 3);
    Complex b(3, 5);
    Complex c;
    c = a.add(b);
    cout << "A: " << a << endl << "B: " << b << endl << "C: " << c << endl;
    Complex d(0, 1);
    Complex e = d.inv();
    cout << "D: " << d << endl << "E: " << e << endl;
    Complex f = d * d;
    cout << "F: "<< f << endl;

    

    Fractal<Julia> J;
    Fractal<Mandelbrot> M;

//    Fractal<Generator>  fractals[2] = { (Fractal<Generator>) J, (Fractal<Generator>) M};
//    fractals.push_back(J);
//    fractals.push_back(M);

    ofstream files[2]; 
    std::vector< std::vector< double > > outputs[2];
    
    files[0].open("output_julia.txt");
    files[1].open("output_mandelbrot.txt");


    files[0] << J.resx << " " << J.resy << endl;
    outputs[0] = J.generate();

    for (std::vector<double> row: outputs[0]) {
        for (double br: row) {
            files[0] << br << " ";
        }
        files[0] << endl;
    }
    files[0].close();

    files[1] << M.resx << " " << M.resy << endl;
    outputs[1] = M.generate();

    for (std::vector<double> row: outputs[1]) {
        for (double br: row) {
            files[1] << br << " ";
        }
        files[1] << endl;
    }
    files[1].close();
    
    int x = 5;
    int resx = 40;
    double target = x*(2.5 - 1.0)/resx + 2.5;
    cout << target << endl;
//    cout << j.mapping(0, 0) << endl;
//    cout << j.mapping(2, 4) << endl;
//    cout << j.mapping(10, 20) << endl;

    

    return 0;
}
