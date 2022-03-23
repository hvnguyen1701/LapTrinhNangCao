#include <iostream>

using namespace std;

const int NUMBER_STUDENTS = 15;

struct Student {
    int rollNo, age;
    long double mark;
    string name, address;
} students[NUMBER_STUDENTS];

void readInfo();
void printInfo();

int main() {
    readInfo();
    printInfo();
    return 0;
}

void readInfo() {
    for (int i = 0; i < NUMBER_STUDENTS; i++) {
        cout << "Information of student " << i + 1 << ":\n";
        cout << "Roll no. ";
        cin >> students[i].rollNo;
        cout << "Name: ";
        cin.ignore();
        getline(cin, students[i].name);
        cout << "Age: ";
        cin >> students[i].age;
        cout << "Address: ";
        cin.ignore();
        getline(cin, students[i].address);
        cout << "Mark: ";
        cin >> students[i].mark;
        cout << "\n";
    }
}

void printInfo() {
    cout << "\n\n";
    for (int i = 0; i < NUMBER_STUDENTS; i++) {
        cout << "Information of student " << i + 1 << ":\n";
        cout << "Roll no. " << students[i].rollNo << "\n";
        cout << "Name: " << students[i].name << "\n";
        cout << "Age: " << students[i].age << "\n";
        cout << "Address: " << students[i].address << "\n";
        cout << "Mark: " << students[i].mark << "\n\n";
    }
}