#include "user.h"

using namespace std;

int User::count = 0;

User::User(){
    name = "";
    age = 0;
    password = "";
    email;
    count++;
    id = count;
}

User::User(string name, int age, string password, string email){
    // this is a pointer to the current object.
    this->name = name;
    this->age = age;
    this->password = password;
    this->email = email;
    count++;
    id = count;
}

// Copy Constructer.
User::User(const User &user){
    name = user.name;
    age = user.age;
    password = user.password;
    email = user.email;
    id = user.id;
} 

// (==) Operator Overloading Function

bool User:: operator==(const User& user){
    if(name != user.name || email != user.email || age != user.age || id != user.id || password != user.password){
        return false;
    }

    return true;
}

// Constructor Functions
void User::setName(string n){
    name = n;
}

string User::getName() const{
    return name;
}

void User::setPassword(string p){
    password = p;
}

string User::getPassword() const{
    return password;
}

void User::setEmail(string e){
    email = e;
}

string User::getEmail() const{
    return email;
}

void User::setAge(int a){
    age = a;
}

int User::getAge() const{
    return age;
}

void User::setId(int id){
    this->id = id;
} 

int User::getId() const{
    return id;
}

// Display Function

void User::display(){
    cout << "*******************************" << endl;
    cout << "User ID No. " << id << " Info: " << endl;
    cout << "NAME: " << name << endl;
    cout << "AGE: " << age << endl;
    cout << "EMAIL: " << email << endl;
    cout << "*******************************" << endl;
}