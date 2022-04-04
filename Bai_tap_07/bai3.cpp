#include <iostream>
#include <vector>

using namespace std;

void readInput(vector<int> &v);
void removeAElement(vector<int> &v);
void removeElements(vector<int> &v);
void printOutput(const vector<int> &v);

int main() {
    vector<int> v;
    readInput(v);
    removeAElement(v);
    removeElements(v);
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

void removeAElement(vector<int> &v) {
    int x;
    cin >> x;
    v.erase(v.begin() + x - 1);
}

void removeElements(vector<int> &v) {
    int a, b;
    cin >> a >> b;
    v.erase(v.begin() + a - 1, v.begin() + b - 1);
}

void printOutput(const vector<int> &v) {
    cout << v.size() << "\n";
    for (int value: v) cout << value << " ";
}
