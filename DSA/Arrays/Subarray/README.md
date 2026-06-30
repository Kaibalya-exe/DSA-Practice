# Maximum Subarray Sum

## Topic
Arrays → Subarrays → Optimization → Kadane's Algorithm

---

## Problem Statement

Given an integer array, find the contiguous subarray having the largest sum and return that sum.

---

## What is a Subarray?

A subarray is a contiguous portion of an array.

Example:

```text
Array:
[1,2,3]

Subarrays:
[1]
[1,2]
[1,2,3]
[2]
[2,3]
[3]
```

---

## Formula for Total Number of Subarrays

For an array of size n:

```text
n(n+1)/2
```

Example:

```text
n = 5

5(5+1)/2
= 15 subarrays
```

---

# Approach 1: Brute Force

## Idea

Generate every possible subarray and calculate its sum.

### Steps

1. Start from every index.
2. Extend the subarray.
3. Maintain the current sum.
4. Store the maximum sum encountered.

---

## Code Complexity

### Time Complexity

```text
O(n²)
```

### Space Complexity

```text
O(1)
```

---

# Approach 2: Kadane's Algorithm

## Idea

Instead of checking all subarrays:

- Maintain a running sum.
- Update maximum sum.
- If current sum becomes negative, reset it to zero.

---

## Kadane's Algorithm

```text
Current Sum += Current Element

If Current Sum > Maximum Sum
    Update Maximum Sum

If Current Sum < 0
    Reset Current Sum
```

---

## Complexity

### Time Complexity

```text
O(n)
```

### Space Complexity

```text
O(1)
```

---

## What I Learned

Through this problem I learned:

- What subarrays are
- Formula for counting subarrays
- Brute force approaches
- Running sums
- Optimization techniques
- Kadane's Algorithm
- Transitioning from O(n²) to O(n)

---

## Notes

Initially I needed help understanding how to generate all possible subarrays because this was my first exposure to the topic.

After understanding the brute force approach, I successfully implemented Kadane's Algorithm and solved the optimized version.