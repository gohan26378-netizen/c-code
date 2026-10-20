
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Dog barks: Woof Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Cat meows: Meow Meow!" << endl;
    }
};

class Cow : public Animal {
public:
    void makeSound() override {
        cout << "Cow moos: Moo Moo!" << endl;
    }
};

int main() {
    Dog d;
    Cat c;
    Cow w;

    Animal* ptr;

    ptr = &d;
    ptr->makeSound();

    ptr = &c;
    ptr->makeSound();

    ptr = &w;
    ptr->makeSound();

    return 0;
}
