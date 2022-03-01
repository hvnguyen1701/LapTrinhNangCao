#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> array;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        array.push_back(temp);
    }

    for (int i = 0; i < n/2; i++)
        if (array[i] != array[n - 1 - i]) {
            cout << "Asymmetric array.";
            return 0;
        }
    cout << "Symmetric array.";
    return 0;
}