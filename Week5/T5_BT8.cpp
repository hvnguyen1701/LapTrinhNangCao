#include <iostream>

using namespace std;

const int MAX_CUSTOMERS = 1e5;

struct Customer {
    string name, accountNumber;
    int balance;
} customers[MAX_CUSTOMERS];

void readInfoCustomers();
void printNamesBalanceLess200();
void addAndPrintBalance();

int numberCustomers;

int main() {
    readInfoCustomers();
    printNamesBalanceLess200();
    addAndPrintBalance();
    return 0;
}

void readInfoCustomers() {
    cout << "Number of customers: ";
    cin >> numberCustomers;
    for (int i = 0; i < numberCustomers; i++) {
        cout << "\nCustomer " << i + 1 << ":\n";
        cout << "Name: ";
        cin.ignore();
        getline(cin, customers[i].name);
        cout << "Account number: ";
        cin >> customers[i].accountNumber;
        cout << "Balance: ";
        cin >> customers[i].balance;
    }
}

void printNamesBalanceLess200() {
    cout << "\n\nThe names of all the customers having balance less than $200:\n";
    for (int i = 0; i < numberCustomers; i++)
        if (customers[i].balance < 200) cout << customers[i].name << "\n";
}

void addAndPrintBalance() {
    cout << "\n";
    for (int i = 0; i < numberCustomers; i++)
        if (customers[i].balance > 1000) {
            customers[i].balance += 100;
            cout << "The incremented value of balance of customer with account number " << customers[i].accountNumber;
            cout << ": $" << customers[i].balance << "\n";
        }
}