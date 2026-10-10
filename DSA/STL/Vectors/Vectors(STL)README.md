# C++ STL: Vectors and Iterators

## Overview

This program demonstrates the fundamental operations of `std::vector`, one of the most commonly used containers in the C++ Standard Template Library (STL).

A vector is a dynamic array that can grow or shrink as elements are added or removed. Unlike a fixed-size built-in array, a vector manages its storage automatically.

### Concepts covered

- Vector initialization
- Adding and removing elements
- Accessing elements by index
- Accessing the first and last elements
- Inserting and erasing elements
- Clearing a vector and checking whether it is empty
- Understanding `size()` and `capacity()`
- Forward and reverse iterators
- Traversing a vector using iterators and `auto`

## 1. Header files

```cpp
#include <iostream>
#include <vector>

using namespace std;
```

- `<iostream>` provides input/output facilities such as `cout` and `endl`.
- `<vector>` provides the `std::vector` container and its associated iterators.

This program does not require an additional algorithm or container header.

## 2. Initializing a vector

```cpp
vector<int> vec = {1, 2, 3};
```

This creates a vector of integers containing three elements.

Initial state:

`{1, 2, 3}`

The vector stores elements in sequence, supports random access, and can dynamically grow as needed.

## 3. Adding elements at the back

### `push_back()`

```cpp
vec.push_back(4);
vec.push_back(5);
vec.push_back(6);
```

Adds each supplied element to the end of the vector.

Before:

`{1, 2, 3}`

After:

`{1, 2, 3, 4, 5, 6}`

**Time complexity:** Amortized O(1) per insertion. An individual insertion can take O(n) if the vector needs to allocate new storage and move or copy existing elements.

### `emplace_back()`

```cpp
vec.emplace_back(6);
```

Constructs a new element directly at the end of the vector using the supplied arguments.

For an integer, `emplace_back(6)` and `push_back(6)` have essentially the same practical effect. For more complex objects, `emplace_back()` can construct an object directly in the vector without needing a separate temporary object.

**Time complexity:** Amortized O(1).

### Difference between `push_back()` and `emplace_back()`

- `push_back(value)` adds an existing value or a value constructed from the argument.
- `emplace_back(args...)` forwards arguments to construct the element in place.

Do not assume `emplace_back()` is always faster. For simple types such as `int`, the difference is generally insignificant.

## 4. Removing the last element

### `pop_back()`

```cpp
vec.pop_back();
```

Removes the last element from the vector.

Before:

`{1, 2, 3, 4, 5, 6}`

After:

`{1, 2, 3, 4, 5}`

It does not return the removed element. It simply removes it.

**Time complexity:** O(1).

**Important:** The vector must not be empty when `pop_back()` is called.

## 5. Accessing elements

### `operator[]`

```cpp
cout << vec[0] << endl;
```

Accesses the element at the specified index.

- Index `0` refers to the first element.
- Index `1` refers to the second element.
- Index `2` refers to the third element.

For `{1, 2, 3}`, `vec[0]` gives `1`.

**Time complexity:** O(1).

`operator[]` does not perform bounds checking. Accessing an invalid index causes undefined behavior.

### `at()`

```cpp
cout << vec.at(1) << endl;
```

Accesses an element by index, just like `operator[]`, but performs bounds checking.

For `{1, 2, 3}`, `vec.at(1)` gives `2`.

If the index is outside the valid range, `at()` throws a `std::out_of_range` exception.

**Time complexity:** O(1).

**Difference:** Use `[]` when the index is known to be valid. Use `at()` when you want checked access.

## 6. Accessing the first and last elements

### `front()`

```cpp
cout << vec.front() << endl;
```

Returns a reference to the first element.

For `{1, 2, 3}`, it gives `1`.

### `back()`

```cpp
cout << vec.back() << endl;
```

Returns a reference to the last element.

For `{1, 2, 3}`, it gives `3`.

**Time complexity:** Both operations take O(1).

**Important:** Calling `front()` or `back()` on an empty vector is invalid. Check `empty()` first if the vector might have no elements.

Because these functions return references, you can also modify the elements:

