#include <iostream>
#include <vector>
using namespace std;

int main() {
    int numb;
    cout << "Enter number of elements: ";
    cin >> numb;

    vector<int> numbers;

    cout << "Enter integers:\n";
    for (int i = 0; i < numb; i++) {
        cin >> numbers[i];
    }

    cout << "You entered: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
