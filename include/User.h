#ifndef USER_H
#define USER_H

#include <string>

class User {
private:
    int userId;
    std::string name;

public:
    User(int userId, std::string name);

    int getUserId() const;
    std::string getName() const;
};

#endif