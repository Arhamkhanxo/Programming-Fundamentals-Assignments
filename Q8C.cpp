#include <iostream>
#include <vector>
using namespace std;

int main() {
    int numb;
    cin >> numb;
    vector<int> numbers;
    for (int i = 0; i < numb; i++) cin >> numbers[i];

    int maxVal = numbers[0];
    int minVal = numbers[0];

    for (int i = 1; i < numb; i++) {
        if (numbers[i] > maxVal)
            maxVal = numbers[i];
        if (numbers[i] < minVal)
            minVal = numbers[i];
    }
    cout << "Maximum value: " << maxVal << endl;
    cout << "Minimum value: " << minVal << endl;

    return 0;
}
