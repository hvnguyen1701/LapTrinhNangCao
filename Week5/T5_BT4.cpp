#include <iostream>

using namespace std;

const int NUMBER_DISTANCES = 2;

struct Distance {
    int inch, feet;

    Distance sum(const Distance &other) {
        Distance res = {inch + other.inch, feet + other.feet};
        res.feet += res.inch/12;
        res.inch %= 12;
        return res;
    }
} distances[NUMBER_DISTANCES];

void readInput();
void printOutput();

int main() {
    readInput();
    printOutput();
    return 0;
}

void readInput() {
    for (int i = 0; i < NUMBER_DISTANCES; i++) {
        cout << "Distance " << i + 1 << ":\n";
        cout << "Inch: ";
        cin >> distances[i].inch;
        cout << "Feet: ";
        cin >> distances[i].feet;
        cout << "\n";
    }
}

void printOutput() {
    Distance res = distances[0];
    for (int i = 1; i < NUMBER_DISTANCES; i++) res = res.sum(distances[i]);
    cout << "Result: " << res.inch << " inch " << res.feet << " feet";
}