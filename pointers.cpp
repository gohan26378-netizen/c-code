//Write a C++ program using pointers to calculate the sum and absolute difference of two integers. Create a function named update() that accepts pointers to two integer variables. The function should update the first variable with their sum and the second variable with their absolute difference. Display both updated values.//

#include <iostream>
#include <cmath>
using namespace std;

void update(int *a, int *b)
{
    int sum = *a + *b;
    int difference = abs(*a - *b);

    *a = sum;
    *b = difference;
}

int main()
{
    int a, b;

    cin >> a >> b;

    update(&a, &b);

    cout << a << endl;
    cout << b << endl;

    return 0;
}
