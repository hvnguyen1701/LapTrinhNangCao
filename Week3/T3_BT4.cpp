#include <iostream>
#include <iomanip>
using namespace std;

const int MAX_N = 1e3 + 1;

int main() {
    int n;
    cin >> n;
    long double array[MAX_N], x;
    for (int i = 0; i < n; i++) cin >> array[i];
    cin >> x;

    for (int i = 0; i < n; i++)
        if (array[i] > x) {
            for (int j = n - 1; j >= i; j--) array[j + 1] = array[j];
            array[i] = x;
            break;
        }
    
    for (int i = 0; i <= n; i++) cout << fixed << setprecision(2) << array[i] << " ";

    return 0;
}