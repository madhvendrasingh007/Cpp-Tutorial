# 📄 README — `map`, `multimap`, `unordered_map` in C++ STL

---

## 📖 What are Maps in STL?

C++ STL provides **associative containers** like `map`, `multimap`, and `unordered_map` to store data as **key-value pairs**.
Each of these has different behavior regarding **ordering** and **duplicate keys**.

---

## 📑 Types of Maps & Their Features

| Container       | Key Uniqueness     | Order Type                 | Time Complexity (avg)              |
| :-------------- | :----------------- | :------------------------- | :--------------------------------- |
| `map`           | Unique             | Sorted (Ascending by key)  | O(log N) for insert, search, erase |
| `multimap`      | Duplicates allowed | Sorted (Ascending by key)  | O(log N)                           |
| `unordered_map` | Unique             | No order (uses hash table) | O(1) average, O(N) worst-case      |

---

## 📦 Key Operations

| Function               | Purpose                                              |
| :--------------------- | :--------------------------------------------------- |
| `insert({key, value})` | Inserts a key-value pair                             |
| `emplace(key, value)`  | Constructs pair in-place and inserts it              |
| `count(key)`           | Returns number of elements with the specified key    |
| `erase(key)`           | Removes key-value pair by key                        |
| `find(key)`            | Returns iterator to key-value if found, else `end()` |

---

## 📊 Code Walkthrough 📜

### 📌 `map` Example

* **Stores unique keys in ascending order**
* Operations in **O(log N)** time (uses Red-Black Tree internally)

```cpp
map<string, int> m;
m["tv"] = 100;
m["ac"] = 200;
// insertion using insert() and emplace()
m.insert({"oven", 600});
m.emplace("dishwasher", 700);
```

### 📌 Iterating through Map

```cpp
for(auto it: m){
    cout << it.first << " " << it.second << endl;
}
```

### 📌 Other Map Operations

* `count("tv")` → checks if key exists
* `erase("tv")` → removes entry with key
* `find("ac")` → checks if key exists and returns its value

---

### 📌 `multimap` Example

* **Allows duplicate keys**
* Maintains **ascending order** of keys
* Operations in **O(log N)**

```cpp
multimap<string, int> mm;
mm.insert({"tv", 100});
mm.insert({"tv", 150});
```

### 📌 Iterating through Multimap

```cpp
for(auto it: mm){
    cout << it.first << " " << it.second << endl;
}
```

---

### 📌 `unordered_map` Example

* **Unique keys only**
* **No order guaranteed**
* Operations in **O(1)** average (uses hash table internally)

```cpp
unordered_map<string, int> um;
um["tv"] = 100;
um["ac"] = 200;
```

### 📌 Iterating through Unordered Map

```cpp
for(auto it: um){
    cout << it.first << " " << it.second << endl;
}
```

---

## 📊 Time Complexity Summary

| Operation     | `map`     | `multimap` | `unordered_map` |
| :------------ | :-------- | :--------- | :-------------- |
| Insertion     | O(log N)  | O(log N)   | O(1) average    |
| Deletion      | O(log N)  | O(log N)   | O(1) average    |
| Search (find) | O(log N)  | O(log N)   | O(1) average    |
| Ordering      | Ascending | Ascending  | No order        |

---

## 📦 When to Use What?

* 🔸 **Use `map`** when:
  ✅ You need unique, sorted keys
  ✅ Ordered iteration is needed

* 🔸 **Use `multimap`** when:
  ✅ Duplicate keys are needed
  ✅ Sorted iteration is important

* 🔸 **Use `unordered_map`** when:
  ✅ Fast lookup, insertion, and deletion
  ✅ Order doesn’t matter

---

## 📑 Full Code 📜

```cpp
#include<bits/stdc++.h>
#include<list>
using namespace std;

int main(){
    map<string, int> m;

    m["tv"] = 100;
    m["ac"] = 200;
    m["fridge"] = 300;
    m["washing machine"] = 400;
    m["microwave"] = 500;

    for(auto it: m){
        cout << it.first << " " << it.second << endl;
    }

    m.insert({"oven", 600});
    m.emplace("dishwasher", 700);

    cout << "After insertion:" << endl;
    for(auto it: m){
        cout << it.first << " " << it.second << endl;
    }

    cout<<"count of tv: " << m.count("tv") << endl;
    cout<<"count of oven: " << m.count("oven") << endl;

    m.erase("tv");
    cout << "After erasing tv:" << endl;
    for(auto it: m){
        cout << it.first << " " << it.second << endl;
    }

    if(m.find("ac") != m.end()){
        cout << "Found ac with price: " << m["ac"] << endl;
    } else {
        cout << "ac not found" << endl;
    }

    multimap<string, int> mm;
    mm.insert({"tv", 100});
    mm.insert({"tv", 150});
    mm.insert({"ac", 200});
    mm.insert({"fridge", 300});
    cout << "Multimap contents:" << endl;
    for(auto it: mm){
        cout << it.first << " " << it.second << endl;
    }

    unordered_map<string, int> um;
    um["tv"] = 100;
    um["ac"] = 200;
    um["fridge"] = 300;
    um["washing machine"] = 400;
    um["microwave"] = 500;
    cout << "Unordered map contents:" << endl;
    for(auto it: um){
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}
```

---

## ✅ Summary

✔️ Understood **map**, **multimap**, **unordered\_map** differences
✔️ Practiced insertion, deletion, find, and iteration operations
✔️ Compared time complexities
✔️ Saw where each type is most useful
