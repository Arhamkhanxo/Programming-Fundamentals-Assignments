#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> mat;
    vector<int>v;
    for (int i = 0; i < 2; i++) {
        cout << "Enter the elements of matrix:" << endl;
        for (int j = 0; j < 5; j++) {
            int num;
            cin >>num;
            v.push_back(num);
        }
        mat.push_back(v);
        v={};
    }
    cout << "The matrix is:" << endl;
    for (int i = 0; i < mat.size(); i++) {
        for (int j : mat[i]) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
