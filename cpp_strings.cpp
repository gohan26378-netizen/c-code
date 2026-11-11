//Write a C++ program to accept two strings and perform the following operations:
1. Calculate and display the length of both strings.
2. Concatenate the two strings and display the resulting string.
3. Swap the first characters of both strings and display the modified strings.//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b;

    cin >> a;
    cin >> b;

    cout << a.length() << " " << b.length() << endl;

    cout << a + b << endl;

    swap(a[0], b[0]);

    cout << a << " " << b << endl;

    return 0;
}
