# Next Permutation (LeetCode #31)

## Problem

Given an array of integers, rearrange it into the next lexicographically greater permutation.

If such a permutation doesn't exist, rearrange it into the smallest possible order.

---

## My Learning

This problem was significantly different from previous array problems.

I first spent time trying to derive my own logic.

Unfortunately, I couldn't identify the pattern required for the solution.

Instead of memorizing it, I focused on understanding why each step works.

---

## Algorithm

The solution consists of three important steps.

### Step 1

Find the Pivot.

Traverse from right to left until finding the first element smaller than its next element.

---

### Step 2

Find the next larger element.

Again traverse from the end and swap it with the pivot.

---

### Step 3

Reverse everything after the pivot.

This guarantees the next smallest lexicographical arrangement.

---

## Complexity

Time Complexity: **O(n)**

Space Complexity: **O(1)**

---

## Key Learnings

- Lexicographical ordering
- Pivot concept
- Reverse traversal
- In-place array modification
- Why reversing the suffix guarantees the immediate next permutation

---

## Files

- Next Permutation.cpp
- LeetCode 31.cpp