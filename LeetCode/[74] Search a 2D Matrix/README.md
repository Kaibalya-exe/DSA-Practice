# Search a 2D Matrix

## Overview

This folder contains two approaches for solving the **Search a 2D Matrix** problem.

The matrix satisfies the following conditions:

- Every row is sorted in ascending order.
- The first element of each row is greater than the last element of the previous row.

This structure allows the search space to be reduced using Binary Search.

---

# Approaches

## 1. Linear Search

### Idea

Traverse every element in the matrix.

If the target is found:

- Return true

Otherwise:

- Return false

### Algorithm

1. Traverse every row.
2. Traverse every column.
3. Compare every element with the target.
4. Stop if found.

### Time Complexity

O(rows × cols)

### Space Complexity

O(1)

---

## 2. Binary Search

### Idea

Since every row is sorted and rows are ordered with respect to one another:

1. First identify which row may contain the target.
2. Perform Binary Search only inside that row.

Instead of searching the whole matrix, the search space is reduced twice.

---

## Algorithm

### Step 1

Binary Search over rows.

Check:

```cpp
matrix[mid][0] <= target <= matrix[mid][cols-1]
```

If true:

That is the correct row.

Otherwise:

Move left or right depending on the target.

---

### Step 2

Perform standard Binary Search inside the selected row.

If found:

Return true.

Else:

Return false.

---

## Complexity

### Linear Search

Time: **O(rows × cols)**

Space: **O(1)**

---

### Binary Search

Time:

O(log(rows) + log(cols))

Space:

O(1)

---

# What I Learned

- Searching inside matrices
- Difference between Linear Search and Binary Search
- How Binary Search can be applied multiple times
- Reducing search space step by step
- Choosing the correct row before searching for the element
- Applying Binary Search beyond one-dimensional arrays

---

# Progression

✔ Linear Search

↓

✔ Binary Search on Rows

↓

✔ Binary Search inside Selected Row

↓

Optimized Matrix Search