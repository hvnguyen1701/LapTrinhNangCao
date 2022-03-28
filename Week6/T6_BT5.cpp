#include <iostream>

using namespace std;

class Area {
    int length, breath;
    
    public:
        Area(int _length, int _breath) {
            length = _length;
            breath = _breath;
        }
        int returnArea() {
            return length*breath;
        }
};

int main() {
    int l, b;
    cout << "Rectangle's length: ";
    cin >> l;
    cout << "Rectangle's breath: ";
    cin >> b;

    Area rectangle(l, b);
    cout << "The area of the rectangle: " << rectangle.returnArea();

    return 0;
}