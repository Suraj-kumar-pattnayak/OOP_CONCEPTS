// Normally, when you create objects, each object gets its own copy of member variables.
// But with a static variable:
// One single copy exists.
// Every object reads/writes the same variable.


// 1️⃣ Static Member Variables
// 📌 Definition
// A static member variable belongs to the class itself, not to any individual object.

// 📌 Key Points
// Single copy in memory for the entire class (no matter how many objects you create).
// Memory allocation happens only once, outside of any object — in the data segment (not in stack or heap).
// Shared by all objects of the class.
// Must be defined outside the class (in .cpp), even if declared inside.


// 2️⃣ Static Member Functions
// 📌 Definition
// A static member function also belongs to the class, not to any object.

// 📌 Key Points
// Can be called without an object.
// Can only access:
// Static member variables
// Other static member functions
//because, No this pointer (because it’s not tied to an object)., so cant used any ordinary variable, onlt the static one.

// 1️⃣ Static Member Variables
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    static int count; // Declaration only

    Student(string n) {
        name = n;
        count++; // Increment shared counter
    }

    void showCount() {
        cout << "Total students: " << count << endl;
    }
};

// Static variable must be defined outside the class
int Student::count = 0; // Initialization

int main() {
    Student s1("Alice");
    Student s2("Bob");

    s1.showCount(); // Total students: 2
    s2.showCount(); // Total students: 2
}


//static member function




// 2️⃣ Static Member Functions
#include <iostream>
using namespace std;

class Test {
public:
    static int count;

    static void showCount() {
        cout << "Count: " << count << endl;
    }
};

int Test::count = 5;

int main() {
    Test obj;
    
    // Both work:
    // obj.showCount();   // Allowed, but not preferred
    Test::showCount(); // Preferred way

    return 0;
}



//via object
obj.staticVar;      // static variable    // possible, but less recomennded
obj.staticFunction(); // static function


//via class
ClassName::staticVar;
ClassName::staticFunction();  //preferrable, as redaer notice that static member function or var are belongs to class itself, not object


