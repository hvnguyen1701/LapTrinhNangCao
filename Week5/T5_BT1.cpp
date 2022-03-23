#include <iostream>

using namespace std;

const int MAX_SUBJECTS = 30;

struct Student {
    string name;
    int rollNo, age, numberSubjects;
    long double marks[MAX_SUBJECTS];
} student;

void readInfo();
void printInfo();

int main() {
    readInfo();
    printInfo();
    return 0;
}

void readInfo() {
    cout << "Roll no. ";
    cin >> student.rollNo;
    cout << "Name: ";
    cin.ignore();
    getline(cin, student.name);
    cout << "Age: ";
    cin >> student.age;
    cout << "Number of subjects: ";
    cin >> student.numberSubjects;
    for (int i = 0; i < student.numberSubjects; i++) {
        cout << "Mark of subject " << i + 1 << ": ";
        cin >> student.marks[i];
    }
}

void printInfo() {
    cout << "\n\n\nInformation of a student:\n";
    cout << "Roll no. " << student.rollNo << "\n";
    cout << "Name: " << student.name << "\n";
    cout << "Age: " << student.age << "\n";
    for (int i = 0; i < student.numberSubjects; i++)
        cout << "Mark of subject " << i + 1 << ": " << student.marks[i] << "\n";
}