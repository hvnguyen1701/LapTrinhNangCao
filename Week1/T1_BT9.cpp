#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

typedef long double ld;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    if (a + b > c && a + c > b && b + c > a) {
        ld semiperimeter = (a + b + c)/2.0;
        ld area = sqrt(semiperimeter*(semiperimeter - a)*(semiperimeter - b)*(semiperimeter - c));
        cout << fixed << setprecision(2) << area;
    }
    else cout << "invalid";
    
    return 0;
}