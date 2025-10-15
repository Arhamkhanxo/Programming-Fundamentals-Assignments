#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three integers:\n";
    cout << "First number: ";
    cin >> a;
    cout << "Second number: ";
    cin >> b;
    cout << "Third number: ";
    cin >> c;

    if (a == b && b == c) {
        cout << "\nAll numbers are equal: " << a << "\n";
    } else {
        // The largest number
        int largest;
        if (a >= b && a >= c)
            largest = a;
        else if (b >= a && b >= c)
            largest = b;
        else
            largest = c;

        // The smallest number
        int smallest;
        if (a <= b && a <= c)
            smallest = a;
        else if (b <= a && b <= c)
            smallest = b;
        else
            smallest = c;
            //Took AI's Help for Presenting the syntax of largest number smallest number and not all equal
        cout << "\nLargest number: " << largest << "\n";
        cout << "Smallest number: " << smallest << "\n";
        cout << "Numbers are not all equal." << "\n";
    }

    return 0;
}

