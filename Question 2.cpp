#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int TOTAL_SUBJECTS = 5;
    int marks[TOTAL_SUBJECTS];
    int total = 0;
    float percentage;
    char grade;

    // used AI Tool for syntax for total subjects 
    cout << "Enter marks for 5 subjects (out of 100 each):\n";
    for (int i = 0; i < TOTAL_SUBJECTS; i++) {
        cout << "Subject " << (i + 1) << ": ";
        cin >> marks[i];
        total += marks[i];
    }
    percentage = (float)total / (TOTAL_SUBJECTS);
    if (percentage >= 90)
        grade = 'A', cout << "(Grade: A+)\n";
    else if (percentage >= 80)
        grade = 'A';
    else if (percentage >= 70)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else if (percentage >= 50)
        grade = 'D';
    else
        grade = 'F';
        // USed AI for help because i didnt know what to do here with setw and for syntax
    cout << left << setw(15) << "Subject" << setw(10) << "Marks\n";
    for (int i = 0; i < TOTAL_SUBJECTS; i++) {
        cout << left << setw(15) << ("Subject " + to_string(i + 1))
             << setw(10) << marks[i] << "\n";
    }
    cout << left << setw(15) << "Total" << setw(10) << total << "\n";
    cout << left << setw(15) << "Percentage" << setw(10) << percentage << "%" << "\n";
    cout << left << setw(15) << "Grade" << setw(10) << grade << "\n";
    string result = (percentage >= 50) ? "PASS" : "FAIL";
    cout << left << setw(15) << "Result" << setw(10) << result << "\n";

    return 0;
}
