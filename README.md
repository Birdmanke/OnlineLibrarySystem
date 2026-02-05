Online Library Management System (C++)

--------------------------------------------------
PROJECT DESCRIPTION
--------------------------------------------------
This project is an Online Library Management System developed using
Object-Oriented Programming (OOP) principles in C++.

The system allows management of books and users, borrowing and returning
of books, and searching for books using different criteria.
It also includes comprehensive test cases to validate functionality
using both positive and negative scenarios.

--------------------------------------------------
FEATURES IMPLEMENTED
--------------------------------------------------
1. Book Management
   - Add books
   - Remove books
   - Search books by:
     • Book ID
     • Title
     • Author

2. User Management
   - Add users
   - Remove users

3. Borrowing and Returning
   - Borrow books using Book ID and User ID
   - Return books using Book ID and User ID
   - Prevents invalid operations such as:
     • Borrowing an already borrowed book
     • Returning a book that was not borrowed
     • Borrowing or returning non‑existing books

4. Menu‑Driven Interface
   - User‑friendly menu for interaction
   - Input‑based control for all operations

5. Testing
   - Separate test file
   - Covers:
     • Positive test cases
     • Negative test cases
     • Edge cases

--------------------------------------------------
PROJECT STRUCTURE
--------------------------------------------------
OnlineLibrarySystem/
│── include/
│   ├── Book.h
│   ├── User.h
│   └── Library.h
│
│── src/
│   ├── Book.cpp
│   ├── User.cpp
│   └── Library.cpp
│
│── tests/
│   └── test.cpp
│
│── main.cpp
│── README.md

--------------------------------------------------
TOOLS USED
--------------------------------------------------
- C++
- MinGW (g++)
- Visual Studio Code
- Git & GitHub

--------------------------------------------------
HOW TO COMPILE AND RUN
--------------------------------------------------

Compile main program:
g++ -Iinclude src/*.cpp main.cpp -o library

Run program (Windows):
.\library

--------------------------------------------------
RUNNING TESTS
--------------------------------------------------

Compile tests:
g++ -Iinclude src/*.cpp tests/test.cpp -o test

Run tests (Windows):
.\test

--------------------------------------------------
DESIGN CHOICES
--------------------------------------------------
- Object‑Oriented Design was used to separate responsibilities.
- Encapsulation is applied by keeping data members private.
- The Library class acts as a controller managing books and users.
- Separate test files improve maintainability and verification.

EXPLANATION
This system was designed using Object-Oriented Programming principles in C++.

The Book class represents individual books and stores their details and borrowing status.

The User class represents library users and stores their identification details.

The Library class manages collections of books and users and implements core functionality such as adding, removing, borrowing, returning, and searching for books.

Encapsulation is enforced by keeping class attributes private and exposing public methods for controlled access.

A menu-driven interface was implemented to allow user interaction.

Comprehensive test cases were written separately to validate all methods using both positive and negative scenarios, ensuring robustness and correctness of the system.