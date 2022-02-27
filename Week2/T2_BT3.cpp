#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int lowerBound, upperBound;
    cin >> lowerBound >> upperBound;

    for (int i = sqrt(lowerBound); i <= sqrt(upperBound); i++)
        if (i*i >= lowerBound) cout << i*i << " ";

    return 0;
}