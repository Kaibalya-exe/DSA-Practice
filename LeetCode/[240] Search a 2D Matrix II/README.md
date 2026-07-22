# Search a 2D Matrix II

## Problem

Given an `m x n` matrix where:

- Each row is sorted in ascending order.
- Each column is sorted in ascending order.

Determine whether a target value exists in the matrix.

---

# What I Tried

Initially I knew the required time complexity meant a brute force solution wouldn't work.

I also knew Binary Search had to be involved somehow, but I couldn't figure out how to apply it because:

- Rows are sorted.
- Columns are sorted.
- The entire matrix is **not globally sorted**.

After understanding the concept, I learned a completely different way of searching.

I also implemented both possible starting positions to fully understand the algorithm.

---

# Approach 1

## Start from Top-Right Corner

Current Element = matrix[0][lastColumn]

Three possibilities:

- Current == Target → Found
- Current > Target → Move Left
- Current < Target → Move Down

Every comparison removes one complete row or one complete column from consideration.

---

# Approach 2

## Start from Bottom-Left Corner

Current Element = matrix[lastRow][0]

Three possibilities:

- Current == Target → Found
- Current > Target → Move Up
- Current < Target → Move Right

This is the exact mirror image of the first approach.

---

# Why This Works

At the top-right corner:

Everything below is larger.

Everything left is smaller.

So one comparison immediately tells us which direction can safely be discarded.

This reduces the search space continuously.

---

# Algorithm

1. Start from the top-right element.
2. Compare with target.
3. If current > target
   - Move left.
4. If current < target
   - Move down.
5. Repeat until found or indices go out of bounds.

---

# Complexity

Time Complexity:

O(rows + cols)

Space Complexity:

O(1)

---

# Learning

- Learned that Binary Search isn't always about repeatedly finding the middle.
- Sometimes Binary Search concepts are used to eliminate search space efficiently.
- Understood how sorted rows and sorted columns allow directional movement.
- Implemented both top-right and bottom-left approaches to strengthen understanding.
- Solved and submitted LeetCode #240 successfully.