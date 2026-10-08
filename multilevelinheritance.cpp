#include <iostream>
using namespace std;

class Person
{
public:
    string name;

    void displayPerson()
    {
        cout << "Name: " << name << endl;
    }
};

class Student : public Person
{
public:
    int roll_no;

    void displayStudent()
    {
        cout << "Roll No: " << roll_no << endl;
    }
};

class Result : public Student
{
public:
    int marks;

    void displayResult()
    {
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Result r;

    r.name = "Priyanka";
    r.roll_no = 20;
    r.marks = 90;

    r.displayPerson();
    r.displayStudent();
    r.displayResult();

    return 0;
}