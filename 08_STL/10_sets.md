## 📖 STL `set` Quick Recap

A `set` in C++ STL:

* Stores **unique sorted elements** (ascending by default)
* Backed by a **Red-Black Tree**
* Insertion, Deletion, Search → **O(log N)**

---

## 📑 Important Functions You Mentioned

| Function             | Purpose                                                                | Time Complexity |
| :------------------- | :--------------------------------------------------------------------- | :-------------- |
| `count(value)`       | Returns 1 if value exists, else 0 (since elements are unique in `set`) | O(log N)        |
| `find(value)`        | Returns iterator to the value if found, else `end()`                   | O(log N)        |
| `lower_bound(value)` | Returns iterator to **first element ≥ value**                          | O(log N)        |
| `upper_bound(value)` | Returns iterator to **first element > value**                          | O(log N)        |

---

## 📦 Clean Corrected Code with Explanations

```cpp
#include<bits/stdc++.h>
#include<list>
using namespace std;

int main(){
    set<int> s = {1, 2, 3, 4, 5};

    cout << "Set start (smallest element): " << *s.begin() << endl;

    s.insert(6);
    s.insert(1); // Duplicate value, will not be added
    s.insert(7);

    cout << "Set elements after insertion: ";
    for(auto val : s){
        cout << val << " ";
    }
    cout << endl;

    // 👎 s.end() points to one past the last element — dereferencing it is undefined!
    // So let's correct this by using prev(s.end())
    cout << "Set end (largest element): " << *prev(s.end()) << endl;

    // 📌 count() function — returns 1 if element exists, else 0
    cout << "Count of 4: " << s.count(4) << endl;  // Output: 1
    cout << "Count of 10: " << s.count(10) << endl; // Output: 0

    // 📌 find() function — returns iterator to element if found
    auto it = s.find(3);
    if(it != s.end())
        cout << "Found 3 in set" << endl;
    else
        cout << "3 not found" << endl;

    // 📌 lower_bound() — first element >= given value
    auto lb = s.lower_bound(4);
    if(lb != s.end())
        cout << "Lower bound of 4: " << *lb << endl;
    else
        cout << "No element >= 4 found" << endl;

    // 📌 upper_bound() — first element > given value
    auto ub = s.upper_bound(4);
    if(ub != s.end())
        cout << "Upper bound of 4: " << *ub << endl;
    else
        cout << "No element > 4 found" << endl;

    return 0;
}
```

---

## 📊 Output

```
Set start (smallest element): 1
Set elements after insertion: 1 2 3 4 5 6 7 
Set end (largest element): 7
Count of 4: 1
Count of 10: 0
Found 3 in set
Lower bound of 4: 4
Upper bound of 4: 5
```

---

## ✅ Notes

* **Avoid dereferencing `s.end()`** — it’s a past-the-end iterator.
* `count()` is used when you just need to check presence.
* `find()` gives you an iterator to the element for further operations.
* `lower_bound()` and `upper_bound()` help in range queries, and are efficient because of the internal sorted order.

---

## 📦 Summary

| Function         | Purpose                               | Return Type        |
| :--------------- | :------------------------------------ | :----------------- |
| `count(x)`       | Returns 1 or 0 if x exists or not     | int                |
| `find(x)`        | Iterator to x or `end()` if not found | set<int>::iterator |
| `lower_bound(x)` | Iterator to first ≥ x                 | set<int>::iterator |
| `upper_bound(x)` | Iterator to first > x                 | set<int>::iterator |
