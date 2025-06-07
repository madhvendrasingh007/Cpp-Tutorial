# 📄 README — STL `pair` and `vector<pair>` in C++

---

## 📖 What’s Covered in This Code?

This C++ code demonstrates the following STL concepts:

### 📌 1️⃣ `pair` in C++

* A `pair` is a simple container to store two values (possibly of different types) together.
* Access elements with `.first` and `.second`.

**Usage**

```cpp
pair<int, int> p = {1, 2};
cout << p.first << ", " << p.second;
```

---

### 📌 2️⃣ Nested `pair`

* You can nest pairs within pairs to store grouped values.

**Usage**

```cpp
pair<int, pair<int, int>> p3 = {1, {2, 3}};
cout << p3.first << ", " << p3.second.first << ", " << p3.second.second;
```

---

### 📌 3️⃣ `vector<pair<int, int>>`

* A vector of pairs is commonly used to store data in key-value-like or coordinate formats.

**Usage**

```cpp
vector<pair<int, int>> v = {{1, 2}, {3, 4}};
```

---

### 📌 4️⃣ `push_back` vs `emplace_back`

| Method           | Description                                                                   |
| :--------------- | :---------------------------------------------------------------------------- |
| `push_back()`    | Constructs an object **outside** the container and copies it inside.          |
| `emplace_back()` | Constructs the object **in place** directly in the memory location of vector. |

**Why use `emplace_back`?**

* Avoids extra copy/move operation — more efficient for complex objects.

**Usage**

```cpp
v.push_back({7, 8});             // Creates pair and copies it
v.emplace_back(9, 10);           // Constructs pair directly in-place
```

---

## 📊 Quick Summary Table

| 📦 Feature                         | ✅ Supported |
| :--------------------------------- | :---------- |
| Nested pairs                       | ✔️          |
| Vector of pairs                    | ✔️          |
| Iterating over vector pairs        | ✔️          |
| `push_back` vs `emplace_back` demo | ✔️          |

---

## 📌 Corrected Final C++ Code

```cpp
#include<bits/stdc++.h>
#include<list>
using namespace std;

int main(){
    // Basic pair examples
    pair<int, int> p1 = {1, 2};
    pair<string, int> p2 = {"hello", 3};

    cout << "Pair 1: " << p1.first << ", " << p1.second << endl;
    cout << "Pair 2: " << p2.first << ", " << p2.second << endl;
    cout << "Size of pair<int, int>: " << sizeof(p1) << endl;

    // Nested pair example
    pair<int, pair<int, int>> p3 = {1, {2, 3}};
    cout << "Pair 3: " << p3.first << ", " << p3.second.first << ", " << p3.second.second << endl;

    // Vector of pairs
    vector<pair<int, int>> v = {{1, 2}, {3, 4}, {5, 6}};
    cout << "Vector of pairs:" << endl;
    for(const auto& p : v) {
        cout << p.first << ", " << p.second << endl;
    }

    // Adding pairs using push_back and emplace_back
    v.push_back({7, 8});
    v.emplace_back(9, 10); // emplace_back constructs the pair in place

    cout << "After adding new pairs:" << endl;
    for(const auto& p : v) {
        cout << p.first << ", " << p.second << endl;
    }

    // Note: 
    // push_back creates a copy of the pair and adds it to the vector
    // emplace_back constructs the pair directly in the memory location of the vector

    return 0;
}
```

---

## 📚 Summary

✔️ Learned how to work with **STL `pair` and nested pairs**
✔️ Created and iterated through a **vector of pairs**
✔️ Understood **push\_back vs emplace\_back** efficiency difference
