#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Book {
private:
    string title;
    string author;
    int year;
public:
    Book(string _title,string _author, int _year) : title(_title), author(_author), year(_year) {}  // constructor

    string getTitle() const {
        return title;
    }

    string getAuthor() const {
        return author;
    }

    int getYear() const {
        return year;
    }
};

class Library {
private:
    vector<Book> books;

public:
    void addBook(const Book& book) {
        books.push_back(book);
        cout << "Book added successfully.\n";
    }

    void removeBook(const std::string& title) {
        for (auto it = books.begin(); it != books.end(); ++it) {
            if (it->getTitle() == title) {
                books.erase(it);
                cout << "Book removed successfully.\n";
                return;
            }
        }
        cout << "Book not found.\n";
    }

    void listBooks() const {
        if (books.empty()) {
            cout << "No books in the library.\n";
        }
        else {
            cout << "Books in the library:\n";
            for (const auto& book : books) {
                cout << "Title: " << book.getTitle() << ", Author: " << book.getAuthor() << ", Year: " << book.getYear() << endl;
            }
        }
    }
};

void userInterface(Library& lib) {
    string command;
    while (true) {
        cout << "Enter command (add, remove, list, exit): ";
        getline(cin, command);

        if (command == "add") {
            string title, author;
            int year;
            cout << "Enter book title: ";
            getline(cin, title);
            cout << "Enter book author: ";
            getline(cin, author);
            cout << "Enter publication year: ";
            cin >> year;
            cin.ignore(); // Ignore newline character left in the input buffer
            lib.addBook(Book(title, author, year));
        }
        else if (command == "remove") {
            string title;
            cout << "Enter title of the book to remove: ";
            getline(cin, title);
            lib.removeBook(title);
        }
        else if (command == "list") {
            lib.listBooks();
        }
        else if (command == "exit") {
            break; // Exit the loop and function
        }
        else {
            cout << "Invalid command. Please try again.\n";
        }
    }
}

int main() {
    Library myLibrary;
    userInterface(myLibrary);
    system("pause>0");
}


