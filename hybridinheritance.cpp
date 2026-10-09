#include <iostream>
using namespace std;

// Base class
class Pet_Animal
{
protected:
    int eyes;

public:
    Pet_Animal()
    {
        cout << "Pet animal constructor called" << endl;
    }

    ~Pet_Animal()
    {
        cout << "Pet animal destructor called" << endl;
    }

    void pet()
    {
        cout << "This is a pet animal" << endl;
    }
};

// Base class
class Wild_Animal
{
protected:
    int age;

public:
    Wild_Animal()
    {
        cout << "Wild animal constructor called" << endl;
    }

    ~Wild_Animal()
    {
        cout << "Wild animal destructor called" << endl;
    }

    void wild()
    {
        cout << "This is a wild animal" << endl;
    }
};

// Multiple inheritance
class Animal : public Pet_Animal, public Wild_Animal
{
public:
    Animal()
    {
        cout << "Animal constructor called" << endl;
    }

    ~Animal()
    {
        cout << "Animal destructor called" << endl;
    }

    void sound()
    {
        cout << "Generic animal sound" << endl;
    }
};

// Multilevel inheritance
class Dog : public Animal
{
public:
    void display()
    {
        cout << "Dog barks" << endl;
    }
};

int main()
{
    Dog d;

    cout << "------------------" << endl;

    d.pet();
    d.wild();
    d.sound();
    d.display();

    return 0;
}