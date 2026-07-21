# LeetCode 74 - Search a 2D Matrix

## Problem

Given an `m × n` matrix where:

- Each row is sorted in ascending order.
- The first integer of each row is greater than the last integer of the previous row.

Determine whether a target value exists in the matrix.

---

# Approach

Instead of checking every element, the matrix structure allows Binary Search to be applied twice.

## Step 1 — Find the Correct Row

Use Binary Search on the rows.

For every middle row, check:

```cpp
matrix[mid][0] <= target &&
target <= matrix[mid][cols - 1]
```

If true, the target must lie inside that row.

Otherwise:

- Search upper rows.
- Search lower rows.

---

## Step 2 — Search Inside the Row

After locating the candidate row,

perform a standard Binary Search on that row.

If found:

Return `true`.

Otherwise:

Return `false`.

---

# Algorithm Used

- Binary Search
- Search Space Reduction
- Nested Binary Search

---

# Complexity

### Time

```
O(log(rows) + log(cols))
```

### Space

```
O(1)
```

---

# What I Learned

- Binary Search is not limited to one-dimensional arrays.
- A problem can often be divided into multiple Binary Searches.
- Properly reducing the search space leads to significant performance improvements.
- Correct boundary conditions (`rows - 1` instead of `cols - 1`) are essential for avoiding runtime errors.
- Debugging and fixing issues like TLE and incorrect boundaries is an important part of the problem-solving process.

---

# My Learning Journey

My first implementation worked conceptually but had issues that led to inefficiencies and incorrect boundaries.

After reviewing the approach, I:

- Corrected the row search range.
- Fixed the Binary Search conditions.
- Eliminated the issues causing incorrect behavior.
- Successfully submitted the accepted solution on LeetCode.

This problem strengthened my understanding of applying Binary Search beyond simple arrays.