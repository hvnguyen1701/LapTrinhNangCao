#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 1; i < s.size(); i++)
        if (s[i] == s[i - 1]) s.insert(i, "*");

    cout << s;

    return 0;
}