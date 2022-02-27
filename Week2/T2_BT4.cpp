#include <iostream>
using namespace std;

int main() {
    int total, totalLegs;
    cin >> total >> totalLegs;

    bool flag = false;
    for (int numChicken = 0; numChicken <= total; numChicken++)
        if (2*numChicken + 4*(total - numChicken) == totalLegs) {
            cout << "chicken = " << numChicken << ", dog = " << total - numChicken;
            flag = true;
            break;
        }
    if (!flag) cout << "invalid";

    return 0;
}