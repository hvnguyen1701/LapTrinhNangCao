#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < 2*n; i++) {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }

    for (int i = 0; i < n; i++)
        if (a[i] != a[i + n]) {
            cout << "NO";
            return 0;
        }
    cout << "YES";
    return 0;
}