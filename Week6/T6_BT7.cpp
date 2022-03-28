#include <iostream>
#include <iomanip>

using namespace std;

const int NUMBER_EMPLOYEES = 3;

class Employee {
    string name, address;
    int yearJoining, salary;

    public:
        Employee(string _name="", int _yearJoining=0, int _salary=0, string _address="") {
            name = _name;
            yearJoining = _yearJoining;
            salary = _salary;
            address = _address;
        }
        void printInfo() {
            cout << name << setw(10) << yearJoining << setw(25) << address << "\n";
        }
};

void readInput(Employee employees[]);
void printOuput(Employee employees[]);

int main() {
    Employee employees[NUMBER_EMPLOYEES];
    readInput(employees);
    printOuput(employees);
    return 0;
}

void readInput(Employee employees[]) {
    for (int i = 0; i < NUMBER_EMPLOYEES; i++) {
        string name, address;
        int yearJoining, salary;
        cout << "Employee " << i + 1 << ":\n";
        cout << "Name: ";
        getline(cin, name);
        cout << "Year of joining: ";
        cin >> yearJoining;
        cout << "Salary: ";
        cin >> salary;
        cout << "Address: ";
        cin.ignore();
        getline(cin, address);
        employees[i] = Employee(name, yearJoining, salary, address);
        cout << "\n";
    }
}
void printOuput(Employee employees[]) {
    cout << "Name" << setw(22) << "Year of joining" << setw(16) << "Address\n";
    for (int i = 0; i < NUMBER_EMPLOYEES; i++) employees[i].printInfo();
}