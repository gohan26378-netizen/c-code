//Program to Implement and Display the Elements of a Two-Dimensional Array Using Nested For Loops in C++.//
#include <iostream>
using namespace std;
int main()
{
    
    int num[2][3]=
        {{1,2,3},{4,5,6}};

 

    for(int i=0;i<2;i++)
        {
        cout<<"block"<<i<<endl;
        for(int j=0;j<3;j++)
            {
             
                cout<<num[i][j]<<" ";
            }
            cout<<endl;
        };

cout<<num[0]<<endl;
cout<<num [0][0]<<endl;
cout<<num [0][1]<<endl;
    cout<< num[0][2]<<endl;
    cout<< num[0][0]<<endl;
    cout<< num[0][0]<<endl;
return 0;
}

