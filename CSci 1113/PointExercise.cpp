#include <iostream>

using namespace std;

class Point {
    int xloc, yloc;

public:
    Point() {};
    Point(int xval, int yval) {
        xloc = xval;
        yloc = yval;
    }
    friend Point operator + (const Point &a, const Point &b) {
        return Point(a.xloc + b.xloc, a.yloc + b.yloc);
    }
    friend ostream &operator << (ostream &, const Point &);
};

ostream &operator << (ostream &out, const Point &p) {
    out << p.xloc << "," << p.yloc;
    return out;
}

int main() {
    Point a(7, 2), b(6, 4);
    cout << a + b;
    return 0;
}