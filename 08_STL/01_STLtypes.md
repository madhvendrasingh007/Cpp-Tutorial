# 📖 Difference Between **Sequence Containers** and **Non-Sequence Containers** in C++ STL

The C++ Standard Template Library (STL) is broadly divided into two major container categories:

| 📦 Type                                               | 📌 Description                                             | 📚 Examples                                                            |
| :---------------------------------------------------- | :--------------------------------------------------------- | :--------------------------------------------------------------------- |
| **Sequence Containers**                               | Store data in a **linear sequence (one after another)**    | `vector`, `list`, `deque`, `forward_list`, `array`                     |
| **Non-Sequence Containers** (Associative & Unordered) | Store data based on **keys, sorted order, or hashed keys** | `set`, `map`, `unordered_set`, `unordered_map`, `multiset`, `multimap` |

---

## 📑 Sequence Containers — Linear, Ordered

### 📌 What They Are:

* Store elements **in a linear sequence**
* Elements can be accessed by position (like an array)
* Maintains **insertion order** (except for some operations like sorting)
* Provide **iterators** for traversing in sequence

### 📋 Examples:

| Container      | Key Features                                                               |
| :------------- | :------------------------------------------------------------------------- |
| `vector`       | Dynamic array, random access, fast insertion at end                        |
| `deque`        | Double-ended queue, fast insertion/removal at both front and back          |
| `list`         | Doubly linked list, fast insertion/removal anywhere (but no random access) |
| `forward_list` | Singly linked list                                                         |
| `array`        | Fixed-size array                                                           |

---

## 📑 Non-Sequence Containers — Key-based or Hashed Storage

### 📌 What They Are:

* Store elements **not in a sequence**, but based on:

  * **Sorted keys (Associative containers)**
  * **Hashed keys (Unordered containers)**
* Provide **fast retrieval using keys**
* No guaranteed order of elements in **unordered containers**

### 📋 Associative Containers (Sorted)

| Container  | Key Features                                      |
| :--------- | :------------------------------------------------ |
| `set`      | Unique sorted elements                            |
| `map`      | Key-value pairs with unique keys, sorted by key   |
| `multiset` | Allows duplicate sorted elements                  |
| `multimap` | Allows multiple key-value pairs with the same key |

---

### 📋 Unordered Containers (Hashed)

| Container            | Key Features                                    |
| :------------------- | :---------------------------------------------- |
| `unordered_set`      | Unique elements, no specific order, fast lookup |
| `unordered_map`      | Key-value pairs, unique keys, no specific order |
| `unordered_multiset` | Allows duplicate elements                       |
| `unordered_multimap` | Allows multiple values for the same key         |

---

## 📊 Quick Comparison Table

| 📦 Property            | Sequence Containers                                  | Non-Sequence Containers                               |
| :--------------------- | :--------------------------------------------------- | :---------------------------------------------------- |
| Storage Order          | Linear, insertion order                              | Sorted by key (Associative) / No order (Unordered)    |
| Random Access by Index | Available (like `vector`, `deque`)                   | Not available                                         |
| Key-based Access       | ❌ Not supported                                      | ✅ Supported                                           |
| Use-case               | When order matters, and index-based access is needed | When fast lookup, insertion, or sorted data is needed |
| Example                | `vector`, `deque`, `list`                            | `set`, `map`, `unordered_map`                         |

---

## 📦 Visual Analogy

* **Sequence Container:**
  📦📦📦📦 (Position-based — like a row of boxes)

* **Associative Container (Set/Map):**
  📦📦📦 sorted by key internally (like a sorted dictionary)

* **Unordered Container (Unordered Map/Set):**
  📦📦📦 randomly placed but linked by a hashed key (like scattered boxes with labels)

---

## ✅ Summary

* **Use Sequence Containers:** when **order** and **position-based access** matter.
* **Use Associative Containers:** when you need **sorted key-value pairs** or **unique sorted elements**.
* **Use Unordered Containers:** when you need **fast lookup, insertion and deletion** with no ordering guarantee.
