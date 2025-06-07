# 🧮 STL Algorithms & Comparators in C++

<div align="center">

![C++](https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![STL](https://img.shields.io/badge/STL-Algorithms-red?style=for-the-badge)
![Efficiency](https://img.shields.io/badge/Performance-Optimized-green?style=for-the-badge)

*Master the power of STL algorithms and custom comparators for efficient C++ programming*

</div>

---

## 📖 What are STL Algorithms?

STL algorithms are **pre-written, optimized functions** that operate on containers through iterators. They provide efficient implementations of common operations like sorting, searching, transforming, and manipulating data.

### 🎯 Key Benefits:
- **Highly Optimized**: Battle-tested implementations
- **Generic**: Work with any container type
- **Consistent Interface**: Uniform usage pattern
- **Well-Tested**: Fewer bugs than custom implementations

---

## 🔍 Categories of STL Algorithms

| Category | Purpose | Examples |
|----------|---------|----------|
| **Sorting** | Arrange elements in order | `sort()`, `partial_sort()`, `stable_sort()` |
| **Searching** | Find elements or patterns | `find()`, `binary_search()`, `lower_bound()` |
| **Transforming** | Modify or convert elements | `transform()`, `replace()`, `reverse()` |
| **Numeric** | Mathematical operations | `accumulate()`, `inner_product()` |
| **Set Operations** | Work with sorted ranges | `set_union()`, `set_intersection()` |
| **Heap Operations** | Priority queue operations | `make_heap()`, `push_heap()`, `pop_heap()` |

---

## 🔢 Sorting Algorithms

### 1. **`sort()` - Most Common Sorting**

```cpp
#include <algorithm>
#include <vector>

vector<int> numbers = {64, 34, 25, 12, 22, 11, 90};

// Ascending order (default)
sort(numbers.begin(), numbers.end());
// Result: [11, 12, 22, 25, 34, 64, 90]

// Descending order
sort(numbers.begin(), numbers.end(), greater<int>());
// Result: [90, 64, 34, 25, 22, 12, 11]
```

### 2. **`stable_sort()` - Maintains Relative Order**

```cpp
struct Student {
    string name;
    int grade;
};

vector<Student> students = {
    {"Alice", 85}, {"Bob", 90}, {"Charlie", 85}, {"David", 90}
};

// Sort by grade, maintaining original order for same grades
stable_sort(students.begin(), students.end(), 
    [](const Student& a, const Student& b) {
        return a.grade < b.grade;
    });
```

### 3. **`partial_sort()` - Sort Only First N Elements**

```cpp
vector<int> numbers = {5, 2, 8, 1, 9, 3};

// Sort only first 3 elements
partial_sort(numbers.begin(), numbers.begin() + 3, numbers.end());
// Result: [1, 2, 3, 8, 9, 5] - first 3 are sorted
```

### 📊 Sorting Algorithms Comparison

| Algorithm | Time Complexity | Stable | Use Case |
|-----------|----------------|--------|----------|
| `sort()` | O(n log n) | ❌ No | General purpose, fastest |
| `stable_sort()` | O(n log n) | ✅ Yes | When relative order matters |
| `partial_sort()` | O(n log k) | ❌ No | When you need only top K elements |

---

## ⚖️ Comparators in C++

Comparators define **how elements should be compared** during sorting and searching operations.

### 1. **Function Objects (Functors)**

```cpp
// Custom comparator for descending order
struct DescendingComparator {
    bool operator()(int a, int b) const {
        return a > b;  // Return true if a should come before b
    }
};

vector<int> numbers = {3, 1, 4, 1, 5};
sort(numbers.begin(), numbers.end(), DescendingComparator());
// Result: [5, 4, 3, 1, 1]
```

### 2. **Lambda Functions (C++11+)**

```cpp
vector<int> numbers = {3, 1, 4, 1, 5};

// Ascending order
sort(numbers.begin(), numbers.end(), [](int a, int b) {
    return a < b;
});

// Descending order
sort(numbers.begin(), numbers.end(), [](int a, int b) {
    return a > b;
});

// Sort by absolute value
vector<int> nums = {-3, 1, -4, 1, 5};
sort(nums.begin(), nums.end(), [](int a, int b) {
    return abs(a) < abs(b);
});
// Result: [1, 1, -3, -4, 5]
```

### 3. **Function Pointers**

```cpp
bool ascending(int a, int b) {
    return a < b;
}

bool descending(int a, int b) {
    return a > b;
}

vector<int> numbers = {3, 1, 4, 1, 5};
sort(numbers.begin(), numbers.end(), descending);
```

### 4. **Built-in Comparators**

```cpp
// Standard library provides common comparators
sort(numbers.begin(), numbers.end(), less<int>());      // Ascending
sort(numbers.begin(), numbers.end(), greater<int>());   // Descending
sort(numbers.begin(), numbers.end(), less_equal<int>());
sort(numbers.begin(), numbers.end(), greater_equal<int>());
```

---

## 🔍 Searching Algorithms

### 1. **Linear Search**

```cpp
vector<int> numbers = {1, 3, 5, 7, 9};

// Find element
auto it = find(numbers.begin(), numbers.end(), 5);
if (it != numbers.end()) {
    cout << "Found 5 at position: " << distance(numbers.begin(), it) << endl;
}

// Find with condition
auto it2 = find_if(numbers.begin(), numbers.end(), [](int x) {
    return x > 6;
});
```

### 2. **Binary Search (on sorted data)**

```cpp
vector<int> sorted_numbers = {1, 3, 5, 7, 9, 11, 13};

// Check if element exists
bool found = binary_search(sorted_numbers.begin(), sorted_numbers.end(), 7);

// Find position where element should be inserted
auto lower = lower_bound(sorted_numbers.begin(), sorted_numbers.end(), 6);
auto upper = upper_bound(sorted_numbers.begin(), sorted_numbers.end(), 6);

// Equal range (for duplicates)
auto range = equal_range(sorted_numbers.begin(), sorted_numbers.end(), 7);
```

---

## 🔄 Transformation Algorithms

### 1. **`transform()` - Apply Function to Elements**

```cpp
vector<int> numbers = {1, 2, 3, 4, 5};
vector<int> squares(numbers.size());

// Square each element
transform(numbers.begin(), numbers.end(), squares.begin(), 
    [](int x) { return x * x; });
// squares: [1, 4, 9, 16, 25]

// Transform two ranges
vector<int> a = {1, 2, 3};
vector<int> b = {4, 5, 6};
vector<int> sum(3);

transform(a.begin(), a.end(), b.begin(), sum.begin(),
    [](int x, int y) { return x + y; });
// sum: [5, 7, 9]
```

### 2. **`for_each()` - Apply Function to Each Element**

```cpp
vector<int> numbers = {1, 2, 3, 4, 5};

// Print each element
for_each(numbers.begin(), numbers.end(), [](int x) {
    cout << x << " ";
});

// Modify elements in place
for_each(numbers.begin(), numbers.end(), [](int& x) {
    x *= 2;  // Double each element
});
```

---

## 🧮 Numeric Algorithms

### 1. **`accumulate()` - Sum or Reduce**

```cpp
vector<int> numbers = {1, 2, 3, 4, 5};

// Sum all elements
int sum = accumulate(numbers.begin(), numbers.end(), 0);
// Result: 15

// Product of all elements
int product = accumulate(numbers.begin(), numbers.end(), 1, multiplies<int>());
// Result: 120

// Custom operation
int sum_of_squares = accumulate(numbers.begin(), numbers.end(), 0,
    [](int acc, int x) { return acc + x * x; });
// Result: 55 (1² + 2² + 3² + 4² + 5²)
```

### 2. **`inner_product()` - Dot Product**

```cpp
vector<int> a = {1, 2, 3};
vector<int> b = {4, 5, 6};

int dot_product = inner_product(a.begin(), a.end(), b.begin(), 0);
// Result: 32 (1*4 + 2*5 + 3*6)
```

---

## 🎯 Advanced Comparator Examples

### 1. **Sorting Custom Objects**

```cpp
struct Person {
    string name;
    int age;
    double salary;
};

vector<Person> people = {
    {"Alice", 30, 50000},
    {"Bob", 25, 45000},
    {"Charlie", 35, 60000}
};

// Sort by age
sort(people.begin(), people.end(), [](const Person& a, const Person& b) {
    return a.age < b.age;
});

// Sort by multiple criteria
sort(people.begin(), people.end(), [](const Person& a, const Person& b) {
    if (a.age != b.age) return a.age < b.age;  // Primary: age
    return a.salary > b.salary;                 // Secondary: salary (descending)
});
```

### 2. **Sorting Strings**

```cpp
vector<string> words = {"apple", "Banana", "cherry", "Date"};

// Case-sensitive (default)
sort(words.begin(), words.end());
// Result: ["Banana", "Date", "apple", "cherry"]

// Case-insensitive
sort(words.begin(), words.end(), [](const string& a, const string& b) {
    return lexicographical_compare(
        a.begin(), a.end(),
        b.begin(), b.end(),
        [](char c1, char c2) { return tolower(c1) < tolower(c2); }
    );
});

// By length
sort(words.begin(), words.end(), [](const string& a, const string& b) {
    return a.length() < b.length();
});
```

### 3. **Sorting Pairs and Tuples**

```cpp
vector<pair<int, string>> data = {{3, "three"}, {1, "one"}, {2, "two"}};

// Sort by first element (default)
sort(data.begin(), data.end());

// Sort by second element
sort(data.begin(), data.end(), [](const auto& a, const auto& b) {
    return a.second < b.second;
});

// For tuples
vector<tuple<int, string, double>> records = {
    {1, "Alice", 3.8},
    {2, "Bob", 3.6},
    {1, "Charlie", 3.9}
};

// Sort by first element, then by third element
sort(records.begin(), records.end(), [](const auto& a, const auto& b) {
    if (get<0>(a) != get<0>(b)) return get<0>(a) < get<0>(b);
    return get<2>(a) > get<2>(b);  // Higher GPA first
});
```

---

## 🔧 Set Operations

```cpp
vector<int> set1 = {1, 2, 3, 4, 5};
vector<int> set2 = {3, 4, 5, 6, 7};
vector<int> result;

// Union
set_union(set1.begin(), set1.end(), set2.begin(), set2.end(),
          back_inserter(result));
// result: {1, 2, 3, 4, 5, 6, 7}

result.clear();

// Intersection
set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(),
                back_inserter(result));
// result: {3, 4, 5}

result.clear();

// Difference
set_difference(set1.begin(), set1.end(), set2.begin(), set2.end(),
              back_inserter(result));
// result: {1, 2}
```

---

## 🏔️ Heap Operations

```cpp
vector<int> numbers = {3, 1, 4, 1, 5, 9, 2, 6};

// Create max heap
make_heap(numbers.begin(), numbers.end());
// numbers is now a valid heap

// Add element to heap
numbers.push_back(8);
push_heap(numbers.begin(), numbers.end());

// Remove max element
pop_heap(numbers.begin(), numbers.end());
int max_element = numbers.back();
numbers.pop_back();

// Sort heap (destroys heap property)
sort_heap(numbers.begin(), numbers.end());
```

---

## ⚡ Performance Tips

### 1. **Choose Right Algorithm**
```cpp
// ❌ Slow for large data
for (auto& x : vec) {
    if (x == target) return true;
}

// ✅ Fast for sorted data
sort(vec.begin(), vec.end());
bool found = binary_search(vec.begin(), vec.end(), target);
```

### 2. **Use Lambda Captures Wisely**
```cpp
// ❌ Captures by value (copying)
sort(vec.begin(), vec.end(), [threshold](int a, int b) {
    return abs(a - threshold) < abs(b - threshold);
});

// ✅ Captures by reference (no copying)
sort(vec.begin(), vec.end(), [&threshold](int a, int b) {
    return abs(a - threshold) < abs(b - threshold);
});
```

### 3. **Reserve Space for Output**
```cpp
vector<int> input = {1, 2, 3, 4, 5};
vector<int> output;
output.reserve(input.size());  // ✅ Avoid reallocations

transform(input.begin(), input.end(), back_inserter(output),
    [](int x) { return x * 2; });
```

---

## 📚 Algorithm Complexity Quick Reference

| Algorithm | Time Complexity | Space Complexity | Notes |
|-----------|----------------|------------------|-------|
| `sort()` | O(n log n) | O(log n) | Not stable |
| `stable_sort()` | O(n log n) | O(n) | Stable |
| `partial_sort()` | O(n log k) | O(1) | k = number of sorted elements |
| `find()` | O(n) | O(1) | Linear search |
| `binary_search()` | O(log n) | O(1) | Requires sorted data |
| `transform()` | O(n) | O(1) | Plus output space |
| `accumulate()` | O(n) | O(1) | Single pass |

---

## 🎓 Best Practices

### 1. **Always Use STL Algorithms Over Loops**
```cpp
// ❌ Manual loop
int sum = 0;
for (int x : vec) sum += x;

// ✅ STL algorithm
int sum = accumulate(vec.begin(), vec.end(), 0);
```

### 2. **Prefer Lambda Over Function Objects for Simple Cases**
```cpp
// ❌ Verbose for simple comparisons
struct Comparator {
    bool operator()(int a, int b) const { return a > b; }
};
sort(vec.begin(), vec.end(), Comparator());

// ✅ Concise lambda
sort(vec.begin(), vec.end(), [](int a, int b) { return a > b; });
```

### 3. **Use Range-Based Algorithms (C++20)**
```cpp
#include <ranges>

// C++20 ranges (if available)
auto sorted = vec | std::views::transform([](int x) { return x * 2; })
                  | std::views::filter([](int x) { return x > 10; });
```

---

## 💻 Complete Example Code

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
using namespace std;

struct Student {
    string name;
    int age;
    double gpa;
};

int main() {
    // === Basic Sorting ===
    vector<int> numbers = {64, 34, 25, 12, 22, 11, 90};
    
    cout << "Original: ";
    for (int x : numbers) cout << x << " ";
    cout << endl;
    
    sort(numbers.begin(), numbers.end());
    cout << "Sorted ascending: ";
    for (int x : numbers) cout << x << " ";
    cout << endl;
    
    sort(numbers.begin(), numbers.end(), greater<int>());
    cout << "Sorted descending: ";
    for (int x : numbers) cout << x << " ";
    cout << endl;
    
    // === Custom Comparator ===
    vector<Student> students = {
        {"Alice", 20, 3.8},
        {"Bob", 19, 3.9},
        {"Charlie", 21, 3.7},
        {"David", 20, 3.9}
    };
    
    // Sort by GPA (descending), then by age (ascending)
    sort(students.begin(), students.end(), [](const Student& a, const Student& b) {
        if (a.gpa != b.gpa) return a.gpa > b.gpa;
        return a.age < b.age;
    });
    
    cout << "\nStudents sorted by GPA (desc) then age (asc):" << endl;
    for (const auto& s : students) {
        cout << s.name << " (Age: " << s.age << ", GPA: " << s.gpa << ")" << endl;
    }
    
    // === Searching ===
    vector<int> sorted_nums = {1, 3, 5, 7, 9, 11, 13, 15};
    
    bool found = binary_search(sorted_nums.begin(), sorted_nums.end(), 7);
    cout << "\n7 found in sorted array: " << (found ? "Yes" : "No") << endl;
    
    auto lower = lower_bound(sorted_nums.begin(), sorted_nums.end(), 8);
    cout << "Position to insert 8: " << distance(sorted_nums.begin(), lower) << endl;
    
    // === Transformation ===
    vector<int> original = {1, 2, 3, 4, 5};
    vector<int> squared(original.size());
    
    transform(original.begin(), original.end(), squared.begin(),
        [](int x) { return x * x; });
    
    cout << "\nOriginal: ";
    for (int x : original) cout << x << " ";
    cout << "\nSquared: ";
    for (int x : squared) cout << x << " ";
    cout << endl;
    
    // === Accumulation ===
    int sum = accumulate(original.begin(), original.end(), 0);
    int product = accumulate(original.begin(), original.end(), 1, multiplies<int>());
    
    cout << "\nSum: " << sum << endl;
    cout << "Product: " << product << endl;
    
    return 0;
}
```

---

<div align="center">

**🎯 Master STL algorithms and unlock the full power of C++ programming!**

*Efficient • Reliable • Optimized*

---

*Happy Coding! 🚀*

</div>