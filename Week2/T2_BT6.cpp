#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int x = -n; x <= n; x++) {
        int temp = -abs(x);
        for (int y = -n; y <= n; y++)
            if (y >= -temp - n && y <= temp + n) cout << "* ";
            else cout << ". ";
        cout << "\n";
    }

    return 0;
}