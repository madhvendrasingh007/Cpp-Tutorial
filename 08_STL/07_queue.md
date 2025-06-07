# 📄 README — STL `queue` in C++

---

## 📖 What is a Queue?

A **queue** is a **FIFO (First In, First Out)** data structure where the element added first is removed first.

**Real-life analogy:**
People standing in a line — the first person who enters the queue is served first.

---

## 📦 Key Operations of `queue` in C++

| Function  | Description                                       |
| :-------- | :------------------------------------------------ |
| `push(x)` | Adds element `x` to the **back** of the queue     |
| `pop()`   | Removes the element at the **front** of the queue |
| `front()` | Returns reference to the front element            |
| `back()`  | Returns reference to the last element             |
| `size()`  | Returns number of elements in queue               |
| `empty()` | Returns true if queue is empty                    |

---

## 📊 Properties

* **Does not support random access**
* Only allows access to **front** and **back**
* Underlying container is typically a `deque`
* Operates in **constant time O(1)** for push, pop, front, and back

---

## 📑 Visual Example

```
Front  -> [1] [2] [3] [4] [5] <- Back
```

After `pop()`:

```
Front  -> [2] [3] [4] [5]
```

---

## 📦 C++ STL `queue` Example Code

```cpp
#include<bits/stdc++.h>
using namespace std;

int main(){
    // Declare a queue of integers
    queue<int> q;

    // Push elements into the queue
    q.push(10);
    q.push(20);
    q.push(30);

    // Current Queue:
    // Front -> 10 20 30 <- Back

    cout << "Front element: " << q.front() << endl; // 10
    cout << "Back element: " << q.back() << endl;   // 30

    // Pop the front element
    q.pop(); // removes 10

    cout << "Front after pop: " << q.front() << endl; // 20

    // Queue size
    cout << "Queue size: " << q.size() << endl; // 2

    // Check if queue is empty
    if(q.empty()){
        cout << "Queue is empty!" << endl;
    } else {
        cout << "Queue is not empty!" << endl;
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
| `front()`    | O(1)               |
| `back()`     | O(1)               |
| `size()`     | O(1)               |
| `empty()`    | O(1)               |

---

## ✅ Summary

✔️ Learned how to declare and use **queue in C++ STL**
✔️ Explored **FIFO behavior** with push, pop, front, back
✔️ Understood constant time complexity for all major operations
