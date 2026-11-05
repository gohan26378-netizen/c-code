/*Problem: Number to Words Using Switch Statement

Write a C++ program that takes an integer as input and prints its English word representation if the number is between 1 and 9.

If the entered number is greater than 9, print "Greater than 9".

Input Format:
A single integer n.

Output Format:
- Print the corresponding English word if n is between 1 and 9.
- Otherwise, print Greater than 9.*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    switch(n)
    {
        case 1: cout << "one"; break;
        case 2: cout << "two"; break;
        case 3: cout << "three"; break;
        case 4: cout << "four"; break;
        case 5: cout << "five"; break;
        case 6: cout << "six"; break;
        case 7: cout << "seven"; break;
        case 8: cout << "eight"; break;
        case 9: cout << "nine"; break;

        default: cout << "Greater than 9";
    }

    return 0;
}