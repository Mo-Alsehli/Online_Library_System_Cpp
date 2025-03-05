#ifndef USERLIST_H
#define USERLIST_H

#include <iostream>
#include <user.h>

using namespace std;

class UserList
{
private:
    User* users;
    int capacity;
    int uCount;

public:
    UserList();
    UserList(int);
    void addUser(const User &);
    User *searchUser(string);
    User *searchUser(int);
    void deleteUser(int);
    friend ostream &operator<<(ostream &, const UserList &);
    ~UserList();
};

#endif