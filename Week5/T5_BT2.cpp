#include <iostream>

using namespace std;

const int NUMBER_STUDENTS = 5;

struct Student {
    int rollNo, age;
    string name;
} students[NUMBER_STUDENTS];

void readInfo();
void printInfoStudent2();

int main() {
    readInfo();
    printInfoStudent2();
    return 0;
}

void readInfo() {
    for (int i = 0; i < NUMBER_STUDENTS; i++) {
        students[i].rollNo = i + 1;
        cout << "Information of the student with roll no. " << students[i].rollNo << ":\n";
        cout << "Name: ";
        if (i > 0) cin.ignore();
        getline(cin, students[i].name);
        cout << "Age: ";
        cin >> students[i].age;
    }
}

void printInfoStudent2() {
    cout << "\n\nInformation of the student with roll no. 2:\n";
    for (int i = 0; i < NUMBER_STUDENTS; i++)
        if (students[i].rollNo == 2) {
            cout << "Name: " << students[i].name << "\n";
            cout << "Age: " << students[i].age;
            break;
        }
}