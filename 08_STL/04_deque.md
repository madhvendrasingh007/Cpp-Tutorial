# 📖 C++ STL `deque` — Complete Guide with Code Example 🚀

A clear, practical explanation and demonstration of the **C++ STL `deque` container**, covering how it works, supported operations, iterators, and utility functions — with clean code.

---

## 📌 What is `std::deque` in C++?

* `std::deque` (Double-Ended Queue) is a **dynamic array-like container** that allows:

  * **Fast insertion and deletion at both front and back**
  * **Random access (like vector)**
* Internally implemented as a **sequence of dynamically allocated fixed-size arrays (blocks)** connected via a map structure.

---

## 📦 Features of `std::deque`

| Feature                         | `std::deque`                               |
| :------------------------------ | :----------------------------------------- |
| Underlying Structure            | Segmented dynamic array (blocks of arrays) |
| Random Access via Index         | ✅ Supported                                |
| Fast Insert/Delete at Both Ends | ✅ O(1) on average                          |
| Dynamic Size                    | ✅ Grows/shrinks automatically              |
| Bidirectional Iterators         | ✅ Supported                                |

---

## 📚 What’s Covered in This Code

| Topic                              | Description                                                     |
| :--------------------------------- | :-------------------------------------------------------------- |
| Deque Declaration & Initialization | Creating a deque with initial values                            |
| Insertion Operations               | `push_back()`, `push_front()`                                   |
| Deletion Operations                | `pop_back()`, `pop_front()`                                     |
| Traversal with Range-Based Loops   | Using `for(int val : deque)`                                    |
| Traversal with Iterators           | Using `deque<int>::iterator` to iterate manually                |
| Random Access by Index             | Accessing elements using `[]` or `at()`                         |
| Other Functions (Mentioned)        | `size()`, `erase()`, `clear()`, `front()`, `back()`, `insert()` |

---

## 📜 Code Walkthrough

### ✅ Declare and Initialize Deque

```cpp
deque<int> dq = {1, 2, 3, 4, 5};
```

---

### ➕ Insert Elements

```cpp
dq.push_back(6);    // Add element to the end
dq.push_front(0);   // Add element to the front
```

Deque becomes:
`0 1 2 3 4 5 6`

---

### 🔁 Traversing Deque (Range-based Loop)

```cpp
for(int val : dq){
    cout << val << " ";
}
```

---

### 🗑️ Remove Elements

```cpp
dq.pop_back();     // Removes last element (6)
dq.pop_front();    // Removes first element (0)
```

Deque becomes:
`1 2 3 4 5`

---

### 🔢 Random Access

```cpp
cout << dq[2];     // Direct index access (3)
cout << dq.at(2);  // Safer, bounds-checked access (3)
```

---

### 🔄 Traversing with Iterators

```cpp
deque<int>::iterator it;
for(it = dq.begin(); it != dq.end(); it++){
    cout << *it << " ";
}
```

---

## 📑 Common Deque Operations

| Function           | Description                            |
| :----------------- | :------------------------------------- |
| `push_back(val)`   | Add element to the end                 |
| `push_front(val)`  | Add element to the front               |
| `pop_back()`       | Remove last element                    |
| `pop_front()`      | Remove first element                   |
| `size()`           | Number of elements                     |
| `clear()`          | Remove all elements                    |
| `insert(pos, val)` | Insert before given iterator position  |
| `erase(pos)`       | Remove element at iterator position    |
| `front()`          | Returns the first element              |
| `back()`           | Returns the last element               |
| `at(pos)`          | Access element with bounds-checking    |
| `[]` operator      | Access element without bounds-checking |

---

## 📊 Memory Layout

Unlike `vector`, `deque` manages multiple dynamically allocated arrays (blocks), allowing efficient growth at both ends while still supporting random access.

---

## 📜 Full Example Code with Comments

```cpp
#include<bits/stdc++.h>
#include<deque>
using namespace std;

int main(){
    // 📌 Deque in STL-C++
    deque<int> dq = {1, 2, 3, 4, 5};
    // Deque supports fast insertion and deletion at both ends
    // Also supports random access

    dq.push_back(6);   // ➕ Add element at the end
    dq.push_front(0);  // ➕ Add element at the front

    cout << "Deque elements: ";
    for(int val : dq){   // 📜 Traversing using range-based for loop
        cout << val << " ";
    }
    cout << endl;

    dq.pop_back();    // 🗑️ Remove last element (6)
    dq.pop_front();   // 🗑️ Remove first element (0)

    cout << "Deque after pop operations: ";
    for(int val : dq){
        cout << val << " ";
    }
    cout << endl;

    // 📌 Random access
    cout << "Third element using index: " << dq[2] << endl;
    cout << "Third element using at(): " << dq.at(2) << endl;

    // 📌 Iterating using iterators
    deque<int>::iterator it;
    cout << "Deque elements using iterator: ";   
    for(it = dq.begin(); it != dq.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    // ✅ Other useful functions: size(), erase(), clear(), front(), back(), insert(), etc.

    return 0;
}
```

---

## 🎓 Summary

✅ `std::deque` = Double-ended queue with random access support
✅ Allows fast insertion/deletion at both front and back
✅ Supports random access via `[]` and `at()`
✅ Rich utility function set
✅ Internally segmented dynamic arrays for flexibility
