# 📚 Online Library System

A modern, console-based C++ application to manage books and users using an interactive menu-driven system. Built with modular design and CMake support.

---

## 🚀 Features

### 📖 Book Management

- Add new books
- Search by **name** or **ID**
- Update title, author, or category
- Delete books
- Rate books
- View the highest-rated book
- List all books by a specific user

### 👤 User Management

- Create new users
- Search by **name** or **ID**
- View all users
- Delete users

---

## 🧱 Project Structure

```bash
.
├── CMakeLists.txt
├── main.cpp
├── User.h
├── User.cpp
├── Book.h
├── Book.cpp
├── UserList.h
├── UserList.cpp
├── BookList.h
├── BookList.cpp
└── README.md
```

---

## 🛠️ Build Instructions

### 🔗 Prerequisites

- C++ Compiler (e.g., `g++`, `clang++`, or MSVC)
- [CMake ≥ 3.10](https://cmake.org/download/)

---

### 🧪 Building the Project

#### 📦 Clone the Repository

```bash
git clone https://github.com/your-username/book-user-manager.git
cd book-user-manager
```

#### 🔨 Build with CMake

```bash
# Create a build directory
mkdir build && cd build

# Generate build files
cmake ..

# Compile the project
cmake --build .
```

#### ▶️ Run the App

```bash
./BookUserManager
```

> Note: On Windows, the executable will be `BookUserManager.exe`.

---

## 📝 Usage

Once the application runs, you'll be greeted with a menu:

```text
Select one of the following choices:
1- Books Menu
2- Users Menu
3- Exit
```

Follow the interactive instructions to manage books and users.

---

## 💡 Example Actions

- Add users ➝ Create books ➝ Assign authors
- Rate books ➝ Search & update entries ➝ Delete as needed

---

## 📌 Notes

- Ensure all header/source files are in the same directory or properly referenced in your CMakeLists.txt.
- Uses dynamic memory for managing users and books.

---

## 👨‍💻 Author

Created as part of a C++ OOP learning project. Contributions and suggestions welcome!
