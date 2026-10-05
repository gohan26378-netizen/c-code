Description of the Code
This program demonstrates single-level inheritance in C++. A base class named person contains the data members school_name and name, along with a display() function to display them. The derived class student inherits the properties of the person class and contains an additional data member Roll_no with a displaystudent() function. In the main() function, an object s of the student class is created, values are assigned to the inherited and derived class members, and both display functions are called.

Definition of Inheritance
Inheritance is an object-oriented programming concept in which one class acquires the properties and functions of another class. It helps in code reusability and reduces repetition.

Definition of Single-Level Inheritance
Single-level inheritance is a type of inheritance in which one derived class inherits from one base class.

What is Happening in This Code?
person is the base class.
student is the derived class.
student inherits person using public inheritance.
school_name, name, and display() are inherited by the student class.
Roll_no and displaystudent() belong to the student class.
The object s accesses both the inherited and its own members.
Therefore, the program demonstrates single-level inheritance.
