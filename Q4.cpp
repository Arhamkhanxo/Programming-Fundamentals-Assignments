#include <iostream>
#include <string>
using namespace std;

void inputPuzzle(char grid[][10], int row, int col) {
    cout << "Enter crossword puzzle (" << row << "x" << col << "), use '-' for empty:\n";
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            cin >> grid[i][j];
}

int countHorizontal(char grid[][10], int row, int col, string &longest) {
    int count = 0;
    for (int i = 0; i < row; i++) {
        string word = "";
        for (int j = 0; j < col; j++) {
            if (grid[i][j] != '-') word += grid[i][j];
            else {
                if (word.length() >= 3) {
                    count++;
                    if (word.length() > longest.length()) longest = word;
                }
                word = "";
            }
        }
        if (word.length() >= 3) {
            count++;
            if (word.length() > longest.length()) longest = word;
        }
    }
    return count;
}

int countVertical(char grid[][10], int row, int col, string &longest) {
    int count = 0;
    for (int j = 0; j < col; j++) {
        string word = "";
        for (int i = 0; i < row; i++) {
            if (grid[i][j] != '-') word += grid[i][j];
            else {
                if (word.length() >= 3) {
                    count++;
                    if (word.length() > longest.length()) longest = word;
                }
                word = "";
            }
        }
        if (word.length() >= 3) {
            count++;
            if (word.length() > longest.length()) longest = word;
        }
    }
    return count;
}

int main() {
    int row = 10, col = 10;
    char grid[10][10];
    string longestWord = "";

    inputPuzzle(grid, row, col);

    int hCount = countHorizontal(grid, row, col, longestWord);
    int vCount = countVertical(grid, row, col, longestWord);

    cout << "Horizontal words: " << hCount << endl;
    cout << "Vertical words: " << vCount << endl;
    cout << "Longest word: " << longestWord << endl;

    return 0;
}
