#include<iostream>
using namespace std;
class person
{
    public:
    string school_name ;
    string name;
    void display()
    {
        cout<<"SCHOOL NAME:"<<school_name<<endl;
        cout<<"NAME:"<<name<<endl;
    }
};
class student:public person
{
    public:
     int Roll_no;
     void displaystudent()
     {
        cout<<"ROLL NO OF THE STUDENT IS:"<<Roll_no<<endl;

     }
};
int main()
{
    student s;
    s.school_name="THE BAI DHUNMAI CAWASJI HIGH SCHOOL";
    s.name="PRIYANKA PRASAD";
    s.Roll_no=20;
    s.display();
    s.displaystudent();
    return 0;
}