```cpp
vec.front() = 10;
vec.back() = 30;
```

## 7. Erasing elements

### `erase()`: Remove one element

```cpp
vec.erase(vec.begin());
```

Removes the element at the iterator supplied to `erase()`.

If the vector contains:

`{1, 2, 3, 4, 5, 6}`

Then after erasing `vec.begin()`:

`{2, 3, 4, 5, 6}`

### Erasing at a particular index

```cpp
vec.erase(vec.begin() + 3);
```

`vec.begin() + 3` points to index `3`, the fourth element of the vector.

In the updated vector `{2, 3, 4, 5, 6}`, index `3` contains `5`.

After erasing it:

`{2, 3, 4, 6}`

**Important:** Indices change after an element is erased because later elements shift left. Always calculate the next iterator from the current vector state.

**Time complexity:** O(n) in the worst case, because subsequent elements may need to shift.

### Erasing a range

```cpp
vec.erase(vec.begin(), vec.begin() + 3);
```

Removes elements from the first iterator up to, but not including, the second iterator.

The range is half-open: `[first, last)`.

For the original vector `{1, 2, 3, 4, 5, 6}`, this removes `1`, `2`, and `3`, leaving:

`{4, 5, 6}`

**Time complexity:** O(n) in the worst case.

## 8. Inserting elements

### `insert()`: Insert at the beginning

```cpp
vec.insert(vec.begin(), 1);
```

Inserts `1` before the current first element.

If the vector contains `{2, 3, 4, 6}`, the result becomes:

`{1, 2, 3, 4, 6}`

### Inserting at a specific position

```cpp
vec.insert(vec.begin() + 4, 5);
```

Inserts `5` before the element currently at index `4`.

For `{1, 2, 3, 4, 6}`, the result is:

`{1, 2, 3, 4, 5, 6}`

**Time complexity:** O(n) in the worst case, because elements may need to shift or the vector may need to reallocate storage.

**Important:** Inserting or erasing elements can invalidate iterators and references at or after the affected position. Reallocation can invalidate all iterators and references to elements in the vector.

## 9. Clearing the vector

### `clear()`

```cpp
vec.clear();
```

Removes all elements from the vector.

Before:

`{1, 2, 3, 4, 5, 6}`

After:

`{}`

The vector's size becomes `0`.

### `size()` versus `capacity()`

- `size()` is the number of elements currently stored.
- `capacity()` is the number of elements that can be stored without requiring a reallocation.

After `clear()`, the vector's capacity remains unchanged, but its size becomes `0`. The exact capacity before clearing is implementation-dependent and is not necessarily equal to `6`.

For example, a vector may contain six elements while having a capacity greater than six.

**Time complexity:** O(n), because the elements must be destroyed.

## 10. Checking whether a vector is empty

### `empty()`

```cpp
if (vec.empty())
{
    cout << "empty" << endl;
}
else
{
    cout << "Not empty" << endl;
}
```

Returns `true` if the vector contains no elements and `false` otherwise.

After `vec.clear()`, the condition is true.

**Time complexity:** O(1).

The following also works:

```cpp
if (vec.empty() == 1)
```

However, `if (vec.empty())` is clearer and more idiomatic C++.

## 11. Iterators

An iterator is an object that allows you to navigate through a container's elements.

For a vector, iterators behave similarly to pointers and support random access.

### `begin()`

```cpp
vec.begin()
```

Returns an iterator to the first element.

### `end()`

```cpp
vec.end()
```

Returns an iterator to the position immediately after the last element.

`end()` is a boundary marker, not an iterator to a valid element. Do not dereference it.

For a vector containing `{1, 2, 3, 4, 5, 6}`:

- `vec.begin()` points to `1`.
- `vec.begin() + 3` points to `4`.
- `vec.begin() + 5` points to `6`.
- `vec.begin() + 6` equals `vec.end()`.

### Dereferencing an iterator

```cpp
cout << *(vec.begin()) << endl;
cout << *(vec.begin() + 3) << endl;
```

The `*` operator accesses the element at the iterator's current position.

For the example vector, these statements print `1` and `4`.

## 12. Forward traversal with an iterator

