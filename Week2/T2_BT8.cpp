#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    int count = 0;
    do {
        n /= 10;
        count++;
    } while (n != 0);
    cout << count;

    return 0;
}