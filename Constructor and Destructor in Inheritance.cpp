
#include <iostream>
using namespace std;

class Vehicle {
public:
    Vehicle() {
        cout << "Vehicle constructor called" << endl;
    }

    ~Vehicle() {
        cout << "Vehicle destructor called" << endl;
    }
};

class Car : public Vehicle {
public:
    Car() {
        cout << "Car constructor called" << endl;
    }

    ~Car() {
        cout << "Car destructor called" << endl;
    }
};

int main() {
    cout << "Creating Car object..." << endl;
    Car c;

    cout << "Car object will be destroyed..." << endl;

    return 0;
}
