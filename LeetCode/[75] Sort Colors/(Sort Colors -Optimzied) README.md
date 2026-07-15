# Sort Colors

## Problem

Given an array containing only `0`, `1`, and `2`, sort the array in-place without using the built-in sort function.

---

# Approaches Implemented

## 1. Bubble Sort (Brute Force)

Previously implemented to understand the problem.

### Complexity

Time: O(n²)

Space: O(1)

---

## 2. Counting Sort (Optimized)

### Algorithm

1. Count the number of 0s.
2. Count the number of 1s.
3. Count the number of 2s.
4. Rewrite the array using the counts.

### Complexity

Time: O(n)

Space: O(1)

---

## 3. Dutch National Flag Algorithm (Optimal)

### Algorithm

Maintain three pointers:

- low
- mid
- high

Rules:

- If current element is 0
  - Swap with low
  - low++
  - mid++

- If current element is 1
  - mid++

- If current element is 2
  - Swap with high
  - high--

Continue until:

```
mid > high
```

---

## Complexity

Time:
O(n)

Space:
O(1)

---

## Comparison

| Approach | Time | Space |
|----------|------|-------|
| Bubble Sort | O(n²) | O(1) |
| Counting Sort | O(n) | O(1) |
| Dutch National Flag | O(n) | O(1) |

---

## What I Learned

While solving this problem, I gradually improved my solution through multiple approaches.

- Started with Bubble Sort to reinforce sorting concepts.
- Learned how Counting Sort uses frequency counting to achieve linear time.
- Finally understood and implemented the Dutch National Flag Algorithm using three pointers.

This problem taught me that one question can have multiple valid solutions, each improving on the previous in terms of efficiency and elegance.