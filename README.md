# Complete Data Structures & Algorithms Problem-Solving Guide

## Table of Contents
1. [Arrays](#arrays)
2. [Strings](#strings)
3. [Linked Lists](#linked-lists)
4. [Stacks](#stacks)
5. [Queues](#queues)
6. [Hashing](#hashing)
7. [Recursion & Backtracking](#recursion--backtracking)
8. [Searching & Sorting](#searching--sorting)
9. [Trees](#trees)
10. [Heaps](#heaps)
11. [Graphs](#graphs)
12. [Dynamic Programming](#dynamic-programming)
13. [Greedy Algorithms](#greedy-algorithms)
14. [Bit Manipulation](#bit-manipulation)
15. [Sliding Window](#sliding-window)
16. [Two Pointer Technique](#two-pointer-technique)
17. [Divide & Conquer](#divide--conquer)
18. [Trie](#trie)
19. [Segment Trees & Binary Indexed Trees](#segment-trees--binary-indexed-trees)
20. [Disjoint Set](#disjoint-set)
21. [Mathematical Algorithms](#mathematical-algorithms)
22. [Number Theory](#number-theory)
23. [Geometry](#geometry)
24. [String Matching Algorithms](#string-matching-algorithms)

---

## Arrays

### Common Problem Types
- **Subarray Problems**: Maximum sum, longest increasing subsequence
- **Element Finding**: Two sum, three sum, missing numbers
- **Rearrangement**: Rotate array, merge intervals
- **Matrix Operations**: Spiral traversal, search in 2D matrix

### Approaches & Complexities

| Approach | Time Complexity | Space Complexity | Use Cases |
|----------|----------------|------------------|-----------|
| **Brute Force** | O(n²) to O(n³) | O(1) | Small datasets, understanding problem |
| **Two Pointers** | O(n) | O(1) | Sorted arrays, pair finding |
| **Sliding Window** | O(n) | O(1) | Subarray problems with constraints |
| **Prefix Sum** | O(n) | O(n) | Range sum queries, subarray sums |
| **Binary Search** | O(log n) | O(1) | Sorted arrays, finding elements |
| **Hash Map** | O(n) | O(n) | Frequency counting, pair finding |
| **Kadane's Algorithm** | O(n) | O(1) | Maximum subarray sum |
| **Dutch Flag** | O(n) | O(1) | Array partitioning (0s, 1s, 2s) |

### Key Patterns
- **Prefix/Suffix Arrays**: Precompute cumulative operations
- **In-place Modification**: Use array indices as hash map
- **Cyclic Sort**: For arrays with numbers in range [1, n]

---

## Strings

### Common Problem Types
- **Pattern Matching**: Substring search, regular expressions
- **Palindromes**: Longest palindrome, palindrome checking
- **Anagrams**: Group anagrams, valid anagram
- **Parsing**: Valid parentheses, expression evaluation

### Approaches & Complexities

| Approach | Time Complexity | Space Complexity | Use Cases |
|----------|----------------|------------------|-----------|
| **Brute Force** | O(n²) to O(n³) | O(1) | Simple pattern matching |
| **Two Pointers** | O(n) | O(1) | Palindrome checking, string reversal |
| **Sliding Window** | O(n) | O(k) | Substring with constraints |
| **KMP Algorithm** | O(n + m) | O(m) | Pattern matching |
| **Rabin-Karp** | O(n + m) avg | O(1) | Multiple pattern matching |
| **Trie** | O(m) | O(ALPHABET_SIZE × N) | Prefix matching, autocomplete |
| **Manacher's Algorithm** | O(n) | O(n) | Longest palindromic substring |
| **Z-Algorithm** | O(n) | O(n) | Pattern matching variations |

### Key Patterns
- **Character Frequency**: Use array[26] for lowercase letters
- **Rolling Hash**: For efficient substring comparison
- **DP on Strings**: Edit distance, longest common subsequence

---

## Linked Lists

### Common Problem Types
- **Traversal**: Find middle, detect cycle
- **Modification**: Reverse, merge, remove nodes
- **Sorting**: Merge sort on linked list
- **Design**: LRU cache, implement queue/stack

### Approaches & Complexities

| Approach | Time Complexity | Space Complexity | Use Cases |
|----------|----------------|------------------|-----------|
| **Two Pointers (Fast/Slow)** | O(n) | O(1) | Cycle detection, finding middle |
| **Recursive** | O(n) | O(n) | Tree-like operations, reversal |
| **Iterative** | O(n) | O(1) | Most operations, space-efficient |
| **Dummy Node** | O(n) | O(1) | Simplify edge cases |
| **Hash Set** | O(n) | O(n) | Cycle detection, intersection |

### Key Patterns
- **Floyd's Cycle Detection**: Two pointers at different speeds
- **Reversal in Groups**: Reverse k nodes at a time
- **Merge Technique**: Used in merge sort, merge k lists

---

## Stacks

### Common Problem Types
- **Expression Evaluation**: Valid parentheses, calculator
- **Monotonic Stack**: Next greater element, largest rectangle
- **Parsing**: Decode strings, remove duplicates
- **Simulation**: Browser history, undo operations

### Approaches & Complexities

| Approach | Time Complexity | Space Complexity | Use Cases |
|----------|----------------|------------------|-----------|
| **Simple Stack** | O(n) | O(n) | Basic push/pop operations |
| **Monotonic Stack** | O(n) | O(n) | Next/previous greater elements |
| **Two Stacks** | O(1) per op | O(n) | Queue implementation |
| **Min/Max Stack** | O(1) per op | O(n) | Track minimum/maximum |

### Key Patterns
- **Monotonic Decreasing**: For next greater element
- **Monotonic Increasing**: For next smaller element
- **Expression Evaluation**: Operator precedence handling

---

## Queues

### Common Problem Types
- **BFS Traversal**: Level order traversal, shortest path
- **Sliding Window Maximum**: Using deque
- **Process Scheduling**: Round robin, priority scheduling
- **Design Problems**: Circular queue, priority queue

### Approaches & Complexities

| Approach | Time Complexity | Space Complexity | Use Cases |
|----------|----------------|------------------|-----------|
| **Simple Queue** | O(1) per op | O(n) | FIFO operations |
| **Circular Queue** | O(1) per op | O(k) | Fixed size, space efficient |
| **Priority Queue** | O(log n) per op | O(n) | Ordered processing |
| **Deque** | O(1) per op | O(n) | Both ends operations |

### Key Patterns
- **Level Order BFS**: Use queue for tree/graph traversal
- **Sliding Window Maximum**: Use deque to maintain order
- **Multi-level BFS**: Process level by level

---

## Hashing

### Common Problem Types
- **Frequency Counting**: Character/element frequency
- **Grouping**: Group anagrams, group shifted strings
- **Caching**: LRU cache, memoization
- **Set Operations**: Union, intersection, difference

### Approaches & Complexities

| Approach | Time Complexity | Space Complexity | Use Cases |
|----------|----------------|------------------|-----------|
| **Hash Map** | O(1) avg, O(n) worst | O(n) | Key-value mapping |
| **Hash Set** | O(1) avg, O(n) worst | O(n) | Unique elements |
| **Rolling Hash** | O(n) | O(1) | String matching |
| **Consistent Hashing** | O(log n) | O(n) | Distributed systems |

### Key Patterns
- **Two Sum Pattern**: Use hash map to find pairs
- **Sliding Window + Hash**: Count distinct elements
- **Custom Hash Functions**: For complex objects

---

## Recursion & Backtracking

### Common Problem Types
- **Combinatorial**: Permutations, combinations, subsets
- **Path Finding**: N-Queens, Sudoku solver, maze
- **Tree Problems**: Tree traversal, path sum
- **String Problems**: Generate parentheses, word search

### Approaches & Complexities

| Approach | Time Complexity | Space Complexity | Use Cases |
|----------|----------------|------------------|-----------|
| **Basic Recursion** | Varies (often exponential) | O(depth) | Tree traversal, factorial |
| **Memoized Recursion** | O(states) | O(states) | Overlapping subproblems |
| **Backtracking** | O(b^d) where b=branching, d=depth | O(d) | Constraint satisfaction |
| **Tail Recursion** | Same as iterative | O(1) if optimized | Linear recursion |

### Key Patterns
- **Choice/Explore/Unchoose**: Standard backtracking template
- **Base Case First**: Always define termination condition
- **State Space Tree**: Visualize recursive calls as tree

---

## Searching & Sorting

### Searching Approaches & Complexities

| Algorithm | Time Complexity | Space Complexity | Use Cases |
|-----------|----------------|------------------|-----------|
| **Linear Search** | O(n) | O(1) | Unsorted data, small datasets |
| **Binary Search** | O(log n) | O(1) | Sorted arrays |
| **Interpolation Search** | O(log log n) avg | O(1) | Uniformly distributed data |
| **Exponential Search** | O(log n) | O(1) | Unbounded/infinite arrays |
| **Ternary Search** | O(log₃ n) | O(1) | Unimodal functions |

### Sorting Approaches & Complexities

| Algorithm | Time Complexity | Space Complexity | Stability | Use Cases |
|-----------|----------------|------------------|-----------|-----------|
| **Bubble Sort** | O(n²) | O(1) | Stable | Educational, small datasets |
| **Selection Sort** | O(n²) | O(1) | Unstable | Memory-constrained |
| **Insertion Sort** | O(n²), O(n) best | O(1) | Stable | Nearly sorted data |
| **Merge Sort** | O(n log n) | O(n) | Stable | Large datasets, linked lists |
| **Quick Sort** | O(n log n) avg, O(n²) worst | O(log n) | Unstable | General purpose |
| **Heap Sort** | O(n log n) | O(1) | Unstable | Memory-constrained |
| **Counting Sort** | O(n + k) | O(k) | Stable | Small range integers |
| **Radix Sort** | O(d × n) | O(n + k) | Stable | Fixed-width integers |

---

## Trees

### Common Problem Types
- **Traversal**: Inorder, preorder, postorder, level order
- **Properties**: Height, diameter, balance checking
- **Path Problems**: Root to leaf paths, path sum
- **Construction**: Build tree from traversals

### Approaches & Complexities

| Approach | Time Complexity | Space Complexity | Use Cases |
|----------|----------------|------------------|-----------|
| **DFS Recursive** | O(n) | O(h) where h=height | Most tree problems |
| **DFS Iterative** | O(n) | O(h) | Avoid recursion overhead |
| **BFS (Level Order)** | O(n) | O(w) where w=max width | Level-wise processing |
| **Morris Traversal** | O(n) | O(1) | Space-optimized traversal |

### Tree Types & Properties

| Tree Type | Search | Insert | Delete | Special Properties |
|-----------|--------|--------|--------|-------------------|
| **Binary Search Tree** | O(h) | O(h) | O(h) | Left < Root < Right |
| **AVL Tree** | O(log n) | O(log n) | O(log n) | Self-balancing, height diff ≤ 1 |
| **Red-Black Tree** | O(log n) | O(log n) | O(log n) | Self-balancing, color properties |
| **B-Tree** | O(log n) | O(log n) | O(log n) | Multi-way, disk-friendly |

---

## Heaps

### Common Problem Types
- **Priority Operations**: Kth largest/smallest element
- **Streaming Data**: Running median, top K elements
- **Scheduling**: Task scheduling, merge K lists
- **Graph Algorithms**: Dijkstra's, Prim's algorithm

### Approaches & Complexities

| Operation | Min/Max Heap | Time Complexity | Use Cases |
|-----------|--------------|----------------|-----------|
| **Insert** | Both | O(log n) | Adding new elements |
| **Extract Min/Max** | Respective | O(log n) | Getting extremes |
| **Peek** | Both | O(1) | Check min/max |
| **Heapify** | Both | O(n) | Build heap from array |
| **Decrease/Increase Key** | Respective | O(log n) | Priority updates |

### Key Patterns
- **K-way Merge**: Use min heap for merging sorted arrays
- **Running Median**: Use two heaps (max and min)
- **Top K Elements**: Use heap of size K

---

## Graphs

### Common Problem Types
- **Traversal**: DFS, BFS, topological sort
- **Shortest Path**: Dijkstra, Bellman-Ford, Floyd-Warshall
- **Connectivity**: Connected components, strongly connected components
- **Minimum Spanning Tree**: Kruskal's, Prim's algorithm
- **Cycle Detection**: In directed and undirected graphs

### Approaches & Complexities

| Algorithm | Time Complexity | Space Complexity | Use Cases |
|-----------|----------------|------------------|-----------|
| **DFS** | O(V + E) | O(V) | Path finding, cycle detection |
| **BFS** | O(V + E) | O(V) | Shortest path (unweighted) |
| **Dijkstra's** | O((V + E) log V) | O(V) | Shortest path (weighted, non-negative) |
| **Bellman-Ford** | O(VE) | O(V) | Shortest path (negative weights) |
| **Floyd-Warshall** | O(V³) | O(V²) | All pairs shortest path |
| **Kruskal's** | O(E log E) | O(V) | Minimum spanning tree |
| **Prim's** | O((V + E) log V) | O(V) | Minimum spanning tree |
| **Topological Sort** | O(V + E) | O(V) | Dependency resolution |

### Graph Representations

| Representation | Space | Add Edge | Check Edge | Iterate Neighbors |
|----------------|-------|----------|------------|-------------------|
| **Adjacency Matrix** | O(V²) | O(1) | O(1) | O(V) |
| **Adjacency List** | O(V + E) | O(1) | O(degree) | O(degree) |
| **Edge List** | O(E) | O(1) | O(E) | O(E) |

---

## Dynamic Programming

### Common Problem Types
- **Optimization**: Knapsack, coin change, maximum profit
- **Counting**: Number of ways, paths in grid
- **Decision Making**: Buy/sell stocks, house robber
- **String Problems**: Edit distance, longest common subsequence

### Approaches & Complexities

| Approach | Time Complexity | Space Complexity | Use Cases |
|----------|----------------|------------------|-----------|
| **Top-Down (Memoization)** | O(states) | O(states) | Natural recursion |
| **Bottom-Up (Tabulation)** | O(states) | O(states) | Iterative approach |
| **Space Optimized** | O(states) | O(k) where k < states | 1D/2D optimization |
| **Matrix Chain Multiplication** | O(n³) | O(n²) | Optimal parenthesization |

### DP Patterns

| Pattern | Recurrence | Examples |
|---------|------------|----------|
| **Linear DP** | dp[i] = f(dp[i-1], dp[i-2], ...) | Fibonacci, climbing stairs |
| **Grid DP** | dp[i][j] = f(dp[i-1][j], dp[i][j-1]) | Unique paths, minimum path sum |
| **Interval DP** | dp[i][j] = min/max(dp[i][k] + dp[k+1][j]) | Matrix chain, palindrome partitioning |
| **Subset DP** | dp[mask] or dp[i][sum] | Knapsack, subset sum |
| **Tree DP** | Combine results from children | Diameter of tree, house robber III |

---

## Greedy Algorithms

### Common Problem Types
- **Scheduling**: Activity selection, job scheduling
- **Optimization**: Fractional knapsack, gas station
- **Graph Problems**: MST, shortest path trees
- **Array Problems**: Jump game, candy distribution

### Approaches & Complexities

| Problem Type | Time Complexity | Space Complexity | Greedy Choice |
|--------------|----------------|------------------|---------------|
| **Activity Selection** | O(n log n) | O(1) | Earliest finish time |
| **Fractional Knapsack** | O(n log n) | O(1) | Highest value/weight ratio |
| **Huffman Coding** | O(n log n) | O(n) | Minimum frequency nodes |
| **Job Scheduling** | O(n log n) | O(1) | Minimum slack time |

### Key Patterns
- **Sort + Greedy**: Often needs sorting first
- **Locally Optimal**: Make best choice at each step
- **Proof by Exchange**: Prove greedy choice is optimal

---

## Bit Manipulation

### Common Problem Types
- **Single Number**: Find unique element in duplicates
- **Counting**: Count set bits, power of 2
- **Manipulation**: Set, clear, toggle bits
- **Optimization**: Space-efficient solutions

### Approaches & Complexities

| Operation | Time Complexity | Space Complexity | Use Cases |
|-----------|----------------|------------------|-----------|
| **Basic Operations** | O(1) | O(1) | AND, OR, XOR, NOT |
| **Bit Counting** | O(log n) or O(1) | O(1) | Population count |
| **Power of 2 Check** | O(1) | O(1) | n & (n-1) == 0 |
| **Subset Generation** | O(2ⁿ) | O(1) per subset | Using bitmask |

### Common Bit Tricks
- **n & (n-1)**: Removes rightmost set bit
- **n & -n**: Isolates rightmost set bit  
- **x ^ x**: Always equals 0
- **x ^ 0**: Always equals x

---

## Sliding Window

### Common Problem Types
- **Fixed Size**: Maximum sum of k elements
- **Variable Size**: Longest substring without repeating characters
- **String Problems**: Minimum window substring, anagrams
- **Array Problems**: Subarray with given sum

### Approaches & Complexities

| Window Type | Time Complexity | Space Complexity | Use Cases |
|-------------|----------------|------------------|-----------|
| **Fixed Size** | O(n) | O(1) or O(k) | K-size subarray problems |
| **Variable Size** | O(n) | O(k) where k=unique elements | Dynamic constraint problems |
| **Two Pointers** | O(n) | O(1) | Opposite direction movement |

### Key Patterns
- **Expand and Contract**: Grow window until invalid, then shrink
- **Character Frequency**: Track character counts in window
- **Multiple Conditions**: Use multiple variables to track state

---

## Two Pointer Technique

### Common Problem Types
- **Array Problems**: Two sum, three sum, container with most water
- **String Problems**: Valid palindrome, reverse string
- **Linked List**: Remove nth node, merge sorted lists
- **Sorting**: Quick sort partition, Dutch flag

### Approaches & Complexities

| Pattern | Time Complexity | Space Complexity | Use Cases |
|---------|----------------|------------------|-----------|
| **Opposite Directions** | O(n) | O(1) | Sorted array problems |
| **Same Direction** | O(n) | O(1) | Fast/slow pointer |
| **Sliding Window** | O(n) | O(1) | Subarray/substring problems |

### Key Patterns
- **Meet in Middle**: Start from both ends, move towards center
- **Fast and Slow**: Different speeds for cycle detection
- **Left and Right**: Maintain valid window/range

---

## Divide & Conquer

### Common Problem Types
- **Sorting**: Merge sort, quick sort
- **Searching**: Binary search variants
- **Tree Problems**: Tree construction, traversal
- **Array Problems**: Maximum subarray, closest pair

### Approaches & Complexities

| Algorithm | Time Complexity | Space Complexity | Recurrence |
|-----------|----------------|------------------|------------|
| **Merge Sort** | O(n log n) | O(n) | T(n) = 2T(n/2) + O(n) |
| **Quick Sort** | O(n log n) avg | O(log n) | T(n) = T(k) + T(n-k) + O(n) |
| **Binary Search** | O(log n) | O(1) | T(n) = T(n/2) + O(1) |
| **Closest Pair** | O(n log n) | O(n) | T(n) = 2T(n/2) + O(n) |

### Master Theorem
For recurrence T(n) = aT(n/b) + f(n):
- If f(n) = O(n^c) where c < log_b(a), then T(n) = O(n^(log_b(a)))
- If f(n) = O(n^c) where c = log_b(a), then T(n) = O(n^c log n)
- If f(n) = O(n^c) where c > log_b(a), then T(n) = O(f(n))

---

## Trie

### Common Problem Types
- **Prefix Operations**: Autocomplete, prefix matching
- **Word Problems**: Word search, word break
- **String Storage**: Efficient string storage and retrieval
- **IP Routing**: Longest prefix matching

### Approaches & Complexities

| Operation | Time Complexity | Space Complexity | Use Cases |
|-----------|----------------|------------------|-----------|
| **Insert** | O(m) where m=string length | O(ALPHABET_SIZE × N × M) | Adding words |
| **Search** | O(m) | O(1) for query | Exact word search |
| **StartsWith** | O(m) | O(1) for query | Prefix matching |
| **Delete** | O(m) | O(1) for operation | Word removal |

### Trie Variants
- **Compressed Trie (Radix Tree)**: Space optimized
- **Suffix Trie**: For suffix-based operations
- **Ternary Search Trie**: Memory efficient for sparse alphabets

---

## Segment Trees & Binary Indexed Trees

### Segment Trees

| Operation | Time Complexity | Space Complexity | Use Cases |
|-----------|----------------|------------------|-----------|
| **Build** | O(n) | O(4n) | Initial construction |
| **Query** | O(log n) | O(1) | Range queries |
| **Update** | O(log n) | O(1) | Point/range updates |

### Binary Indexed Trees (Fenwick Trees)

| Operation | Time Complexity | Space Complexity | Use Cases |
|-----------|----------------|------------------|-----------|
| **Build** | O(n log n) | O(n) | Cumulative frequency |
| **Query** | O(log n) | O(1) | Prefix sum queries |
| **Update** | O(log n) | O(1) | Point updates |

### Common Applications
- **Range Sum Queries**: Both trees handle efficiently
- **Range Minimum/Maximum**: Segment trees preferred
- **Inversion Count**: BIT with coordinate compression
- **2D Range Queries**: 2D versions of both trees

---

## Disjoint Set

### Common Problem Types
- **Connectivity**: Check if nodes are connected
- **Component Counting**: Number of connected components
- **Dynamic Connectivity**: Add edges and check connectivity
- **Minimum Spanning Tree**: Kruskal's algorithm

### Approaches & Complexities

| Operation | Time Complexity | Space Complexity | Optimizations |
|-----------|----------------|------------------|---------------|
| **Find** | O(α(n)) amortized | O(1) | Path compression |
| **Union** | O(α(n)) amortized | O(1) | Union by rank/size |
| **Connected** | O(α(n)) amortized | O(1) | Same as find |

Where α(n) is the inverse Ackermann function, practically constant.

### Key Optimizations
- **Path Compression**: Make nodes point directly to root
- **Union by Rank**: Attach smaller tree under larger tree
- **Union by Size**: Similar to rank but uses actual size

---

## Mathematical Algorithms

### Common Problem Types
- **Number Theory**: GCD, LCM, prime factorization
- **Combinatorics**: Permutations, combinations, factorials
- **Matrix Operations**: Matrix multiplication, determinant
- **Probability**: Random sampling, probability calculations

### Approaches & Complexities

| Algorithm | Time Complexity | Space Complexity | Use Cases |
|-----------|----------------|------------------|-----------|
| **Euclidean GCD** | O(log min(a,b)) | O(1) | Greatest common divisor |
| **Sieve of Eratosthenes** | O(n log log n) | O(n) | Finding all primes up to n |
| **Fast Exponentiation** | O(log n) | O(1) | Computing a^n efficiently |
| **Matrix Multiplication** | O(n³) | O(n²) | Standard algorithm |
| **Strassen's Algorithm** | O(n^2.807) | O(n²) | Optimized matrix multiplication |

### Key Mathematical Concepts
- **Modular Arithmetic**: (a + b) % m = ((a % m) + (b % m)) % m
- **Chinese Remainder Theorem**: Solving system of congruences
- **Fermat's Little Theorem**: a^(p-1) ≡ 1 (mod p) for prime p

---

## Number Theory

### Common Problem Types
- **Prime Numbers**: Primality testing, prime generation
- **Divisibility**: Finding divisors, GCD, LCM
- **Modular Arithmetic**: Modular exponentiation, inverse
- **Diophantine Equations**: Integer solutions to equations

### Approaches & Complexities

| Algorithm | Time Complexity | Space Complexity | Use Cases |
|-----------|----------------|------------------|-----------|
| **Trial Division** | O(√n) | O(1) | Primality testing |
| **Miller-Rabin** | O(k log³ n) | O(1) | Probabilistic primality |
| **Pollard's Rho** | O(n^(1/4)) | O(1) | Integer factorization |
| **Extended Euclidean** | O(log min(a,b)) | O(1) | Modular inverse |

### Important Number Theory Results
- **Wilson's Theorem**: (p-1)! ≡ -1 (mod p) for prime p
- **Euler's Theorem**: a^φ(n) ≡ 1 (mod n) if gcd(a,n) = 1
- **Quadratic Reciprocity**: Determines solvability of quadratic congruences

---

## Geometry

### Common Problem Types
- **Point Operations**: Distance, rotation, reflection
- **Line Operations**: Intersection, perpendicular distance
- **Polygon Operations**: Area, perimeter, point inside polygon
- **Convex Hull**: Finding convex hull of points

### Approaches & Complexities

| Algorithm | Time Complexity | Space Complexity | Use Cases |
|-----------|----------------|------------------|-----------|
| **Distance Calculation** | O(1) | O(1) | Euclidean distance |
| **Line Intersection** | O(1) | O(1) | Finding intersection point |
| **Point in Polygon** | O(n) | O(1) | Ray casting algorithm |
| **Graham Scan** | O(n log n) | O(n) | Convex hull |
| **Jarvis March** | O(nh) | O(h) | Convex hull (h = hull points) |
| **Closest Pair** | O(n log n) | O(n) | Divide and conquer |

### Key Geometric Concepts
- **Cross Product**: Determines orientation (clockwise/counterclockwise)
- **Dot Product**: Angle between vectors, projection
- **Convex Hull**: Smallest convex polygon containing all points

---

## String Matching Algorithms

### Common Problem Types
- **Pattern Matching**: Find pattern in text
- **Multiple Patterns**: Search for multiple patterns simultaneously
- **Approximate Matching**: Fuzzy string matching
- **Longest Common Substring**: Finding common parts

### Approaches & Complexities

| Algorithm | Time Complexity | Space Complexity | Use Cases |
|-----------|----------------|------------------|-----------|
| **Naive/Brute Force** | O(nm) | O(1) | Simple implementation |
| **KMP (Knuth-Morris-Pratt)** | O(n + m) | O(m) | Single pattern matching |
| **Rabin-Karp** | O(n + m) avg, O(nm) worst | O(1) | Multiple pattern, rolling hash |
| **Boyer-Moore** | O(n/m) best, O(nm) worst | O(σ) where σ=alphabet size | Practical for large alphabets |
| **Aho-Corasick** | O(n + m + z) | O(m) | Multiple pattern matching |
| **Z-Algorithm** | O(n + m) | O(n + m) | Pattern matching variants |
| **Suffix Array** | O(n log n) build, O(m log n) search | O(n) | Multiple queries on same text |

### Advanced String Structures
- **Suffix Tree**: O(n) space, supports various string operations in O(m) time
- **Suffix Array**: Space-efficient alternative to suffix tree
- **LCP Array**: Longest common prefix, used with suffix arrays

---

## Complexity Analysis Quick Reference

### Time Complexity Hierarchy (Best to Worst)
1. **O(1)** - Constant
2. **O(log n)** - Logarithmic  
3. **O(n)** - Linear
4. **O(n log n)** - Linearithmic
5. **O(n²)** - Quadratic
6. **O(n³)** - Cubic
7. **O(2ⁿ)** - Exponential
8. **O(n!)** - Factorial

### Space Complexity Considerations
- **In-place algorithms**: O(1) extra space
- **Recursive algorithms**: O(depth) space for call stack
- **Memoization**: Trade space for time, typically O(states)
- **Auxiliary data structures**: Consider the space needed for hash maps, arrays, etc.

### General Problem-Solving Strategy
1. **Understand the problem**: Read carefully, identify constraints
2. **Choose appropriate data structure**: Based on operations needed
3. **Start with brute force**: Get a working solution first
4. **Optimize**: Use appropriate algorithms and techniques
5. **Consider edge cases**: Empty inputs, single elements, etc.
6. **Analyze complexity**:
