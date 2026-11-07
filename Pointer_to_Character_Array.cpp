//Write a C++ program to demonstrate the use of a character array and character pointer. Initialize a character array with five characters, assign its base address to a character pointer, and display the string using the pointer.//
#include<iostream>
using namespace std;
int main()
{
    char ch[6]={'a','b','c','d','e','\0'};
    char *cha=ch;
    cout<<cha<<endl;
    return 0;
}