#include <iostream>
using namespace std;

void displaySeats(int seats[10][10]) {
    cout << "\nSeat Arrangement (0=empty, 1=reserved):\n";
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++)
            cout << seats[i][j] << " ";
        cout << endl;
    }
}

void reserveSeat(int seats[10][10]) {
    int row, col;
    cout << "Enter row and seat to reserve (1-10): ";
    cin >> row >> col;
    if (seats[row - 1][col - 1] == 0) {
        seats[row - 1][col - 1] = 1;
        cout << "Seat reserved!\n";
    } else {
        cout << "Seat already reserved!\n";
    }
}

void cancelSeat(int seats[10][10]) {
    int row, col;
    cout << "Enter row and seat to cancel (1-10): ";
    cin >> row >> col;
    if (seats[row - 1][col - 1] == 1) {
        seats[row - 1][col - 1] = 0;
        cout << "Seat cancelled!\n";
    } else {
        cout << "Seat already empty!\n";
    }
}

void countRows(int seats[10][10]) {
    int full = 0, empty = 0, partial = 0;

    for (int i = 0; i < 10; i++) {
        int count = 0;
        for (int j = 0; j < 10; j++)
            if (seats[i][j] == 1) count++;

        if (count == 10)
            full++;
        else if (count == 0)
            empty++;
        else
            partial++;
    }

    cout << "\nRow Status:\n";
    cout << "Fully Occupied Rows: " << full << endl;
    cout << "Partially Occupied Rows: " << partial << endl;
    cout << "Empty Rows: " << empty << endl;
}

int main() {
    int seats[10][10] = {0};
    int choice;

    do {
        cout << "\n--- Bus Seating Menu ---\n";
        cout << "1. Display seats\n";
        cout << "2. Reserve a seat\n";
        cout << "3. Cancel a seat\n";
        cout << "4. Count row occupancy\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: displaySeats(seats); break;
            case 2: reserveSeat(seats); break;
            case 3: cancelSeat(seats); break;
            case 4: countRows(seats); break;
            case 5: cout << "Exiting program.\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while(choice != 5);

    return 0;
}

