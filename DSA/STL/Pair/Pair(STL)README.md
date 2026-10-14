# C++ STL: Pairs

## Overview

This program demonstrates `std::pair`, a utility provided by the C++ Standard Template Library (STL).

A pair stores exactly two values together. The two values can have the same data type or different data types.

For example:

```cpp
pair<int, int> p = {1, 5};
```

This pair stores the integer values `1` and `5`.

Pairs are useful when two values logically belong together, such as:

- A number and its index.
- A student's name and marks.
- A row and column coordinate.
- A graph node and its distance.
- A key and a value.

## 1. Header files

```cpp
#include <iostream>
#include <utility>
#include <vector>

using namespace std;
```

- `<iostream>` provides `cout` and `endl`.
- `<utility>` provides `std::pair`.
- `<vector>` provides the vector container.

Include `<utility>` explicitly whenever you use `std::pair`.

## 2. Creating a pair

### Pair with two integers

```cpp
pair<int, int> p = {1, 5};
```

This creates a pair whose first member is `1` and second member is `5`.

### Pair with different data types

```cpp
pair<float, int> q = {1.5, 5};
```

A pair does not require both values to have the same type.

Here:
- `first` has type `float`.
- `second` has type `int`.

### General syntax

```cpp
pair<data_type_1, data_type_2> variable_name = {value_1, value_2};
```

The types inside `pair<...>` specify the types of the two stored values.

## 3. Accessing pair members

A pair exposes two public members:

- `first`: the first stored value.
- `second`: the second stored value.

Example:

```cpp
pair<int, int> p = {10, 20};

cout << p.first << endl;   // 10
cout << p.second << endl;  // 20
```

Both members can also be modified:

```cpp
p.first = 100;
p.second = 200;
```

**Time complexity:** Accessing or modifying either member is O(1).

## 4. Nested pairs

A pair can contain another pair as one of its members.

```cpp
pair<int, pair<int, int>> r = {1, {2, 3}};
```

This represents the structure:

- Outer `first`: `1`
- Outer `second`: another pair containing `2` and `3`

Accessing the values:

```cpp
cout << r.first << endl;         // 1
cout << r.second.first << endl;  // 2
cout << r.second.second << endl; // 3
```

### Understanding the access syntax

`r.second` accesses the inner pair.

`r.second.first` accesses the first value of the inner pair.

`r.second.second` accesses the second value of the inner pair.

Nested pairs can be useful for representing grouped data, but deeply nested structures can become difficult to read. For more complex data, a `struct` or `class` with descriptive member names may be clearer.

## 5. Creating a vector of pairs

```cpp
vector<pair<int, int>> vec = {
    {1, 2},
    {3, 4},
    {5, 6},
    {7, 8}
};
```

This creates a vector in which every element is a pair of integers.

The vector contains four pair elements:

| Index | `first` | `second` |
|---:|---:|---:|
| 0 | 1 | 2 |
| 1 | 3 | 4 |
| 2 | 5 | 6 |
| 3 | 7 | 8 |

Each vector element is itself a pair.

For example:

```cpp
cout << vec[0].first << endl;   // 1
cout << vec[0].second << endl;  // 2
```

The vector's index selects a pair; `.first` or `.second` selects a value inside that pair.

## 6. Adding pairs to a vector

### Using `push_back()`

```cpp
vec.push_back({9, 10});
```

Appends a pair containing `9` and `10` to the end of the vector.

The vector now ends with:

`{9, 10}`

### Using `emplace_back()`

```cpp
vec.emplace_back(11, 12);
```

Constructs a pair directly at the end of the vector using the two supplied arguments.

The vector now ends with:

`{11, 12}`

### Difference between `push_back()` and `emplace_back()`

With `push_back()`, the argument represents a pair value to append:

```cpp
vec.push_back({9, 10});
```

With `emplace_back()`, the arguments are forwarded to construct the pair in place:

