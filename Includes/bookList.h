#ifndef BOOK_LIST_H
#define BOOK_LIST_H

#include "book.h"

class BookList
{
private:
    Book *books;
    int capacity;
    int bCount;

public:
    BookList();
    BookList(int);
    void addBook(const Book &);
    Book *searchBook(string);
    Book *searchBook(int);
    void deleteBook(int);
    friend ostream &operator<<(ostream &, const BookList &);
    Book getTheHeighestRatedBook();
    void getBooksForUser(const User &);
    Book &operator[](int);
    ~BookList();
};

#endif