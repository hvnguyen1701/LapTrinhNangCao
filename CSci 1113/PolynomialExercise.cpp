#include <iostream>
#include <cmath>

using namespace std;

class Complex {
    double real, imaginary;

public:
    Complex() {};
    Complex(double real, double imaginary) {
        this->real = real;
        this->imaginary = imaginary;
    }
    friend ostream &operator << (ostream &, const Complex &);
    friend Complex operator + (const Complex &, const Complex &);
    friend Complex operator * (const Complex &, const Complex &);

    void setComplexNumber(double real, double imaginary) {
        this->real = real;
        this->imaginary = imaginary;
    }
};

class Poly {
    double a, b, c;

public:
    Poly() {}
    Poly(double a, double b, double c) {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    friend Poly operator + (const Poly &, const Poly &);
    friend ostream &operator << (ostream &, const Poly &);
    friend istream &operator >> (istream &, Poly &);

    double eval(double x) const {
        return a*x*x + b*x + c;
    }

    Complex eval(const Complex &x) const {
        return Complex(a, 0)*x*x + Complex(b, 0)*x + Complex(c, 0);
    }

    void roots(Complex &x1, Complex &x2) {
        double delta = b*b - 4*a*c;
        if (delta >= 0) {
            x1.setComplexNumber((-b + sqrt(delta))/(2*a), 0);
            x2.setComplexNumber((-b - sqrt(delta))/(2*a), 0);
        }
        else {
            x1.setComplexNumber(-b/(2*a), sqrt(-delta)/(2*a));
            x2.setComplexNumber(-b/(2*a), -sqrt(-delta)/(2*a));
        }
    }
};

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

Complex operator * (const Complex &a, const Complex &b) {
    return Complex(a.real*b.real - a.imaginary*b.imaginary, a.real*b.imaginary + a.imaginary*b.real);
}

Poly operator + (const Poly &p1, const Poly &p2) {
    return Poly(p1.a + p2.a, p1.b + p2.b, p1.c + p2.c);
}

ostream &operator << (ostream &out, const Poly &p) {
    if (p.a != 0) out << p.a << "x^2 ";
    if (p.b < 0) out << "- " << -p.b << "x ";
    else if (p.b > 0 && p.a != 0) out << "+ " << p.b << "x ";
    else if (p.b > 0 && p.a == 0) out << p.b << "x ";
    if (p.c < 0) out << "- " << -p.c;
    else if (p.c > 0 && (p.a != 0 || p.b != 0)) out << "+ " << p.c;
    else if (p.c > 0 && p.a == 0 && p.b == 0) out << p.c;
}

istream &operator >> (istream &in, Poly &p) {
    char c;
    in >> c >> p.a >> c >> p.b >> c >> p.c >> c;
}

int main() {
    Poly q1(3, 4, -2), q2(0, -4, 10), sum = q1 + q2;
    cout << q1 << " : q1\n";
    cout << q2 << " : q2\n";
    cout << sum << " : q1+q2\n\n";

    Poly inpoly;
    cout << "Input a quadratic polynomial: ";
    cin >> inpoly;
    for (int i = 0; i <= 10; i++) 
        cout << "f(" << i << ") is: " << inpoly.eval(i) << "\n";

    Complex c1, c2;
    inpoly.roots(c1, c2);
    cout << "The roots of f(x) are " << c1 << "\t" << c2 << "\n";

    return 0;
}