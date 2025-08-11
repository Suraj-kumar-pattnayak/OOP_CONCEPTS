// Constructors
// A constructor is a special method that is automatically called when an object of a class is created.

// To create a constructor, use the same name as the class, followed by parentheses ():

class MyClass {     
  public:           
    MyClass() {     // Constructor
      cout << "Hello World!";
    }
};

int main() {
  MyClass myObj;    // Create an object of MyClass (this will call the constructor)
  return 0;
}

// Constructor Rules
// The constructor has the same name as the class.
// It has no return type (not even void).
// It is usually declared public.
// It is automatically called when an object is created.




// Constructor Defined Outside the Class

class Car {        
  public:          
    string brand;  
    string model;  
    int year;    
    Car(string x, string y, int z); // Constructor declaration
};

// Constructor definition outside the class
Car::Car(string x, string y, int z) {
  brand = x;
  model = y;
  year = z;
}

int main() {
  // Create Car objects and call the constructor with different values
  Car carObj1("BMW", "X5", 1999);
  Car carObj2("Ford", "Mustang", 1969);

  // Print values
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
}




//extra 
//one program describing implicit and explicit code

#include <iostream>
using namespace std;

class Complex {
public:
    int real, imag;

    // Default constructor
    Complex() {
        real = 0;
        imag = 0;
    }

    // Parameterized constructor
    Complex(int x, int y) {
        real = x;
        imag = y;
    }

    // Function to add two complex numbers
    Complex addComplex(Complex c1, Complex c2) {
        Complex temp;
        temp.real = c1.real + c2.real;
        temp.imag = c1.imag + c2.imag;
        return temp;
    }
};

int main() {
    // ---------- Implicit call to constructor ----------
    Complex c1(2, 3); // implicit: passing values directly when creating object
    Complex c2(4, 5);

    cout << "First complex number: " << c1.real << " + " << c1.imag << "i" << endl;
    cout << "Second complex number: " << c2.real << " + " << c2.imag << "i" << endl;

    Complex c3; // default constructor called
    c3 = c3.addComplex(c1, c2); // adding using member function

    cout << "Sum (Implicit call example): " << c3.real << " + " << c3.imag << "i" << endl;

    // ---------- Explicit call to constructor ----------
    Complex c4 = Complex(7, 8); // explicit: writing 'Complex(...)'
    Complex c5 = Complex(1, 2);

    cout << "\nThird complex number: " << c4.real << " + " << c4.imag << "i" << endl;
    cout << "Fourth complex number: " << c5.real << " + " << c5.imag << "i" << endl;

    Complex c6;
    c6 = c6.addComplex(c4, c5);

    cout << "Sum (Explicit call example): " << c6.real << " + " << c6.imag << "i" << endl;

    return 0;
}


// →ways of calling the constructor
// 1. Implicity call (calling the constructor using objects)
// 2. Explicity call (constructor is called by the user)
// 3. Dynamic initialization (Finst- memony is allocated to the objects using default constructor. then Parameter wise constructor is called to initialize the data members)
