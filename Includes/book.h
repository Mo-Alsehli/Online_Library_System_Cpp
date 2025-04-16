#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
#include "user.h"
 
using namespace std;

class Book
{
private:
    string title;
    string isbn;
    int id;
    string category;
    double averageRating;
    int numRates;
    double sumRates;
    User author;
public:
    static int count;
    Book();
    Book(string, string, string);
    Book(const Book&);
    string getTitle() const;
    void setTitle(string);
    string getIsbn() const;
    void setIsbn(string);
    int getId() const;
    //void setId(int);
    string getCategory() const;
    void setCategory(string);
    User getAuthor() const;
    void setAuthor(const User&);
    void rateBook(double);
    double getAverageRating() const;
    bool operator==(const Book&);
    friend ostream &operator<<(ostream&, const Book&);
    friend istream &operator>>(istream&, Book&);
};

#endif