# 📖 C++ STL `list` — Full Guide with Code Example 🚀

A well-explained overview and practical demonstration of **C++ STL `list` container**, covering initialization, operations, iterators, and utility functions.

---

## 📌 What is `std::list` in C++?

* `std::list` is a **doubly linked list** implementation in C++ Standard Template Library.
* It allows **fast insertion and deletion from both ends** as well as at any position using iterators.
* Unlike `vector`, it **does not support random access** using indexes.

---

## 📦 Features of `std::list`

| Feature                 | `std::list`                                         |
| :---------------------- | :-------------------------------------------------- |
| Underlying Structure    | Doubly Linked List                                  |
| Random Access via Index | ❌ Not supported                                     |
| Fast Insert/Delete      | ✅ O(1) at front and back, O(1) at iterator position |
| Bidirectional Iterators | ✅ Supported                                         |
| Dynamic Size            | ✅ Grows/shrinks automatically                       |

---

## 📚 What’s Covered in This Code

| Topic                             | Description                                                |
| :-------------------------------- | :--------------------------------------------------------- |
| List Declaration & Initialization | Creating a list with initial values                        |
| Insertion Operations              | `push_back()`, `push_front()`                              |
| Deletion Operations               | `pop_back()`, `pop_front()`                                |
| Traversal with Range-Based Loops  | Using `for(int val : list)`                                |
| Traversal with Iterators          | Using `list<int>::iterator` to iterate manually            |
| Other Functions (Mentioned)       | `size()`, `erase()`, `clear()`, `sort()`, `reverse()` etc. |

---

## 📜 Code Walkthrough

### ✅ Declare and Initialize List

```cpp
list<int> l = {1, 2, 3, 4, 5};
```

Creates a doubly linked list:
`1 <-> 2 <-> 3 <-> 4 <-> 5`

---

### ➕ Insert Elements

```cpp
l.push_back(6);   // Adds 6 at the end
l.push_front(0);  // Adds 0 at the front
```

List becomes:
`0 1 2 3 4 5 6`

---

### 🔁 Traversing List (Range-based Loop)

```cpp
for(int val : l){
    cout << val << " ";
}
```

---

### 🗑️ Remove Elements

```cpp
l.pop_back();    // Removes last element (6)
l.pop_front();   // Removes first element (0)
```

List becomes:
`1 2 3 4 5`

---

### 🔄 Traversing with Iterators

```cpp
list<int>::iterator it;
for(it = l.begin(); it != l.end(); it++){
    cout << *it << " ";
}
```

* `begin()` — returns iterator to the first element
* `end()` — returns iterator to one past the last element

---

## 📑 Common List Operations

| Function            | Description                                          |
| :------------------ | :--------------------------------------------------- |
| `push_back(val)`    | Add element to the end                               |
| `push_front(val)`   | Add element to the front                             |
| `pop_back()`        | Remove last element                                  |
| `pop_front()`       | Remove first element                                 |
| `size()`            | Number of elements                                   |
| `clear()`           | Remove all elements                                  |
| `insert(pos, val)`  | Insert before given iterator position                |
| `erase(pos)`        | Remove element at iterator position                  |
| `remove(val)`       | Remove all occurrences of a value                    |
| `sort()`            | Sort list                                            |
| `reverse()`         | Reverse list                                         |
| `unique()`          | Remove consecutive duplicates                        |
| `merge(list)`       | Merge two sorted lists                               |
| `splice(pos, list)` | Move elements from one list into another at position |

---

## 📊 Memory Layout

A list uses a **doubly linked structure**:

```
[prev | data | next] <-> [prev | data | next] ...
```

This makes insertions and deletions O(1) at front/back and with iterators.

---

## 📜 Full Example Code with Comments

```cpp
#include<bits/stdc++.h>
#include<list>
using namespace std;

int main(){
    // 📌 List in STL-C++
    list<int> l = {1, 2, 3, 4, 5};
    // A list works as a doubly linked list
    // It has bidirectional iterators: forward and reverse

    l.push_back(6);  // ➕ Add element at the end
    l.push_front(0); // ➕ Add element at the front

    cout << "List elements: ";
    for(int val : l){        // 📜 Traversing using range-based for loop
        cout << val << " ";
    }
    cout << endl;

    l.pop_back();   // 🗑️ Remove last element (6)
    l.pop_front();  // 🗑️ Remove first element (0)

    cout << "List after pop operations: ";
    for(int val : l){        // 📜 Traversing again to display updated list
        cout << val << " ";
    }
    cout << endl;

    // 📚 Iterating using iterators
    list<int>::iterator it;
    cout << "List elements using iterator: ";   
    for(it = l.begin(); it != l.end(); it++){  // 📜 Forward iteration using iterator
        cout << *it << " ";
    }
    cout << endl;

    // ✅ Mentioned useful functions include:
    // size(), erase(), clear(), front(), back(), insert(), remove(), sort(), reverse(), unique(), merge(), splice()

    return 0;
}
```

---

## 🎓 Summary

✅ `std::list` = Doubly Linked List in C++ STL
✅ Supports fast insertion/deletion at both ends and via iterators
✅ No random access (like vector’s `[]` operator)
✅ Rich utility function set
✅ Ideal for scenarios needing frequent modifications at both ends
