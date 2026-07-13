# Bubble Sort

## Problem

Sort the given array in ascending order using Bubble Sort.

---

## Concepts Learned

- Sorting Basics
- Adjacent Element Comparison
- Swapping Elements
- Nested Loops
- Time Complexity Analysis
- Bubble Sort Optimization
- Early Exit Technique

---

## Algorithm (Bubble Sort)

1. Compare adjacent elements.
2. Swap them if they are in the wrong order.
3. Repeat for the remaining unsorted portion.
4. After every pass, the largest element reaches its correct position.

---

## Optimized Bubble Sort

Instead of always completing all passes:

- Use a boolean variable `isSwap`.
- If no swap happens during a complete pass,
  the array is already sorted.
- Stop immediately.

This improves:

Best Case Time Complexity:

O(n)

instead of

O(n²)

---

## Complexity

### Standard Bubble Sort

Time:
- Best: O(n²)
- Average: O(n²)
- Worst: O(n²)

Space:
O(1)

---

### Optimized Bubble Sort

Time:
- Best: O(n)
- Average: O(n²)
- Worst: O(n²)

Space:
O(1)

---

## Files

- BubbleSort.cpp
- BubbleSortOptimized.cpp

---

## What I Learned

Today I learned my first sorting algorithm.

I understood:

- How Bubble Sort works step by step.
- Why the largest element reaches the end after every pass.
- How adjacent swapping gradually sorts the array.
- How to optimize Bubble Sort using an early exit condition.
- Why Bubble Sort is mainly used for learning purposes rather than production code due to its O(n²) time complexity.

This marks the beginning of learning sorting algorithms in my DSA journey.