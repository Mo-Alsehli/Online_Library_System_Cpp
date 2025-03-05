
#include "user.h"
#include "book.h"
#include "userList.h"
using namespace std;


int main(){
    // Create some users
    User user1("Alice", 20, "123", "alice@example.com");
    User user2("Bob", 30, "123", "bob@example.com");
    User user3("Mo", 31, "123", "MO@example.com");

    // Create some books
    Book book1("1984", "George Orwell", "1234567890");
    Book book2("To Kill a Mockingbird", "Harper Lee", "0987654321");

    // Create a user list and add users to it
    UserList userL(3);
    userL.addUser(user1);
    userL.addUser(user2);
    userL.addUser(user3);

    // Display users
    cout << userL;
    userL.deleteUser(2);
    cout << userL;

    return 0;
}