#include <iostream>

using namespace std;

const int MAX_N = 1e5;

int main() {
    int n, q, a[MAX_N];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> q;
    while (q--) {
        int y;
        cin >> y;
        int res = lower_bound(a, a + n, y) - a;
        if (a[res] == y) cout << "Yes " << res + 1 << "\n";
        else cout << "No " << res + 1 << "\n";
    }

    return 0;
}
