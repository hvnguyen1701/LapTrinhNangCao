#include <iostream>
#include <vector>

using namespace std;

const int MAX_N = 1e5;

void readInput();
void printOutput();

int q;
vector<int> a[MAX_N];

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    readInput();
    printOutput();
    
    return 0;
}

void readInput() {
    int n;
    cin >> n >> q;
    
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++) {
            int temp;
            cin >> temp;
            a[i].push_back(temp);
        }
    }    
}

void printOutput() {
    while (q--) {
        int i, j;
        cin >> i >> j;
        cout << a[i][j] << "\n";
    }
}
