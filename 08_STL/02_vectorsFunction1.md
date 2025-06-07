# 📖 C++ Vector Complete Guide 🚀

Your all-in-one tutorial and quick reference for mastering **vectors in C++** — covering declarations, memory management, essential functions, and advanced tips.

---

## 📌 What Are Vectors?

Vectors are **dynamic arrays** in C++ provided by the **Standard Template Library (STL)**.
They can automatically resize themselves when elements are added or removed, managing memory dynamically behind the scenes.

---

## 📋 Table of Contents

* [Vector Declaration](#vector-declaration)
* [Adding Elements](#adding-elements)
* [Size vs Capacity](#size-vs-capacity)
* [Iteration Techniques](#iteration-techniques)
* [Removing Elements](#removing-elements)
* [Accessing Elements](#accessing-elements)
* [Vector Initialization Techniques](#vector-initialization-techniques)
* [Important Functions](#important-functions)
* [Performance Tips](#performance-tips)
* [Memory Layout](#memory-layout)
* [Complete Example Code](#complete-example-code)

---

## 📦 Vector Declaration

```cpp
vector<int> vec;
```

* Creates an **empty vector** for integers.
* Memory is dynamically managed.
* Size initially 0, capacity increases as needed.

**Other declarations:**

```cpp
vector<int> vec(5);         // Vector with 5 elements (all 0)
vector<int> vec(5, 10);     // Vector with 5 elements (all 10)
vector<int> vec2 = {1, 2, 3, 4, 5};  // List initialization
```

---

## ➕ Adding Elements

```cpp
vec.push_back(10);
vec.push_back(20);
```

* **push\_back()** adds element at the end.
* Time Complexity: `O(1)` on average, `O(n)` when capacity is exceeded.

**Difference between `push_back()` and `emplace_back()`**

| push\_back()            | emplace\_back()                         |
| :---------------------- | :-------------------------------------- |
| Adds a ready-made value | Constructs an element directly in place |
| May copy/move value     | No copy, directly constructs            |

---

## 📏 Size vs Capacity

| Property   | Meaning                   |
| :--------- | :------------------------ |
| size()     | Number of elements stored |
| capacity() | Memory allocated (≥ size) |

**Example**

```cpp
cout << vec.size() << endl;
cout << vec.capacity() << endl;
```

---

## 🔄 Iteration Techniques

```cpp
for(int val : vec) { cout << val << " "; } // Range-based  
for(int i = 0; i < vec.size(); i++) { cout << vec[i] << " "; } // Index  
for(auto it = vec.begin(); it != vec.end(); ++it) { cout << *it << " "; } // Iterator  
```

---

## 🗑️ Removing Elements

```cpp
vec.pop_back();
```

* Removes the last element.
* Reduces size by 1.
* Time Complexity: `O(1)`

---

## 🎯 Accessing Elements

| Method        | Bounds Checking | Use                                            |
| :------------ | :-------------- | :--------------------------------------------- |
| `vec[i]`      | ❌ No            | Fast access if index known                     |
| `vec.at(i)`   | ✅ Yes           | Safe access, throws exception if out-of-bounds |
| `vec.front()` | ❌ No            | First element                                  |
| `vec.back()`  | ❌ No            | Last element                                   |

---

## 🏗️ Vector Initialization Techniques

```cpp
vector<int> vec2 = {1, 2, 3};
vector<int> vec3(3, 10);
vector<int> vec4(vec2);
```

---

## 📊 Important Functions

```cpp
vec.empty();          // Checks if vector is empty
vec.size();           // Number of elements
vec.clear();          // Removes all elements
vec.resize(10);       // Resize to 10 elements
vec.reserve(100);     // Reserve capacity for 100 elements
```

---

## 🚀 Performance Tips

* Use **reserve()** when you know the size ahead of time to avoid frequent reallocations.
* Prefer **emplace\_back()** over **push\_back()** for complex objects.
* Pass vectors as `const vector<int>&` to avoid copying.

---

## 🧠 Memory Layout

```
Stack (metadata):         ┌────────────────┐
                          │ ptr to data    │
                          │ size           │
                          │ capacity       │
                          └────────────────┘
                                   │
                                   ▼
Heap (actual data):       [10][20][30][__]
```

---

## 📜 Complete Example Code

```cpp
#include<iostream>
#include<vector> // include the vector header
using namespace std;

int main() {
    // 📌 1️⃣ Declare an empty vector of integers
    vector<int> vec;

    // 📌 2️⃣ Add elements to the end using push_back()
    vec.push_back(10); // Adds 10
    vec.push_back(20); // Adds 20
    vec.push_back(30); // Adds 30

    // 📌 3️⃣ Check size and capacity
    cout << "Size: " << vec.size() << endl;
    cout << "Capacity: " << vec.capacity() << endl;

    // 📌 4️⃣ Range-based for loop (copies values into val)
    cout << "Elements: ";
    for(int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    // 📌 5️⃣ Use emplace_back() - constructs element in-place (faster for complex objects)
    vec.emplace_back(40); // Adds 40

    // 📌 6️⃣ Remove last element using pop_back()
    vec.pop_back(); // Removes 40

    // 📌 7️⃣ Access elements using various methods
    cout << "At index 1 (using at()): " << vec.at(1) << endl;
    cout << "At index 1 (using []): " << vec[1] << endl;
    cout << "Front element: " << vec.front() << endl;
    cout << "Back element: " << vec.back() << endl;

    // 📌 8️⃣ Vector Initialization Techniques
    vector<int> vec2 = {1, 2, 3, 4, 5}; // List initialization
    vector<int> vec3(3, 10);            // 3 elements of value 10
    vector<int> vec4(vec2);             // Copy of vec2

    // 📌 9️⃣ Iterate using iterators
    cout << "vec2 elements: ";
    for(auto it = vec2.begin(); it != vec2.end(); ++it){
        cout << *it << " "; // dereferencing iterator to get value
    }
    cout << endl;

    // 📌 1️⃣0️⃣ Important Functions Demo
    cout << "vec2 is empty? " << (vec2.empty() ? "Yes" : "No") << endl;
    cout << "vec2 size: " << vec2.size() << endl;
    vec2.clear(); // removes all elements
    cout << "vec2 size after clear: " << vec2.size() << endl;

    return 0;
}
```

---

## 🎓 Summary

✅ **Vectors are dynamic, resizable arrays** in C++
✅ Support **multiple access and iteration methods**
✅ Easy to manage memory using **size, capacity, reserve**
✅ Efficient with **push\_back(), emplace\_back(), and iterators**

**Vectors = Power of dynamic memory management + simplicity of arrays 🔥**
