//Program to Implement and Display the Elements of a Three-Dimensional Array Using Nested For Loops in C++.//
#include <iostream>
using namespace std;
int main()
{
    
    int num[4][3][3]={
        {{1,2,3},{4,5,6},{7,8,9}},
{{10,11,12},{13,14,15},{16,17,18}},
{{19,20,21},{22,23,24},{25,26,27}},
{{28,29,30},{31,32,33},{34,35,36}}
};
    for(int i=0;i<4;i++)
        {
        cout<<"block"<<i<<endl;
        for(int j=0;j<3;j++)
            {
             for (int k=0;k<3;k++)
                    {
                        cout<<num [i] [j] [k]<<"  ";
                    }
                cout<<endl;
            }
            cout<<endl;
        }

cout<<num[0]<<endl;
cout<<num [0][0]<<endl;
cout<<num [0][0][0]<<endl;
    cout<< num[0][0][1]<<endl;
    cout<< num[0][0][2]<<endl;
    cout<< num[0][0][1]<<endl;
return 0;
}
