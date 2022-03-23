#include <iostream>

using namespace std;

const int MAX_STUDENTS = 1e5;

struct Student {
    int rollNo, age;
    string name, address;
} students[MAX_STUDENTS];

void readInfo();
void printNamesOfAge14();
void printNamesOfEvenRollNo();
void displayStudentRollNoIsGiven();

int numberStudents;

int main() {
    readInfo();
    printNamesOfAge14();
    printNamesOfEvenRollNo();
    displayStudentRollNoIsGiven();
    return 0;
}

void readInfo() {
    cout << "Number of students: ";
    cin >> numberStudents;
    for (int i = 0; i < numberStudents; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
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
    }
}

void printNamesOfAge14() {
    cout << "\nThe names of all the students having age 14:\n";
    for (int i = 0; i < numberStudents; i++)
        if (students[i].age == 14) cout << students[i].name << "\n";
}

void printNamesOfEvenRollNo() {
    cout << "\nThe names of all the students having even roll no:\n";
    for (int i = 0; i < numberStudents; i++)
        if (students[i].rollNo%2 == 0) cout << students[i].name << "\n";
}

void displayStudentRollNoIsGiven() {
    int rollNoIsGiven;
    cout << "\nEnter roll no. of the student you want to see information: ";
    cin >> rollNoIsGiven;

    cout << "\nThe details of the student whose roll no is given:\n";
    for (int i = 0; i < numberStudents; i++)
        if (students[i].rollNo == rollNoIsGiven) {
            cout << "Name: " << students[i].name << "\n";
            cout << "Age: " << students[i].age << "\n";
            cout << "Address: " << students[i].address << "\n";
            break;
        }
}