#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

typedef long double ld;

int main() {
    int n;
    cin >> n;
    vector<ld> mark;
    ld temp;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        mark.push_back(temp);
    }

    for (int i = 0; i < mark.size(); i++)
        for (int j = i + 1; j < mark.size(); j++) 
            if (mark[i] < mark[j]) {
                temp = mark[i];
                mark[i] = mark[j];
                mark[j] = temp;
            }

    for (int i = 0; i < mark.size(); i++) cout << fixed << setprecision(2) << mark[i] << " ";

    return 0;
}