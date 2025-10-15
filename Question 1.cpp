#include <iostream>
#include <iomanip>  // for setprecision and fixed
using namespace std;
int main()
{
    double num1, num2;
    cout << "Enter first floating point number: ";
    cin >> num1;
    cout << "Enter second floating point number: ";
    cin >> num2;
    cout << fixed << setprecision(3);
    cout << "Sum: " << num1 + num2 << "\n";
    cout << "Difference: " << num1 - num2 << "\n";
    cout << "Product: " << num1 * num2 << "\n";
    //Took Help from AI
    // Handling division by zero
    if (num2 != 0.0)
        cout << "Quotient: " << num1 / num2 << "\n";
    else
        cout << "Quotient: Undefined (division by zero)" << "\n";
    // Casting both numbers to integers
    int int1 = static_cast<int>(num1);
    int int2 = static_cast<int>(num2);
    cout << "Integer 1: " << int1 << ", Integer 2: " << int2 << "\n";
    cout << "Sum: " << int1 + int2 << "\n";
    cout << "Difference: " << int1 - int2 << "\n";
    cout << "Product: " << int1 * int2 << "\n";
    // Again Using AI For Help
    // Handling division by zero
    if (int2 != 0)
        cout << "Quotient: " << int1 / int2 << "\n";
    else
        cout << "Quotient: Undefined (division by zero)" << "\n";

    return 0;
}

