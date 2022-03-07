void printArrow(int n, bool left) {
    for (int i = -n; i <= n; i++) {
        if (i == 0 || i == 1) continue;
        int temp = left ? (abs(i) - 1) : (2*(n - abs(i)));
        cout << string(temp, ' ') + string(abs(i), '*') << "\n";
    }
}