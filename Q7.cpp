#include <iostream>
using namespace std;

int main() {
    int row, col;
    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of columns: ";
    cin >> col;

    int mat[row][col];
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            cin >> mat[i][j];

    cout << "Snake pattern: ";
    for (int i = 0; i < row; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < col; j++)
                cout << mat[i][j] << " ";
        } else { // right to left
            for (int j = col - 1; j >= 0; j--)
                cout << mat[i][j] << " ";
        }
    }
    cout << endl;

    return 0;
}