```cpp
vec.emplace_back(11, 12);
```

For `pair<int, int>`, both operations produce the same kind of element. The syntax differs because `emplace_back()` constructs the element from its arguments.

Both have amortized O(1) insertion complexity at the back of a vector. An insertion may take O(n) if vector storage must be reallocated.

## 7. Printing a vector of pairs

```cpp
for (auto p : vec)
{
    cout << p.first << " , " << p.second << endl;
}
```

This uses a range-based `for` loop to visit each pair in the vector.

How it works:

1. The loop selects each element in `vec`.
2. `auto` infers that the element's type is `pair<int, int>`.
3. `p.first` accesses the first value.
4. `p.second` accesses the second value.
5. The loop continues until all pairs have been visited.

Output:

```text
1 , 2
3 , 4
5 , 6
7 , 8
9 , 10
11 , 12
```

### Why use `auto`?

Instead of writing the full type:

```cpp
for (pair<int, int> p : vec)
```

you can write:

```cpp
for (auto p : vec)
```

The compiler infers the element type.

### Avoiding unnecessary copies

In the original loop, `auto p` copies each pair into the loop variable. For pairs of two integers, this is inexpensive.

You can use a reference to access the existing elements without copying:

```cpp
for (const auto& p : vec)
{
    cout << p.first << " , " << p.second << endl;
}
```

- `auto` infers the type.
- `&` makes `p` a reference to the existing pair.
- `const` prevents the loop from modifying the pair.

This is a useful general pattern when reading elements from a container.

## 8. Time complexity summary

| Operation | Time complexity |
|---|---|
| Creating a pair | O(1) |
| Accessing `first` or `second` | O(1) |
| Modifying a pair member | O(1) |
| Accessing a pair through vector indexing | O(1) |
| `push_back()` on a vector of pairs | Amortized O(1) |
| `emplace_back()` on a vector of pairs | Amortized O(1) |
| Traversing all pairs | O(n) |

Here, `n` represents the number of pairs in the vector.

## 9. Common mistakes and lessons learned

1. **Forgetting `<utility>`:** Include it explicitly to use `std::pair`.
2. **Confusing the outer vector index with a pair member:** `vec[0]` selects a pair, while `vec[0].first` selects its first value.
3. **Assuming both values must have the same type:** Pairs can hold two different types.
4. **Confusing `push_back()` and `emplace_back()`:** Both append elements, but `emplace_back()` constructs the element from its arguments.
5. **Unnecessary copies in loops:** Use `const auto&` when you only need to read each element.
6. **Overusing nested pairs:** Consider a `struct` when the values need meaningful names or the nesting becomes difficult to understand.

## 10. Algorithms and optimization

This program demonstrates an STL utility rather than implementing a standalone algorithm. Therefore, there is no brute-force-to-optimized progression for this example.

However, pairs are commonly used inside DSA algorithms.

Examples:

- **Two Sum:** Store a number and its original index.
- **Sorting:** Store a value alongside its associated identifier.
- **Graphs:** Represent an adjacent node and edge weight.
- **Greedy algorithms:** Store values with their deadlines or priorities.
- **Matrices:** Store row and column coordinates.

The important learning progression is understanding how to group values and use those groups with vectors, loops, sorting, and other STL containers.

## 11. Key takeaways

- `std::pair` groups exactly two values.
- The two values can have different types.
- `.first` and `.second` access the stored values.
- Nested pairs allow pairs to contain other pairs.
- `vector<pair<int, int>>` stores a sequence of integer pairs.
- `push_back()` and `emplace_back()` both append pairs.
- Range-based loops with `auto` make traversal concise.
- `const auto&` avoids copying elements when they only need to be read.

## Future learning

- `tuple` for grouping more than two values.
- `struct` for named, related fields.
- Sorting vectors of pairs with `std::sort()`.
- Custom comparators for pair sorting.
- Using pairs in hash maps, graph algorithms, and greedy problems.
