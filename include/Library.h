#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include "Book.h"
#include "User.h"

class Library {
private:
    std::vector<Book> books;
    std::vector<User> users;

public:
    // Book management
    void addBook(const Book& book);
    void removeBook(int bookId);

    // User management
    void addUser(const User& user);
    void removeUser(int userId);

    // Search
    Book* searchBookById(int id);
    void searchBookByTitle(const std::string& title);
    void searchBookByAuthor(const std::string& author);

    // Borrow / Return (with user)
    void borrowBook(int bookId, int userId);
    void returnBook(int bookId, int userId);
};

#endif