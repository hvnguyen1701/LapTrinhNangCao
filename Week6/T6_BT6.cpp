#include <iostream>

using namespace std;

class Student {
    string name;
    int rollNo;

    public:
        Student(int _rollNo = 2, string _name = "John") {
            rollNo = _rollNo;
            name = _name;
        }
        void printInfo() {
            cout << "Roll no. " << rollNo << "\n";
            cout << "Name: " << name;
        }
};

int main() {
    Student student;
    student.printInfo();
    return 0;
}