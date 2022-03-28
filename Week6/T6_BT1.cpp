#include <iostream>

using namespace std;

const int MAX_N = 1e4;

int main() {
    int n, d, a[MAX_N];
    cout << "n = ";
    cin >> n;
    cout << "d = ";
    cin >> d;
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n; i++) cout << a[(i + d)%n] << " ";

    return 0;
}