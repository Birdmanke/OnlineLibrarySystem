#include <iostream>
#include "include/Library.h"

int main() {
    Library library;

    // Sample data
    library.addBook(Book(1, "C++ Basics", "Bjarne"));
    library.addBook(Book(2, "OOP Concepts", "Stroustrup"));
    library.addUser(User(101, "Alice"));

    int choice;
    do {
        std::cout << "\n===== Online Library System =====\n";
        std::cout << "1. Add Book\n";
        std::cout << "2. Remove Book\n";
        std::cout << "3. Add User\n";
        std::cout << "4. Remove User\n";
        std::cout << "5. Borrow Book\n";
        std::cout << "6. Return Book\n";
        std::cout << "7. Search by Title\n";
        std::cout << "8. Search by Author\n";
        std::cout << "9. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;

        if (choice == 1) {
            int id; std::string title, author;
            std::cout << "Book ID: "; std::cin >> id;
            std::cin.ignore();
            std::cout << "Title: "; std::getline(std::cin, title);
            std::cout << "Author: "; std::getline(std::cin, author);
            library.addBook(Book(id, title, author));
        }
        else if (choice == 2) {
            int id;
            std::cout << "Book ID to remove: ";
            std::cin >> id;
            library.removeBook(id);
        }
        else if (choice == 3) {
            int id; std::string name;
            std::cout << "User ID: "; std::cin >> id;
            std::cin.ignore();
            std::cout << "Name: "; std::getline(std::cin, name);
            library.addUser(User(id, name));
        }
        else if (choice == 4) {
            int id;
            std::cout << "User ID to remove: ";
            std::cin >> id;
            library.removeUser(id);
        }
        else if (choice == 5) {
            int bookId, userId;
            std::cout << "Book ID: "; std::cin >> bookId;
            std::cout << "User ID: "; std::cin >> userId;
            library.borrowBook(bookId, userId);
        }
        else if (choice == 6) {
            int bookId, userId;
            std::cout << "Book ID: "; std::cin >> bookId;
            std::cout << "User ID: "; std::cin >> userId;
            library.returnBook(bookId, userId);
        }
        else if (choice == 7) {
            std::string title;
            std::cin.ignore();
            std::cout << "Title: ";
            std::getline(std::cin, title);
            library.searchBookByTitle(title);
        }
        else if (choice == 8) {
            std::string author;
            std::cin.ignore();
            std::cout << "Author: ";
            std::getline(std::cin, author);
            library.searchBookByAuthor(author);
        }

    } while (choice != 9);

    return 0;
}