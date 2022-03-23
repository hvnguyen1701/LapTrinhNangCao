#include <iostream>

using namespace std;

struct Date {
    int day, month, year;
} d;

void readCurDate();
void add45Days();
void displayFinalDate();
bool isLeapYear(int year);
int numberDaysOfMonth(int month, int year);

int main() {
    readCurDate();
    add45Days();
    displayFinalDate();
    return 0;
}

void readCurDate() {
    cout << "The current date:\n";
    cout << "Day: ";
    cin >> d.day;
    cout << "Month: ";
    cin >> d.month;
    cout << "Year: ";
    cin >> d.year;
}

bool isLeapYear(int year) {
    return ((year%400 == 0) || (year%100 != 0 && year%4 == 0));
}

int numberDaysOfMonth(int month, int year) {
    if (month == 2) {
        if (isLeapYear(year)) return 29;
        return 28;
    }
    if (month == 4 || month == 6 || month == 9 || month == 11) return 30;
    return 31;
}

void add45Days() {
    d.day += 45;
    int numberDays = numberDaysOfMonth(d.month, d.year);
    while (d.day > numberDays) {
        d.day -= numberDays;
        d.month++;
        if (d.month == 13) {
            d.year++;
            d.month = 1;
        }
        numberDays = numberDaysOfMonth(d.month, d.year);
    }
}

void displayFinalDate() {
    cout << "The final date: ";
    cout << d.day << "/" << d.month << "/" << d.year;
}