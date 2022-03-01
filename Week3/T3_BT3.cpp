#include <iostream>
using namespace std;

const int MAX_N = 1e3;

int main() {
    int n, number[MAX_N];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> number[i];

    for (int i = 0; i < n; i++)
        if (i == 0 || number[i] != number[i - 1]) cout << number[i] << " ";

    return 0;
}