#include <iostream>
#include <algorithm>

using namespace std;

const int MAX_N = 100;

void readInput();
void printOutput();

int n, a[MAX_N], b[MAX_N + 1];

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    readInput();
    sort(a, a + n);
    sort(b, b + n + 1);
    printOutput();
    
    return 0;
}

void readInput() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i <= n; i++) cin >> b[i];
}
void printOutput() {
    for (int i = 0; i < n; i++)
        if (a[i] != b[i]) {
            cout << b[i];
            return;
        }
    cout << b[n];
}