
#include "user.h"
#include "book.h"
#include "userList.h"
#include "bookList.h"
using namespace std;


int main(){
    // Create some users
    User user1("Alice", 20, "123", "alice@example.com");
    User user2("Bob", 30, "123", "bob@example.com");
    User user3("Mo", 31, "123", "MO@example.com");

    // Create some books
    Book book1("1984", "George Orwell", "1234567890");
    Book book2("To Kill a Mockingbird", "Harper Lee", "0987654321");
    Book book3("Sehli Family History", "Mohamed Magdi", "0987654555");

//     // Create a user list and add users to it
//     UserList userL(3);
//     userL.addUser(user1);
//     userL.addUser(user2);
//     userL.addUser(user3);
// 
//     // Display users
//     cout << userL;
//     userL.deleteUser(2);
//     cout << userL;

    // Create a book list and add books to it
    BookList bookL(3);
    bookL.addBook(book1);
    bookL.addBook(book2);
    bookL.addBook(book3);

    // Display books
    cout << bookL[3];

    return 0;
}