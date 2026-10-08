#include <iostream>
using namespace std;

class Person
{
public:
    string name;

    void display()
    {
        cout << "NAME: " << name << endl;
    }
};

class Student : public Person
{
public:
    int Roll_no;

    void displaystudent()
    {
        cout << "ROLL NO: " << Roll_no << endl;
    }
};

class Teacher : public Person
{
public:
    string subject;

    void displayteacher()
    {
        cout << "SUBJECT: " << subject << endl;
    }
};

int main()
{
    Student s;
    s.name = "PRIYANKA PRASAD";
    s.Roll_no = 20;

    cout << "STUDENT DETAILS:" << endl;
    s.display();
    s.displaystudent();

    Teacher t;
    t.name = "RAHUL SIR";
    t.subject = "COMPUTER SCIENCE";

    cout << "\nTEACHER DETAILS:" << endl;
    t.display();
    t.displayteacher();

    return 0;
}