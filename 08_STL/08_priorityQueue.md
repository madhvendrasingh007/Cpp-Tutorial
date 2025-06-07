# 📄 README — STL `priority_queue` in C++

---

## 📖 What is a `priority_queue`?

A **priority queue** is a **container adapter** in C++ STL that provides **constant time access to the largest (by default) element** and allows insertion and deletion in logarithmic time.

**Conceptually: it’s a max-heap by default.**

**Real-life analogy:**
A to-do list app that always picks the highest-priority task to complete next.

---

## 📦 Key Operations of `priority_queue`

| Function  | Description                                               |
| :-------- | :-------------------------------------------------------- |
| `push(x)` | Inserts element `x` into the queue                        |
| `pop()`   | Removes the highest priority (largest by default) element |
| `top()`   | Returns reference to the top (highest priority) element   |
| `size()`  | Returns number of elements in the queue                   |
| `empty()` | Returns true if queue is empty                            |

---

## 📑 Types of `priority_queue`

| Type                   | Description                                               |
| :--------------------- | :-------------------------------------------------------- |
| **Max Heap** (default) | Top element is the **largest**                            |
| **Min Heap**           | Top element is the **smallest** — needs custom comparator |

---

## 📊 Visual Example (Max Heap)

```
[30] 
 /   \
20    10
```

After pushing 40:

```
[40] 
 /   \
30    10
 /
20
```

`top()` will give `40`.

---

## 📦 C++ STL `priority_queue` Example Code

### 📌 Max Heap (Default)

```cpp
#include<bits/stdc++.h>
using namespace std;

int main(){
    // Declare a max heap priority_queue
    priority_queue<int> pq;

    // Push elements into the priority_queue
    pq.push(10);
    pq.push(30);
    pq.push(20);
    pq.push(5);

    // Top element
    cout << "Top element: " << pq.top() << endl; // 30

    // Remove top
    pq.pop(); // removes 30

    cout << "Top after pop: " << pq.top() << endl; // 20

    // Size of priority_queue
    cout << "Size: " << pq.size() << endl;

    return 0;
}
```

---

### 📌 Min Heap (Using greater comparator)

```cpp
#include<bits/stdc++.h>
using namespace std;

int main(){
    // Declare a min heap priority_queue
    priority_queue<int, vector<int>, greater<int>> minHeap;

    minHeap.push(10);
    minHeap.push(30);
    minHeap.push(20);
    minHeap.push(5);

    cout << "Top element (smallest): " << minHeap.top() << endl; // 5

    minHeap.pop();
    cout << "Top after pop: " << minHeap.top() << endl; // 10

    return 0;
}
```

---

## 📊 Quick Comparison Table

| 📦 Operation | ⏱️ Time Complexity |
| :----------- | :----------------- |
| `push()`     | O(log N)           |
| `pop()`      | O(log N)           |
| `top()`      | O(1)               |
| `size()`     | O(1)               |
| `empty()`    | O(1)               |

---

## ✅ Summary

✔️ Learned what a **priority queue** is in C++ STL
✔️ Explored **Max Heap (default)** and **Min Heap** usage
✔️ Understood time complexities for each operation
✔️ Covered real-world analogy and visual representation

---

## 🔥 Bonus Use-cases:

* Dijkstra’s shortest path
* Huffman encoding
* Job scheduling systems
* Event-driven simulation engines
* Real-time task prioritization
