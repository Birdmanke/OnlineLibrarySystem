#include <iostream>
#include "../include/Library.h"

int main() {
    Library lib;

    // Add users & books (positive)
    lib.addUser(User(1, "Tom"));
    lib.addBook(Book(10, "Testing C++", "Author A"));

    // Borrow / return (positive)
    lib.borrowBook(10, 1);
    lib.returnBook(10, 1);

    // Negative tests
    lib.borrowBook(99, 1);     // book not found
    lib.returnBook(10, 1);     // book not borrowed
    lib.removeBook(99);        // remove non-existing book
    lib.removeUser(99);        // remove non-existing user

    // Search tests
    lib.searchBookByTitle("Testing C++");     // positive
    lib.searchBookByTitle("Unknown");         // negative
    lib.searchBookByAuthor("Author A");       // positive
    lib.searchBookByAuthor("Nobody");         // negative

    return 0;
}