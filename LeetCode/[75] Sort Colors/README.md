# LeetCode 75 - Sort Colors

## Problem

Given an array containing only `0`, `1`, and `2`, sort it in-place without using the library sort function.

---

## Approach Used

Bubble Sort (Brute Force)

Although this is not the optimal solution, it helped reinforce sorting fundamentals before learning the optimal algorithm.

---

## Algorithm

1. Compare adjacent elements.
2. Swap whenever the left element is greater than or equal to the right.
3. Repeat until the array becomes sorted.

---

## Complexity

Time:
O(n²)

Space:
O(1)

---

## Learning

While solving this problem, I intentionally used Bubble Sort because I had just finished learning basic sorting algorithms.

The next step will be implementing the **Dutch National Flag Algorithm**, which solves the problem in **O(n)** time using three pointers.