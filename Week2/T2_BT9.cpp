#include <iostream>
#include <iomanip>
using namespace std;

const int MAX_N = 1000;

int main() {
    int n;
    cin >> n;
    double arrayX[MAX_N];
    for (int i = 0; i < n; i++) cin >> arrayX[i];

    for (int i = n - 1; i >= 0; i--) cout << fixed << setprecision(2) << arrayX[i] << " ";

    return 0;
}