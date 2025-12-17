#include <iostream>
using namespace std;

int main() {
    int row, col;
    cin >> row >> col;
    int mat[row][col];
    int arr[row * col];
    int k = 0;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> mat[i][j];
            arr[k++] = mat[i][j];
        }
    }

    for (int i = 0; i < row * col - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < row * col; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
    k = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            mat[i][j] = arr[k++];
        }
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
