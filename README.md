# 🔍 Search Engine Autocomplete System

A Search Engine Autocomplete System developed in **C++** using the **Trie Data Structure**. This project demonstrates how search engines generate autocomplete suggestions by storing words efficiently and searching them based on user-entered prefixes.

## 📌 Project Objective

The objective of this project is to implement the Trie Data Structure to perform fast prefix searching and generate autocomplete suggestions, similar to Google Search.

## 🚀 Features

- Store multiple keywords in a Trie
- Accept user search input
- Search matching prefixes efficiently
- Display autocomplete suggestions
- Fast search using Trie Data Structure
- Simple console-based interface

## 🛠️ Technologies Used

- C++
- Trie Data Structure
- Visual Studio Code
- MinGW (GCC Compiler)

## 📂 Project Structure

```
DSA_PROJECT/
│── main.cpp
│── README.md
```

## ▶️ How to Run

1. Clone the repository.

```
git clone https://github.com/YourUsername/DSA_SearchEngineAutocomplete.git
```

2. Open the project in Visual Studio Code.

3. Compile the program.

```
g++ main.cpp -o main
```

4. Run the executable.

```
./main
```

(On Windows PowerShell you can also use `.\main.exe`.)

## 💻 Sample Output

```
===== Search Engine Autocomplete =====

Enter Search: ap

Suggestions:
apple
application
apply
aptitude

Search Again? (y/n): y

Enter Search: ban

Suggestions:
banana
band
bank
banner

Search Again? (y/n): n

Thank You!
```

## 📚 DSA Concepts Used

- Trie (Prefix Tree)
- Trees
- Recursion
- Depth First Search (DFS)
- String Processing

## ⏱️ Time Complexity

| Operation | Complexity |
|-----------|------------|
| Insert | O(L) |
| Prefix Search | O(L) |
| Display Suggestions | O(P + S) |

Where:

- **L** = Length of the word
- **P** = Length of the prefix
- **S** = Number of suggested words

## 🎯 Learning Outcomes

- Understand the implementation of Trie.
- Learn efficient prefix searching.
- Improve understanding of recursion.
- Build a real-world search engine feature.

## 👨‍💻 Author

**Abhinav Chopra**

MCA (AI & ML)

Lovely Professional University
