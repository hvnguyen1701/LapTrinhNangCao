#include <iostream>
using namespace std;

int main() {
    string text;
    getline(cin, text);

    for (int i = 0; i < text.size(); i++)
        if (i > text.size() - 4 || text.substr(i, 4) != "Zues") cout << text[i];
        else {
            cout << "Zeus";
            i += 3;
        }

    return 0;
}