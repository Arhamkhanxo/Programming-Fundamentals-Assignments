#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec1 = {1, 2, 221, 4, 55};
    vector<int> vec2 = {1, 2, 221, 55};

    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < vec1.size(); i++) {
        sum1 += vec1[i];
    }
    for (int i = 0; i < vec2.size(); i++) {
        sum2 += vec2[i];
    }

    int missing = sum1 - sum2;
    cout << "Missing element: " << missing << endl;

    return 0;
}
