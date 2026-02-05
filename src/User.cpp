#include "User.h"

User::User(int userId, std::string name)
    : userId(userId), name(name) {}

int User::getUserId() const {
    return userId;
}

std::string User::getName() const {
    return name;
}