```cpp
vector<int>::iterator i;

for (i = vec.begin(); i != vec.end(); i++)
{
    cout << *i << " ";
}
```

How the loop works:

1. Initialize the iterator at `vec.begin()`.
2. Continue while the iterator is not equal to `vec.end()`.
3. Print the element using `*i`.
4. Advance to the next element using `i++`.

Output:

`1 2 3 4 5 6`

**Time complexity:** O(n) for traversing all elements.

### Using `auto`

Modern C++ allows the iterator type to be inferred:

```cpp
for (auto i = vec.begin(); i != vec.end(); i++)
{
    cout << *i << " ";
}
```

This avoids explicitly writing `vector<int>::iterator`.

## 13. Reverse iterators

### `rbegin()` and `rend()`

- `rbegin()` returns a reverse iterator referring to the last element.
- `rend()` represents the position immediately before the first element in reverse traversal.

Example:

```cpp
vector<int>::reverse_iterator j;

for (j = vec.rbegin(); j != vec.rend(); j++)
{
    cout << *j << " ";
}
```

Output:

`6 5 4 3 2 1`

Notice that `rend()` is also a boundary marker and should not be dereferenced.

### Using `auto` with reverse iterators

```cpp
for (auto j = vec.rbegin(); j != vec.rend(); j++)
{
    cout << *j << " ";
}
```

This provides the same result with less typing.

**Time complexity:** O(n) for traversing the entire vector.

## 14. Time complexity summary

| Operation | Time complexity |
|---|---|
| `push_back()` | Amortized O(1) |
| `emplace_back()` | Amortized O(1) |
| `pop_back()` | O(1) |
| `operator[]` | O(1) |
| `at()` | O(1) |
| `front()` / `back()` | O(1) |
| `erase()` | O(n) worst case |
| `insert()` | O(n) worst case |
| `clear()` | O(n) |
| `empty()` | O(1) |
| `begin()` / `end()` | O(1) |
| `rbegin()` / `rend()` | O(1) |
| Full forward/reverse traversal | O(n) |

## 15. Common mistakes and lessons learned

1. **Confusing size and capacity:** `size()` counts current elements; `capacity()` describes available storage before reallocation.
2. **Assuming indices stay the same after `erase()`:** elements shift left after deletion.
3. **Dereferencing `end()` or `rend()`:** these represent boundary positions, not valid elements.
4. **Accessing an empty vector:** check before calling `front()`, `back()`, or `pop_back()`.
5. **Assuming `erase()` and `insert()` are constant time:** shifting elements can take O(n).
6. **Assuming `emplace_back()` is always faster:** its main distinction is in-place construction, which matters more for complex objects.
7. **Using explicit iterator types everywhere:** `auto` can improve readability when the type is obvious.

## 16. Algorithms and optimization

This program does not implement a standalone algorithm such as binary search or sorting. It demonstrates STL operations that can later be used to implement algorithms.

No brute-force-to-optimized progression applies directly to this file. Instead, the learning progression is from understanding basic vector operations to using iterators and container operations safely and efficiently.

Examples of future applications include:

- Two-pointer problems using indexed access or iterators.
- Sorting a vector with `std::sort()`.
- Searching using `std::find()` or `std::binary_search()`.
- Removing selected elements using the erase-remove idiom.
- Traversing nested vectors for matrix problems.

## 17. Key takeaways

- A vector is a dynamic array with random-access support.
- Insertion at the back is amortized O(1).
- Insertion or erasure in the middle can require O(n) work.
- `[]` does not perform bounds checking, whereas `at()` does.
- `clear()` removes elements but retains the vector's capacity.
- Iterators provide a standard way to traverse containers.
- Reverse iterators allow traversal from the last element to the first.
- Understanding invalidated iterators is important when modifying a vector.

## Future learning

- `std::sort()`, `std::reverse()`, `std::find()`, and `std::binary_search()`.
- Vector traversal with range-based `for` loops.
- Two-dimensional vectors.
- The erase-remove idiom.
- Other STL containers: `set`, `unordered_set`, `map`, `unordered_map`, `stack`, and `queue`.
