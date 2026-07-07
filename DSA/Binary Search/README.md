# Binary Search

## Problem Statement

Search for a target value in a sorted array.

---

# Iterative Approach

The array is repeatedly divided into two halves.

Depending on the middle element:

- Search left half
- Search right half

until the target is found.

---

## Recursive Approach

Instead of using a loop, recursion repeatedly searches one half of the array.

The recursive calls stop when:

- Target is found
- Search space becomes empty

---

## Complexity

Time Complexity

```
O(log n)
```

Iterative Space Complexity

```
O(1)
```

Recursive Space Complexity

```
O(log n)
```

---

## Concepts Learned

- Binary Search
- Divide and Conquer
- Recursion
- Overflow-safe Mid Calculation

---

## Important Observation

Instead of

```cpp
(start + end) / 2
```

I learned to use

```cpp
start + (end - start) / 2
```

to avoid integer overflow.