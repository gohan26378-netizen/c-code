
#include <iostream>
using namespace std;

// Base class
class Complex {
protected:
    float real, imaginary;

public:
    Complex(float r = 0, float i = 0) {
        real = r;
        imaginary = i;
    }

    // Overload + operator
    Complex operator+(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imaginary = imaginary + c.imaginary;
        return temp;
    }

    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

// Derived class
class ScientificComplex : public Complex {
public:
    ScientificComplex(float r = 0, float i = 0)
        : Complex(r, i) {
    }

    void show() {
        display();
    }
};

int main() {
    ScientificComplex c1(3, 4);
    ScientificComplex c2(2, 5);

    Complex c3 = c1 + c2;

    cout << "First Complex Number: ";
    c1.show();

    cout << "Second Complex Number: ";
    c2.show();

    cout << "Sum of Complex Numbers: ";
    c3.display();

    return 0;
}
