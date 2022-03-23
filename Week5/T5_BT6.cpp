#include <iostream>

using namespace std;

struct Complex {
    long double real, imag;

    Complex add(const Complex &other) {
        return {real + other.real, imag + other.imag};
    }
    Complex subtract(const Complex &other) {
        return {real - other.real, imag - other.imag};
    }
    Complex multiply(const Complex &other) {
        return {real*other.real - imag*other.imag, real*other.imag + imag*other.real};
    }
    void printComplexNumber() {
        cout << real << " + " << imag << "i\n";
    }
} x, y;

void readInput();
void printOutput();

int main() {
    readInput();
    printOutput();
    return 0;
}

void readInput() {
    cout << "Complex number 1:\n";
    cout << "Real part: ";
    cin >> x.real;
    cout << "Imaginary part: ";
    cin >> x.imag;
    cout << "\nComplex number 2:\n";
    cout << "Real part: ";
    cin >> y.real;
    cout << "Imaginary part: ";
    cin >> y.imag;
}

void printOutput() {
    cout << "\nAdd: ";
    x.add(y).printComplexNumber();
    cout << "Subtract: ";
    x.subtract(y).printComplexNumber();
    cout << "Multiply: ";
    x.multiply(y).printComplexNumber();
}