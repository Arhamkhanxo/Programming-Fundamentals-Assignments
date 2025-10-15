#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter first number (a): ";
    cin >> a;
    cout << "Enter second number (b): ";
    cin >> b;
    // Took a bit help of AI for this 
    cout << "\nBefore swapping: a = " << a << ", b = " << b << "\n";
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After swapping:  a = " << a << ", b = " << b << endl;

    return 0;
}
