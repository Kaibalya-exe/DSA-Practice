# Merge Sorted Array (LeetCode #88)

## Problem

Merge two sorted arrays into one sorted array.

The first array (`nums1`) contains enough extra space to hold all elements from `nums2`.

---

## My Learning Journey

Instead of directly learning the optimal solution, I wanted to solve the problem independently.

### Attempt 1

Merged both arrays by replacing zeros with elements from `nums2`, then Bubble Sorted the complete array.

Although correct, this approach was inefficient.

---

### Attempt 2

While testing larger cases, I realized replacing zeros from the front fails for several edge cases.

Started inserting elements from the back.

---

### Attempt 3

Fixed another failing test case involving duplicate values.

The solution finally worked correctly.

However, the time complexity was still not satisfactory.

---

### Attempt 4

Tried replacing Bubble Sort with the STL `sort()` function.

Although cleaner, this still didn't satisfy the required optimal complexity.

---

### Final Approach

Learned the official optimal solution.

Instead of sorting afterwards:

- Start from the end of both arrays.
- Compare the largest remaining elements.
- Place the larger element at the last empty position.
- Continue until all elements are merged.

No extra sorting required.

---

## Algorithm Used

Three Pointer Technique

Pointers:

- i → last valid element of nums1
- j → last element of nums2
- idx → last position of nums1

Move backwards while comparing elements.

---

## Complexity

Time Complexity: **O(m+n)**

Space Complexity: **O(1)**

---

## Key Learnings

- Correct solutions are not always optimal.
- Test cases reveal hidden flaws.
- Solving multiple versions improves understanding.
- Backward merging avoids unnecessary sorting.

---

## Files

- Merge Sorted Array.cpp
- LeetCode 88.cpp