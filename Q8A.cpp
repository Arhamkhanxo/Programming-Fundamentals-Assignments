#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Declare and initialize vector
    vector<int> numbers = {103, 202, 303, 420, 650};

    cout << "Traditional for loop: ";
    for ( int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    cout << "Range-based for loop: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
