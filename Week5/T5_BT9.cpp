#include <iostream>

using namespace std;

const int NUMBER_EMPLOYEES = 10;

struct Employee {
    string name;
    int salary, hoursPerDay;
} employees[NUMBER_EMPLOYEES];

void readInfo();
void increaseSalary();
void printNamesAndSalaries();

int main() {
    readInfo();
    increaseSalary();
    printNamesAndSalaries();
    return 0;
}

void readInfo() {
    for (int i = 0; i < NUMBER_EMPLOYEES; i++) {
        cout << "\nEmployee " << i + 1 << ":\n";
        cout << "Name: ";
        if (i > 0) cin.ignore();
        getline(cin, employees[i].name);
        cout << "Salary: ";
        cin >> employees[i].salary;
        cout << "Hours of work per day: ";
        cin >> employees[i].hoursPerDay;
    }
}

void increaseSalary() {
    for (int i = 0; i < NUMBER_EMPLOYEES; i++)
        if (employees[i].hoursPerDay >= 12) employees[i].salary += 150;
        else if (employees[i].hoursPerDay >= 10) employees[i].salary += 100;
        else if (employees[i].hoursPerDay >= 8) employees[i].salary += 50;
}

void printNamesAndSalaries() {
    cout << "\nThe name of all the employees along with final salaries:\n";
    for (int i = 0; i < NUMBER_EMPLOYEES; i++)
        cout << employees[i].name << "   $" << employees[i].salary << "\n";
}