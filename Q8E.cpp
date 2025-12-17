#include <iostream>
#include <vector>
using namespace std;

int main() {
    int numb, target;
    cin >> numb;
    vector<int> numbers;
    for (int i = 0; i < numb; i++) cin >> numbers[i];

    cout << "Enter target number: ";
    cin >> target;

    int count = 0;
    for (int num : numbers) {
        if (num == target) count++;
    }

    cout << "The number " << target << " appears " << count << " times." << endl;

    return 0;
}
