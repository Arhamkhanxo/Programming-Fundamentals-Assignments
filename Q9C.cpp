#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1, 2, 11, 2, 7};
    int duplicateFound = 0;

    for (int i = 0; i < vec.size(); i++) {
        for (int j = i + 1; j < vec.size(); j++) {
            if (vec[i] == vec[j]) {
                duplicateFound = 1;
                break;
            }
        }
        if (duplicateFound == 1) break;
    }
    if (duplicateFound == 1)
        cout << "Vector has duplicate" << endl;
    else
        cout << "Vector has no duplicate" << endl;

    return 0;
}
