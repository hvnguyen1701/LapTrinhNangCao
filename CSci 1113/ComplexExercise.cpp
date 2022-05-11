#include <iostream>

using namespace std;

class Complex {
    double real, imaginary;

public:
    Complex() {};
    Complex(double real, double imaginary) {
        this->real = real;
        this->imaginary = imaginary;
    }
    friend istream &operator >> (istream &, Complex &);
    friend ostream &operator << (ostream &, const Complex &);
    friend Complex operator + (const Complex &, const Complex &);
    friend Complex operator - (const Complex &);
    friend bool operator == (const Complex &, const Complex &);
    friend Complex operator += (const Complex &, const Complex &);

    double getRealPart() { return real; }
    double getImaginaryPart() { return imaginary; }

    Complex operator += (const Complex &p) {
        real += p.real;
        imaginary += p.imaginary;
    }
};

istream &operator >> (istream &in, Complex &z) {
    cout << "Real part: ";
    in >> z.real;
    cout << "Imaginary part: ";
    in >> z.imaginary;
}

ostream &operator << (ostream &out, const Complex &z) {
    out << z.real;
    if (z.imaginary != 0) {
        if (z.imaginary < 0) out << " - " << -z.imaginary << "i";
        else out << " + " << z.imaginary << "i";
    }
}

Complex operator + (const Complex &a, const Complex &b) {
    return Complex(a.real + b.real, a.imaginary + b.imaginary);
}

Complex operator - (const Complex &z) {
    return Complex(-z.real, -z.imaginary);
}

Complex operator + (Complex &a, Complex &b) {
    return {a.getRealPart() + b.getRealPart(), a.getImaginaryPart() + b.getImaginaryPart()};
}

bool operator == (const Complex &a, const Complex &b) {
    return (a.real == b.real && a.imaginary == b.imaginary);
}

int main() {
    Complex c1, c2, c3;
    cout << "Enter two complex values:\n";
    cin >> c1 >> c2;
    c3 = c1 + c2;
    cout << "The sum is: " << c3;
    cout << "\nand negating the sum yields: " << -c3 << "\n";

    c1 += c2;
    cout << c1;

    return 0;
}