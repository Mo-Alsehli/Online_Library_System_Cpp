#include "bookList.h"

BookList::BookList()
{
    bCount = 0;
}

BookList::BookList(int capacity)
{
    this->capacity = capacity;
    books = new Book[capacity];
    bCount = 0;
}

void BookList::addBook(const Book& book){
    if(bCount < capacity){
        books[bCount] = book;
        bCount++;
    }else{
        cout << "Book list is FULL!!" << endl;
    }
}

Book* BookList::searchBook(string name){
    for(int i = 0; i < bCount; i++){
        if(books[i].getTitle() == name){
            return &books[i];
        }
    }
    cout << "Book not found!" << endl;
    return nullptr;
}

Book* BookList::searchBook(int id){
    for(int i = 0; i < bCount; i++){
        if(books[i].getId() == id){
            return &books[i];
        }
    }
    cout << "Book not found!" << endl;
    return nullptr;
}

Book BookList::getTheHighestRatedBook(){
    int heighestRate = -10;
    int index;
    for(int i = 0; i < bCount; i++){
        if(books[i].getAverageRating() > heighestRate){
            index = i;
            heighestRate = books[i].getAverageRating();
        }
    }

    return books[index];
}

void BookList::getBooksForUser(const User& u){
    for(int i = 0; i < bCount; i++){
        if(books[i].getAuthor() == u){
            cout << books[i];
        }
    }
}

Book& BookList::operator[](int pos){
    if(pos < 0 || pos >= bCount){
        cout << "Position ERROR!!\nBook List Index Invalid!!\n";
        exit(1);
    }

    return books[pos];
}

void BookList::deleteBook(int id){
    for(int i = 0; i < bCount; i++){
        if(books[i].getId() == id){
            for(int j = i; j < bCount - 1; j++){
                books[j] = books[j + 1];
            }
            bCount--;
            return;
        }
    }
    cout << "Book not found!" << endl;
}

ostream& operator<<(ostream& out, const BookList& bookList){
    for(int i = 0; i < bookList.bCount; i++){
        out << bookList.books[i] << endl;
    }
    return out;
}

BookList::~BookList()
{
    delete[] books;
}