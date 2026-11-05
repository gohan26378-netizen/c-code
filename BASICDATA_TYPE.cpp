/*You are given five values of different data types: int, long, char, float, and double.

Your task is to write a C++ program that reads these five values from the user and prints each value on a separate line in the same order as they were entered.

Input Format:

A single line containing five space-separated values in the following order:
1. Integer (int)
2. Long integer (long)
3. Character (char)
4. Floating-point number (float)
5. Double-precision number (double)
Output Format:

Print each value on a new line in the same order.
- Print the float value up to 3 decimal places.
- Print the double value up to 9 decimal places.*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    long p;
    char s;
    float f;
    double g;

    cin >> n >> p >> s >> f >> g;

    cout << n << endl;
    cout << p << endl;
    cout << s << endl;
    cout << fixed << setprecision(3) << f << endl;
    cout << fixed << setprecision(9) << g << endl;

    return 0;
}
