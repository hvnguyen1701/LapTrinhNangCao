#include <iostream>
#include <iomanip>
using namespace std;

typedef long double ld;

int main() {
    int x;
    cin >> x;
    
    int i = 1;
    ld sum = 1, oldSum = 0, temp = x;
    while (sum - oldSum > 0.001) {
        oldSum = sum;
        sum += temp;
        temp *= (ld)x/++i;
    }
    cout << fixed << setprecision(4) << sum;

    return 0;
}