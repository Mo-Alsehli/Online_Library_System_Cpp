#include <userList.h>

UserList::UserList(){
    capacity = 0;
}

UserList::UserList(int capacity){
    this->capacity = capacity;
    users = new User[capacity];
    uCount = 0;
}


void UserList::addUser(const User& u){
    if(uCount < capacity){
        users[uCount] = u;
        users[uCount].setId(uCount+1);
        uCount++;
    }else{
        cout << "\n Users Database Complete :(\n";
    }
}

User* UserList::searchUser(string name){
    for(int i = 0; i < uCount; i++){
        if(users[i].getName() == name){
            return &users[i];
        }
    }

    cout << "User " << name << " NOT FOUND!!\n";
    return nullptr;
}

User* UserList::searchUser(int id){
    for(int i = 0; i < uCount; i++){
        if(users[i].getId() == id){
            return &users[i];
        }
    }

    cout << "User ID NO." << id << " NOT FOUND!!\n";
    return nullptr;
}

void UserList::deleteUser(int id){
    for(int i = 0; i < uCount; i++){
        if(users[i].getId() == id){
            while(i < uCount-1){
                users[i] = users[i+1];
                i++;
            }
            uCount--;
            break;
        }
    }
}

ostream &operator<<(ostream& output, const UserList& userL){
    for(int i = 0; i < userL.uCount; i++){
        output <<userL.users[i];
    }

    return output;
}

UserList::~UserList(){
    delete[] users;
}
