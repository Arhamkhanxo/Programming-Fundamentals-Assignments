#include <iostream>
#include <vector>
using namespace std;

void reverseVector(vector<int> &vec) {
    int left = 0;
    int right = vec.size() - 1;

    while (left < right) {
        int temp = vec[left];
        vec[left] = vec[right];
        vec[right] = temp;
        left++;
        right--;
    }
}

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};

    cout << "Original vector: ";
    for (int num : numbers) {
        cout << num << " ";
        cout << endl;

        reverseVector(numbers);
    }
    cout << "Reversed vector: ";
    for (int num : numbers){
    cout << num << " ";
    cout << endl;
}
    return 0;
}
