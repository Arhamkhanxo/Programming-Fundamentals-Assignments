#include <iostream>
using namespace std;

void inputSales(int s[5][7]) {
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 7; j++)
            cin >> s[i][j];
}

void calculateRevenue(int s[5][7], int total[5]) {
    for (int i = 0; i < 5; i++) {
        total[i] = 0;
        for (int j = 0; j < 7; j++)
            total[i] += s[i][j];
    }
}

void findMaxProduct(int total[5]) {
    int max = total[0], index = 0;
    for (int i = 1; i < 5; i++)
        if (total[i] > max) {
            max = total[i];
            index = i;
        }
    cout << "Highest Selling Product: " << index + 1 << endl;
}

void findBestDay(int s[5][7]) {
    int max = 0, day = 0;
    for (int j = 0; j < 7; j++) {
        int sum = 0;
        for (int i = 0; i < 5; i++)
            sum += s[i][j];
        if (sum > max) {
            max = sum;
            day = j;
        }
    }
    cout << "Best Sales Day: " << day + 1 << endl;
}

int main() {
    int s[5][7], total[5];

    inputSales(s);
    calculateRevenue(s, total);

    for (int i = 0; i < 5; i++)
        cout << "Product " << i + 1 << ": " << total[i] << endl;

    findMaxProduct(total);
    findBestDay(s);

    return 0;
}
