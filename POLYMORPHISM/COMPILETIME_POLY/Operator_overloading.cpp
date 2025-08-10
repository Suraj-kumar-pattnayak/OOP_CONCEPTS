class Complex {
public:
    int real, imag;
    Complex(int r, int i) : real(r), imag(i) {}

    Complex operator+(const Complex& obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(2, 3), c2(4, 5);
    Complex c3 = c1 + c2;  // Calls operator+
    c3.display();          // 6 + 8i
}
