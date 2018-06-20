#include <iostream>
#include <fstream>
#include "Complex.hpp"
#include "fractals.hpp"
#include "julia.hpp"

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
    Julia j(800, 400, 1000, 2, Complex(1-PHI, 0));

    ofstream myfile;
    myfile.open("output.txt");


    myfile << j.resx << " " << j.resy << endl;
    std::vector< std::vector< double > > output = j.generate();
    for (std::vector<double> row: output) {
	for (double br: row) {
	    myfile << br << " ";
	}
	myfile << endl;
    }
    myfile.close();

    
    int x = 5;
    int resx = 40;
    double target = x*(2.5 - 1.0)/resx + 2.5;
    cout << target << endl;
    cout << j.mapping(0, 0) << endl;
    cout << j.mapping(2, 4) << endl;
    cout << j.mapping(10, 20) << endl;

    

    return 0;
}
