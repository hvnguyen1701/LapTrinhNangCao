#include <iostream>
#include <iomanip>
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

    cout << "Repeated number" << setw(13) << "Frequency\n";
    map<int,int>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
        if (it->second > 1)
            cout << it->first << setw(18) << it->second << "\n";

    return 0;
}