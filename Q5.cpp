#include <iostream>
using namespace std;

int main() {
    int row, col;
    cout << "Enter number of rows: ";
    cin >> row;
    cout << "Enter number of columns: ";
    cin >> col;

    int matrix[row][col];
    cout << "Enter elements of the matrix:\n";
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cin >> matrix[i][j];
        }
    }
    int rotated[col][row];
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            rotated[j][row-1-i] = matrix[i][j];
        }
    }
    cout << "Rotated matrix:\n";
    for(int i = 0; i < col; i++) {
        for(int j = 0; j < row; j++) {
            cout << rotated[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
