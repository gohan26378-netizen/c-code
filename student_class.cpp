//Write a C++ program to create a class named Student with private data members such as age, first name, last name, and standard. Implement public setter and getter functions to store and retrieve student details. Also, create a to_string() function to combine all student information into a single comma-separated string. Create an object of the class to access its member functions and display the student details.//
#include<iostream>
#include<string>
using namespace std;

class Student
{
    private:
        int age;
        string first_name;
        string last_name;
        int standard;

    public:

        void set_age(int a)
        {
            age = a;
        }

        int get_age()
        {
            return age;
        }

        void set_first_name(string fname)
        {
            first_name = fname;
        }

        string get_first_name()
        {
            return first_name;
        }

        void set_last_name(string lname)
        {
            last_name = lname;
        }

        string get_last_name()
        {
            return last_name;
        }

        void set_standard(int s)
        {
            standard = s;
        }

        int get_standard()
        {
            return standard;
        }

        string to_string()
        {
            return std::to_string(age) + "," +
                   first_name + "," +
                   last_name + "," +
                   std::to_string(standard);
        }
};

int main()
{
    Student s;

    int age, standard;
    string first_name, last_name;

    cin >> age;
    cin >> first_name;
    cin >> last_name;
    cin >> standard;

    s.set_age(age);
    s.set_first_name(first_name);
    s.set_last_name(last_name);
    s.set_standard(standard);

    cout << s.get_age() << endl;
    cout << s.get_last_name() << ", " 
         << s.get_first_name() << endl;
    cout << s.get_standard() << endl;
    cout << endl;
    cout << s.to_string() << endl;

    return 0;
}
