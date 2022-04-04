#include <iostream>
#include <set>

using namespace std;

int main() {
    int q;
    cin >> q;
    set<int> s;
    while (q--) {
        int y, x;
        cin >> y >> x;
        if (y == 1) s.insert(x);
        else if (y == 2) s.erase(x);
        else {
            if (s.find(x) == s.end()) cout << "No\n";
            else cout << "Yes\n";
        }
    }

    return 0;
}
