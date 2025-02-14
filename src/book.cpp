#include "book.h"


int Book::count = 0;

Book::Book(){
    title = "";
    isbn = "";
    count++;
    id = count;
    category = "";
    averageRating = 0.0;
    User author;
    numRates = 0;
    sumRates = 0.0;
}


Book::Book(string title, string isbn, string category){
    this->title = title;
    this->isbn = isbn;
    this->category = category;
    count++;
    this->id = count;
    averageRating = 0.0;
    User author;
    numRates = 0;
    sumRates = 0.0;
}

Book::Book(const Book& book){
    title = book.title;
    isbn = book.isbn;
    id = book.id;
    category = book.category;
    author = book.author;
    averageRating = book.averageRating;
    numRates = book.numRates;
    sumRates = book.sumRates;
}

void Book::setTitle(string title) {
    this->title = title;
}

string Book::getTitle() const {
    return title;
}

void Book::setIsbn(string isbn) {
    this->isbn = isbn;
}

string Book::getIsbn() const {
    return isbn;
}

void Book::setCategory(string category) {
    this->category = category;
}

string Book::getCategory() const {
    return category;
}

void Book::setAuthor(User& author) {
    this->author = author;
}

User Book::getAuthor() const {
    return author;
}

void Book::rateBook(double rating) {
    numRates++;
    sumRates += rating;
    averageRating = (sumRates / numRates);
}

double Book::getAverageRating() const {
    return averageRating;
}

int Book::getId() const {
    return id;
}

bool Book::operator==(const Book &book){
    return (this->title == book.title &&
            this->isbn == book.isbn &&
            this->category == book.category &&
            this->author == book.author &&
            this->averageRating == book.averageRating &&
            this->numRates == book.numRates &&
            this->sumRates == book.sumRates);
}

istream& operator>>(istream& input, Book& book){
    cout << "Enter the book info in this order: " << endl;
    cout << "Title " << "Isbn " << "Category " << "(Space Separated)" << endl;
    input >> book.title >> book.isbn >> book.category;
    book.averageRating = 0.0;
    return input;
}

// Output Stream Operator Overloading.
ostream &operator <<(ostream &output, const Book &book){
    output << "*******************************" << endl;
    output << "Book ID NO. " << book.id << "INFO: " << endl;
    output << "Title: " << book.title << endl;
    output << "ISBN: " << book.isbn << endl;
    output << "Category: " << book.category << endl;
    output << "Author: " << book.author.getName() << endl; 
    output << "Average Rating: " << book.averageRating << endl;
    output << "*******************************" << endl;

    return output;
}