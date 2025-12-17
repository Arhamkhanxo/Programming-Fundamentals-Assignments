#include <iostream>
using namespace std;

// Input temperatures
void inputTemp(int temp[7][4]) {
    for (int d = 0; d < 7; d++) {
        cout << "Day " << d + 1 << endl;
        for (int t = 0; t < 4; t++) {
            cin >> temp[d][t];
        }
    }
}
// Find highest and lowest temperature
void maxMinTemp(int temp[7][4], int &max, int &min) {
    max = temp[0][0];
    min = temp[0][0];
    for (int d = 0; d < 7; d++) {
        for (int t = 0; t < 4; t++) {
            if (temp[d][t] > max)
                max = temp[d][t];

            if (temp[d][t] < min)
                min = temp[d][t];
        }
    }
}
// Calculate average of each day
void dayAverage(int temp[7][4], float avg[7]) {
    for (int d = 0; d < 7; d++) {
        int sum = 0;
        for (int t = 0; t < 4; t++) {
            sum += temp[d][t];
        }
        avg[d] = sum / 4.0;
    }
}

// Display results
void showResult(int temp[7][4], float avg[7], int max, int min) {
    cout << "\nDay  T1  T2  T3  T4  Avg\n";

    for (int d = 0; d < 7; d++) {
        cout << d + 1 << "   ";
        for (int t = 0; t < 4; t++) {
            cout << temp[d][t] << "   ";
        }
        cout << avg[d] << endl;
    }

    cout << "\nMax Temp: " << max << endl;
    cout << "Min Temp: " << min << endl;
}

int main() {
    int temp[7][4];
    float avg[7];
    int max, min;

    inputTemp(temp);
    maxMinTemp(temp, max, min);
    dayAverage(temp, avg);
    showResult(temp, avg, max, min);

    return 0;
}
