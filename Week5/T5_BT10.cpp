#include <iostream>

using namespace std;

const int MAX_BOOKS = 1e5;

struct Book {
    int accessionNumber;
    string nameAuthor, title;
    bool isIssued;

    void displayInfo() {
        cout << "Accession number: " << accessionNumber << "\n";
        cout << "Name of author: " << nameAuthor << "\n";
        cout << "Book title: " << title << "\n";
        cout << "Book is " << (isIssued ? "" : "not ") << "issued\n";
    }
} books[MAX_BOOKS];

void showMenu();
void displayBooksInfo();
void addABook();
void displayBooksOfAAuthor();
void displayNumberBooksOfATitle();
void displayTotalNumberBooks();
void issueABook();

int numberBooks = 0;

int main() {
    bool isExited = false;
    do {
        showMenu();
        char choice;
        cout << "Select an option (1-7): ";
        cin >> choice;
        cout << "\n";
        switch (choice) {
            case '1':
                displayBooksInfo();
                break;
            case '2':
                addABook();
                break;
            case '3':
                displayBooksOfAAuthor();
                break;
            case '4':
                displayNumberBooksOfATitle();
                break;
            case '5':
                displayTotalNumberBooks();
                break;
            case '6':
                issueABook();
                break;
            case '7':
                isExited = true;
                break;
            default:
                cout << "Invalid input!\n";
        }
    } while (!isExited);

    return 0;
}

void showMenu() {
    cout << "\nMenu:\n";
    cout << "1 - Display book information\n"
        "2 - Add a new book\n"
        "3 - Display all the books in the library of a particular author\n"
        "4 - Display the number of books of a particular title\n"
        "5 - Display the total number of books in the library\n"
        "6 - Issue a book\n"
        "7 - Exit\n";
}

void displayBooksInfo() {
    for (int i = 0; i < numberBooks; i++) {
        cout << "\n";
        books[i].displayInfo();
    }
}

void addABook() {
    cout << "Accession number: ";
    cin >> books[numberBooks].accessionNumber;
    cout << "Name of author: ";
    cin.ignore();
    getline(cin, books[numberBooks].nameAuthor);
    cout << "Book title: ";
    getline(cin, books[numberBooks].title);
    books[numberBooks++].isIssued = false;
}

void displayBooksOfAAuthor() {
    string nameAuthor;
    cout << "Name of author: ";
    cin.ignore();
    getline(cin, nameAuthor);

    cout << "All the books of " << nameAuthor << " in the library:\n\n";
    for (int i = 0; i < numberBooks; i++)
        if (books[i].nameAuthor == nameAuthor) {
            books[i].displayInfo();
            cout << "\n";
        }
}

void displayNumberBooksOfATitle() {
    string title;
    cout << "Book title: ";
    cin.ignore();
    getline(cin, title);

    int count = 0;
    for (int i = 0; i < numberBooks; i++)
        if (books[i].title == title) count++;
    cout << "The number of books of title " << title << ": " << count << "\n";
}

void displayTotalNumberBooks() {
    cout << "The total number of books in the library: " << numberBooks << "\n";
}

void issueABook() {
    int accessionNumber;
    cout << "Accession number of the book: ";
    cin >> accessionNumber;

    for (int i = 0; i < numberBooks; i++)
        if (books[i].accessionNumber == accessionNumber) books[i].isIssued = true;
}