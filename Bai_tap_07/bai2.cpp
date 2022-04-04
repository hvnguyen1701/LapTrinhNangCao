#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void readInput(vector<int> &v);
void printOutput(const vector<int> &v);

int main() {
    vector<int> v;
    readInput(v);
    sort(v.begin(), v.end());
    printOutput(v);
    
    return 0;
}

void readInput(vector<int> &v) {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
}

void printOutput(const vector<int> &v) {
    for (int value: v) cout << value << " ";
}