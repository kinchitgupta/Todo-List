#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Book {
public:
    int id;
    string title;
    string author;
    bool isIssued;

    Book(int id, string title, string author) {
        this->id = id;
        this->title = title;
        this->author = author;
        this->isIssued = false;
    }

    void display() {
        cout << "ID: " << id
             << ", Title: " << title
             << ", Author: " << author
             << ", Status: " << (isIssued ? "Issued" : "Available") << endl;
    }
};

class Library {
private:
    vector<Book> books;

public:
    void addBook(int id, string title, string author) {
        books.push_back(Book(id, title, author));
        cout << "Book added successfully!" << endl;
    }

    void displayBooks() {
        if (books.empty()) {
            cout << "No books in the library." << endl;
            return;
        }
        for (auto &book : books) {
            book.display();
        }
    }

    void searchBook(int id) {
        for (auto &book : books) {
            if (book.id == id) {
                book.display();
                return;
            }
        }
        cout << "Book not found!" << endl;
    }

    void issueBook(int id) {
        for (auto &book : books) {
            if (book.id == id) {
                if (!book.isIssued) {
                    book.isIssued = true;
                    cout << "Book issued successfully." << endl;
                } else {
                    cout << "Book is already issued." << endl;
                }
                return;
            }
        }
        cout << "Book not found!" << endl;
    }

    void returnBook(int id) {
        for (auto &book : books) {
            if (book.id == id) {
                if (book.isIssued) {
                    book.isIssued = false;
                    cout << "Book returned successfully." << endl;
                } else {
                    cout << "This book was not issued." << endl;
                }
                return;
            }
        }
        cout << "Book not found!" << endl;
    }
};

int main() {
    Library lib;
    int choice, id;
    string title, author;

    do {
        cout << "\n--- Library Menu ---\n";
        cout << "1. Add Book\n2. Display Books\n3. Search Book\n4. Issue Book\n5. Return Book\n6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter book ID, title and author: ";
            cin >> id;
            cin.ignore(); // ignore newline
            getline(cin, title);
            getline(cin, author);
            lib.addBook(id, title, author);
            break;
        case 2:
            lib.displayBooks();
            break;
        case 3:
            cout << "Enter book ID to search: ";
            cin >> id;
            lib.searchBook(id);
            break;
        case 4:
            cout << "Enter book ID to issue: ";
            cin >> id;
            lib.issueBook(id);
            break;
        case 5:
            cout << "Enter book ID to return: ";
            cin >> id;
            lib.returnBook(id);
            break;
        case 6:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
    } while (choice != 6);

    return 0;
}
