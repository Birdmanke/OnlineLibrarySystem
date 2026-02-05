#include "Library.h"
#include <iostream>

// ---------------- BOOK & USER MANAGEMENT ----------------

void Library::addBook(const Book& book) {
    books.push_back(book);
    std::cout << "Book added successfully\n";
}

void Library::removeBook(int bookId) {
    for (auto it = books.begin(); it != books.end(); ++it) {
        if (it->getId() == bookId) {
            books.erase(it);
            std::cout << "Book removed successfully\n";
            return;
        }
    }
    std::cout << "Book not found to remove\n";
}

void Library::addUser(const User& user) {
    users.push_back(user);
    std::cout << "User added successfully\n";
}

void Library::removeUser(int userId) {
    for (auto it = users.begin(); it != users.end(); ++it) {
        if (it->getUserId() == userId) {
            users.erase(it);
            std::cout << "User removed successfully\n";
            return;
        }
    }
    std::cout << "User not found to remove\n";
}

// ---------------- SEARCH ----------------

Book* Library::searchBookById(int id) {
    for (auto& book : books) {
        if (book.getId() == id) {
            return &book;
        }
    }
    return nullptr;
}

void Library::searchBookByTitle(const std::string& title) {
    for (auto& book : books) {
        if (book.getTitle() == title) {
            std::cout << "Found: " << book.getTitle()
                      << " by " << book.getAuthor() << "\n";
            return;
        }
    }
    std::cout << "Book with that title not found\n";
}

void Library::searchBookByAuthor(const std::string& author) {
    bool found = false;
    for (auto& book : books) {
        if (book.getAuthor() == author) {
            std::cout << "Found: " << book.getTitle()
                      << " by " << book.getAuthor() << "\n";
            found = true;
        }
    }
    if (!found) {
        std::cout << "No books by that author found\n";
    }
}

// ---------------- BORROW / RETURN WITH USER ----------------

void Library::borrowBook(int bookId, int userId) {
    Book* book = searchBookById(bookId);

    if (!book) {
        std::cout << "Book not found\n";
        return;
    }

    if (book->getStatus()) {
        std::cout << "Book already borrowed\n";
        return;
    }

    book->borrowBook();
    std::cout << "User " << userId << " borrowed book successfully\n";
}

void Library::returnBook(int bookId, int userId) {
    Book* book = searchBookById(bookId);

    if (!book) {
        std::cout << "Book not found\n";
        return;
    }

    if (!book->getStatus()) {
        std::cout << "Book was not borrowed\n";
        return;
    }

    book->returnBook();
    std::cout << "User " << userId << " returned book successfully\n";
}