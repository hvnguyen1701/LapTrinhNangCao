#include <iostream>
#include <map>

using namespace std;


int main() {
    int q;
    cin >> q;
    map<string, int> m;
    while (q--) {
        int type, y;
        string x;
        cin >> type >> x;
        if (type == 1) {
            cin >> y;
            m[x] += y;
        }
        else if (type == 2) m.erase(x);
        else cout << m[x] << "\n";
    }
       
    return 0;
}
