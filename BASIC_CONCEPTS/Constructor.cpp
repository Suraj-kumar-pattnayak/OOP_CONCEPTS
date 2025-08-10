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