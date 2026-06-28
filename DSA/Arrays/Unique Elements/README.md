# Unique Elements in an Array

## Problem Statement

Given an array, print all elements that occur exactly once.

### Example

Input:

```text
{1,2,3,1,2,4}
```

Output:

```text
3 4
```

---

## My Approach

I used a brute-force frequency counting approach.

For every element:
- Traverse the entire array.
- Count how many times the element appears.
- If the count is exactly one, it is a unique element.

After finding all unique elements, I challenged myself further by storing the unique values inside a separate array whose size depends on the number of unique elements found.

---

## Concepts Practiced

- Array traversal
- Nested loops
- Frequency counting
- Dynamic thinking
- Working with variable-sized outputs

---

## Complexity Analysis

### Time Complexity

```text
O(n²)
```

### Space Complexity

```text
O(n)
```

---

## What I Learned

Through this problem, I practiced:

- Building logic independently
- Using nested loops effectively
- Counting frequencies
- Storing computed results in separate arrays
- Breaking larger problems into smaller steps

---

## Notes

This solution was developed independently as part of my DSA learning journey.