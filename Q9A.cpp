#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {11, 22, 334, 24, 51, 16};

    cout << "Original vector: ";
    for (int val : vec) cout << val << " ";
    cout << endl;

    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] % 2 == 0) {
            vec.erase(vec.begin() + i);
            i--;
        }
    }
    cout << "After removing even numbers: ";
    for (int val : vec) cout << val << " ";
    cout << endl;

    return 0;
}
