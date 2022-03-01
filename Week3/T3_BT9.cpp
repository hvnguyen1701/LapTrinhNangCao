#include <iostream>
using namespace std;

int main() {
    string text;
    getline(cin, text);

    int countStartSpaces;
    for (countStartSpaces = 0; text[countStartSpaces] == ' '; countStartSpaces++) cout << text[countStartSpaces];
    for (int i = countStartSpaces; i < text.size(); i++) {
        cout << text[i];
        if (text[i] == ' ')
            for (i = i + 1; i < text.size(); i++)
                if (text[i] != ' ') {
                    i--;
                    break;
                }
    }

    return 0;
}