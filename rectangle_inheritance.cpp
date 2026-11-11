//Write a C++ program to demonstrate inheritance by creating a parent class named Rectangle with width and height data members. Implement functions to read and display the dimensions of the rectangle. Create a derived class named RectangleArea that inherits from the Rectangle class and calculates and displays the area of the rectangle.//

#include <iostream>
using namespace std;

class Rectangle
{
    public:
        int width, height;

        void read_input()
        {
            cin >> width >> height;
        }

        void display()
        {
            cout << width << " " << height << endl;
        }
};

class RectangleArea : public Rectangle
{
    public:
        void display()
        {
            cout << width * height << endl;
        }
};

int main()
{
    RectangleArea r_area;

    r_area.read_input();

    r_area.Rectangle::display();

    r_area.display();

    return 0;
}
