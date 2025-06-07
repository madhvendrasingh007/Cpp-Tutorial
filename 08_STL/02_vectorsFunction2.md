# 🔧 Vector Operations - Complete Guide in C++

## 📋 Overview

This guide breaks down essential operations on **C++ vectors** with step-by-step illustrations, code snippets, time complexity analysis, best practices, and a final comprehensive C++ code example you can run directly.

---

## 📖 Table of Contents

1. Initial Vector Setup
2. `erase()` - Remove Elements
3. Range-based `erase()`
4. `insert()` - Add Elements
5. Multiple Insert Variations
6. `clear()` - Remove All Elements
7. `empty()` - Check if Vector is Empty
8. Time Complexity Analysis
9. Performance Comparison
10. Iterator Invalidation
11. Alternative Approaches
12. Best Practices
13. Full Example Code

---

## 1️⃣ Initial Vector Setup

```cpp
vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};
```

**Initial State:**

| Index | 0  | 1  | 2  | 3  | 4  | 5  | 6  | 7  | 8  |
| :---- | :- | :- | :- | :- | :- | :- | :- | :- | :- |
| Value | 1  | 2  | 3  | 4  | 5  | 6  | 7  | 8  | 9  |

---

## 2️⃣ `erase()` - Remove Elements

### Remove Single Elements:

```cpp
vec.erase(vec.begin());        // Remove first element
vec.erase(vec.begin() + 2);    // Remove element at index 2
```

* **Shifts all elements after erased position to the left**
* Returns iterator to next valid element
* **Time Complexity:** O(n)

---

## 3️⃣ Range-Based `erase()`

```cpp
vec.erase(vec.begin() + 4, vec.end());
```

* Removes all elements from index `4` to end.
* **Syntax:**
  `vec.erase(start_iterator, end_iterator)`
  (Note: end is exclusive)

---

## 4️⃣ `insert()` - Add Elements

### Insert Single Elements:

```cpp
vec.insert(vec.begin() + 1, 10);
vec.insert(vec.begin() + 3, 20);
vec.insert(vec.begin() + 5, 30);
```

* **Shifts elements right to make space**
* Returns iterator to inserted element
* **Time Complexity:** O(n)

---

## 5️⃣ Multiple `insert()` Variations

### Single Element:

```cpp
vec.insert(vec.begin() + 2, 99);
```

### Multiple Copies:

```cpp
vec.insert(vec.begin() + 2, 3, 77);  // Inserts three 77's
```

### Range Insert:

```cpp
vector<int> source = {100, 200, 300};
vec.insert(vec.begin() + 2, source.begin(), source.end());
```

### Initializer List:

```cpp
vec.insert(vec.begin() + 2, {400, 500, 600});
```

---

## 6️⃣ `clear()` - Remove All Elements

```cpp
vec.clear();
```

* **Size becomes 0**
* **Capacity remains unchanged**
* **Time Complexity:**

  * O(1) for simple types
  * O(n) for complex objects

---

## 7️⃣ `empty()` - Check if Vector is Empty

```cpp
if(vec.empty()) {
    cout << "Empty!" << endl;
}
```

**Better than `size() == 0`** in terms of readability.

---

## 8️⃣ Time Complexity Summary

| Operation     | Time Complexity      | Notes                               |
| :------------ | :------------------- | :---------------------------------- |
| `erase()`     | O(n)                 | Shifts elements left                |
| `insert()`    | O(n)                 | Shifts elements right               |
| `clear()`     | O(1) / O(n)          | Clears elements                     |
| `empty()`     | O(1)                 | Checks if size is 0                 |
| `at()`/`[]`   | O(1)                 | Direct access                       |
| `push_back()` | O(1) avg, O(n) worst | Adds to end (reallocation possible) |
| `pop_back()`  | O(1)                 | Removes last element                |

---

## 9️⃣ Performance Comparison

**Fast O(1) Operations:**

* `push_back()`
* `pop_back()`
* `front()`, `back()`, `at()`
* `empty()`

**Slower O(n) Operations:**

* `erase()`
* `insert()` (except at end)

---

## 🔟 Iterator Invalidation

Be careful after `erase()` or `insert()`, as iterators and references may become invalid.

**Safe Removal Pattern:**

```cpp
for(auto it = vec.begin(); it != vec.end();) {
    if(*it % 2 == 0)
        it = vec.erase(it);
    else
        ++it;
}
```

---

## 1️⃣1️⃣ Alternative Approaches

**Multiple Erase:**

```cpp
// Inefficient
vec.erase(vec.begin() + 2);
vec.erase(vec.begin() + 4);

// Better
vec.erase(vec.begin() + 2, vec.begin() + 5);
```

**Multiple Insert:**

```cpp
// Inefficient
vec.insert(vec.begin() + 1, 10);
vec.insert(vec.begin() + 3, 20);

// Better
vector<int> to_insert = {10, 20};
vec.insert(vec.begin() + 1, to_insert.begin(), to_insert.end());
```

---

## 1️⃣2️⃣ Best Practices

✅ Prefer `push_back()` and `pop_back()`
✅ Use `reserve()` before multiple insertions
✅ Use `emplace()` for complex objects
✅ Combine insertions with batch `insert()`

---

## 🎁 1️⃣3️⃣ Full Example C++ Code

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Initial vector setup
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Erase operations
    vec.erase(vec.begin());        // Remove first element (1)
    vec.erase(vec.begin() + 2);    // Remove element at index 2 (which is 4 after shift)

    // Range-based erase: remove elements from index 4 to end
    if (vec.size() >= 5)
        vec.erase(vec.begin() + 4, vec.end());

    // Insert operations
    vec.insert(vec.begin() + 1, 10);  // Insert 10 at index 1
    if (vec.size() >= 3)
        vec.insert(vec.begin() + 3, 20);  // Insert 20 at index 3
    if (vec.size() >= 5)
        vec.insert(vec.begin() + 5, 30);  // Insert 30 at index 5

    // Single element insert
    if (vec.size() >= 2)
        vec.insert(vec.begin() + 2, 99);  // Insert 99 at index 2

    // Multiple same elements insert
    if (vec.size() >= 2)
        vec.insert(vec.begin() + 2, 3, 77);  // Insert three 77's at index 2

    // Range insert from another vector
    vector<int> source = {100, 200, 300};
    if (vec.size() >= 2)
        vec.insert(vec.begin() + 2, source.begin(), source.end());

    // Initializer list insert
    if (vec.size() >= 2)
        vec.insert(vec.begin() + 2, {400, 500, 600});

    // Check if vector is empty
    if (vec.empty()) {
        cout << "The vector is empty." << endl;
    } else {
        cout << "Vector contents: ";
        for (auto x : vec) cout << x << " ";
        cout << endl;
    }

    // Remove even numbers safely
    for (auto it = vec.begin(); it != vec.end();) {
        if (*it % 2 == 0) {
            it = vec.erase(it);  // erase returns next valid iterator
        } else {
            ++it;
        }
    }

    // Display vector after removing even numbers
    cout << "After removing even numbers: ";
    for (auto x : vec) cout << x << " ";
    cout << endl;

    // Clear all elements
    vec.clear();

    // Final empty check
    if (vec.empty()) {
        cout << "Vector is now completely empty." << endl;
    }

    return 0;
}
```

---

## 🎓 Summary

✔️ Demonstrated essential vector operations:

* `erase()`, `insert()`, `clear()`, `empty()`
  ✔️ Explained iterator invalidation and safe removal
  ✔️ Shared time complexities and performance tips
  ✔️ Provided a clean, annotated working code example
