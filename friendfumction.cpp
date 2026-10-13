#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int img;

public:
    // Default constructor
    Complex()
    {
        real = 0;
        img = 0;
        cout << "Default Constructor" << endl;
    }

    // Parameterized constructor
    Complex(int r, int i)
    {
        real = r;
        img = i;
        cout << "Parameterized Constructor" << endl;
    }

    // Copy constructor
    Complex(const Complex& c)
    {
        real = c.real;
        img = c.img;
        cout << "Copy Constructor" << endl;
    }

    void display()
    {
        cout << real << "+" << img << "i" << endl;
    }

    // Friend function declaration
    friend Complex operator+(const Complex& a, const Complex& b);
};

// Friend function definition
Complex operator+(const Complex& a, const Complex& b)
{
    Complex temp(a.real + b.real, a.img + b.img);
    return temp;
}

int main()
{
    Complex c1(1, 2), c2(3, 4), c3;

    c3 = c1 + c2;

    c3.display();

    return 0;
}
