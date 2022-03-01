#include <iostream>
using namespace std;

void printOutput(string noti) {
    cout << noti;
    exit(0);
}

int main() {
    string username;
    getline(cin, username);

    if (username.size() < 6 || username.size() > 15 || isdigit(username[0])) printOutput("Invalid username.");
    for (int i = 0; i < username.size(); i++)
        if (!isalnum(username[i])) printOutput("Invalid username.");
    printOutput("Valid username.");
}