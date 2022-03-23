#include <iostream>

using namespace std;

int main() {
    string a, b;
    int t;
    cin >> t;
    cin.ignore();
    getline(cin,a );
    cin.ignore();
    getline(cin , b);
    cout << a << "\n" << b;
    cin >> t;
    cout << "\n"<<t; 

}