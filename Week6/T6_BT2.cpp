#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    cout << "Array length: ";
    cin >> n;
    cout << "Array input: ";
    map<int,int> m;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        m[temp]++;
    }

    cout << "Non-repeated numbers are: ";
    map<int,int>::iterator it = m.begin();
    for (; it != m.end(); it++)
        if (it->second == 1) {
            cout << it->first;
            break;
        }
    for (it++; it != m.end(); it++)
        if (it->second == 1) cout << ", " << it->first;

    return 0;
}