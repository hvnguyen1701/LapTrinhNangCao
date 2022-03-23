#include <iostream>

using namespace std;

const int NUMBER_STUDENTS = 5;

struct Marks {
    int rollNo;
    string name;
    long double chemMarks, mathsMarks, phyMarks;
} students[NUMBER_STUDENTS];

void enterMarks();
void displayPercentage();

int main() {
    enterMarks();
    displayPercentage();
    return 0;
}

void enterMarks() {
    for (int i = 0; i < NUMBER_STUDENTS; i++) {
        cout << "Student " << i + 1 << ":\n";
        cout << "Roll no. ";
        cin >> students[i].rollNo;
        cout << "Name: ";
        cin.ignore();
        getline(cin, students[i].name);
        cout << "Mark of Chemistry: ";
        cin >> students[i].chemMarks;
        cout << "Mark of Mathematics: ";
        cin >> students[i].mathsMarks;
        cout << "Mark of Physics: ";
        cin >> students[i].phyMarks;
        cout << "\n";
    }
}

void displayPercentage() {
    for (int i = 0; i < NUMBER_STUDENTS; i++) {
        cout << "The percentage of student " << i + 1 << ": ";
        cout << (students[i].chemMarks + students[i].mathsMarks + students[i].phyMarks)/300*100 << "\n";
    }
}