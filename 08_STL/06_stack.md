# 📄 README — STL `stack` in C++

---

## 📖 What is a Stack?

A **stack** is a **LIFO (Last In, First Out)** data structure, where the element added last is removed first.

**Real-life example:**
A stack of plates — you add (push) plates on top, and remove (pop) the top plate first.

---

## 📦 Key Operations of `stack` in C++

| Function  | Description                          |
| :-------- | :----------------------------------- |
| `push(x)` | Adds element `x` to the top of stack |
| `pop()`   | Removes the top element              |
| `top()`   | Returns reference to the top element |
| `size()`  | Returns number of elements in stack  |
| `empty()` | Returns true if stack is empty       |

---

## 📊 Properties

* **Does not support random access**
* Only allows access to the **top element**
* Underlying container can be `deque` (default), `vector`, or `list`
* Operates in **constant time O(1)** for push, pop, and top

---

## 📑 Visual Example

```
Top  -> 5
        4
        3
        2
        1
```

---

## 📦 C++ STL `stack` Example Code

```cpp
#include<bits/stdc++.h>
using namespace std;

int main(){
    // Declare a stack of integers
    stack<int> st;

    // Push elements onto the stack
    st.push(10);
    st.push(20);
    st.push(30);

    // Current Stack:
    // Top -> 30
    //         20
    //         10

    cout << "Top element: " << st.top() << endl; // 30

    // Pop top element
    st.pop(); // removes 30

    cout << "Top element after pop: " << st.top() << endl; // 20

    // Stack size
    cout << "Stack size: " << st.size() << endl; // 2

    // Check if stack is empty
    if(st.empty()){
        cout << "Stack is empty!" << endl;
    } else {
        cout << "Stack is not empty!" << endl;
    }

    return 0;
}
```

---

## 📊 Quick Recap Table

| 📦 Operation | ⏱️ Time Complexity |
| :----------- | :----------------- |
| `push()`     | O(1)               |
| `pop()`      | O(1)               |
| `top()`      | O(1)               |
| `size()`     | O(1)               |
| `empty()`    | O(1)               |

---

## ✅ Summary

✔️ Learned how to declare and use **stack in C++ STL**
✔️ Explored **LIFO behavior** with push, pop, top, size, empty
✔️ Understood constant time complexity of core operations
