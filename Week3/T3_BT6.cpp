#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    
    int numWord = 0;
    s = " " + s;
    for (int i = 0; i < s.size(); i++)
        if (s[i] != ' ' && s[i - 1] == ' ') numWord++;

    cout << numWord;

    return 0;
}