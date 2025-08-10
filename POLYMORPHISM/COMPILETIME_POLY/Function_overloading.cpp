// function overloading or method overloading
class Print {
public:
    void show(int x) {
        cout << "Integer: " << x << endl;
    }
    void show(string s) {
        cout << "String: " << s << endl;
    }
};

int main() {
    Print p;
    p.show(10);      // Integer: 10
    p.show("Hello"); // String: Hello
}


//just like constructor, compiler choose the right method by different no or diff type of parameter

// ✅ Compile-Time Polymorphism (Method Overloading)
// This happens when multiple functions/methods have the same name but different:

// Number of parameters
// Types of parameters
// Order of parameters
// The compiler decides which function to call at compile time based on the arguments passed.