#include <iostream>
using namespace std;

// A constructor whuch is used to copy or intialize the value of one object into another object, its called copy contructor
//syntax:
// ClassName ( ClassName &ref){
//    x =  ref.x;
//}
// ClassName obj2 = obj1;
class Complex {
public:
    int real, imag;

    // Default constructor
    Complex() {
        real = 0;
        imag = 0;
    }

    // Parameterized constructor
    Complex(int r, int i) {
        real = r;
        imag = i;
    }

    // Copy constructor
    Complex(const Complex &c) {
        real = c.real;
        imag = c.imag;
        cout << "Copy constructor called!" << endl;
    }

    // Method to display complex number
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4);  // Parameterized constructor
    Complex c2 = c1;   // Copy constructor called here

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number (Copy): ";
    c2.display();

    return 0;
}
