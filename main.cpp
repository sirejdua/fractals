#include <iostream>
#include "Complex.hpp"

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

    return 0;
}
