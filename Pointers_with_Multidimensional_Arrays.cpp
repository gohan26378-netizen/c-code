//Write a C++ program to demonstrate the use of pointers with one-dimensional, two-dimensional, and three-dimensional arrays. Initialize character and double arrays with values, access and display their elements using pointer arithmetic, and use a pointer to a three-dimensional array to traverse and display all its elements. Also, display the size of the pointer using the sizeof() operator.//
#include <iostream>
using namespace std;

int main() 
{ 
    char ch[5] = {'a','b','c','d','e'};
    char ch1[2][2]={{'a','b'},{'c','d'}};
    double dh[5]={2.4,3.5,6.7,8.9,9.8};
    char* cha=ch;
    char* cha1=&ch1[0][0];
    double* dha=dh;
    for(int i=0;i<5;i++)
        cout<<*(dha+i)<<endl;
        for(int i=0;i<5;i++)
        cout<<*(cha+i)<<endl;
        cout<<"_____________________________"<<endl;
    for(int i=0;i<4;i++)
        cout<<*(cha1+i)<<endl;

        cout<<"_____________________________"<<endl;

    
    
    char ch2[3][3][2]={ {{'a','b'},{'c','d'},{'x','y'}},
                        {{'e','f'},{'g','h'},{'1','2'}},
                        {{'i','j'},{'k','l'},{'6','7'}}};
    char (*ptr)[3][2]=ch2;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<2;k++){
                cout<<*(*(*(ptr+i)+j)+k)<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }

    cout<<sizeof(ptr)<<endl;
return 0;
}