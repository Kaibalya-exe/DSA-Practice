# Aggressive Cows (SPOJ)

## Problem

Given the positions of several stalls and a fixed number of cows, place the cows in such a way that the **minimum distance between any two cows is maximized**.

---

## Concepts Used

- Binary Search on Answer
- Greedy Algorithm
- Sorting
- Feasibility Check

---

## My Learning

Initially I assumed this problem would be similar to Book Allocation and Painter's Partition because all of them use Binary Search.

However, I quickly realized that although the pattern is similar, the search space is completely different.

Instead of searching for the minimum possible value, this problem asks us to maximize the minimum distance between cows.

Understanding the search space took multiple attempts.

After studying the algorithm several times and explaining each step to myself, I finally understood the complete solution and can now confidently explain how and why it works.

---

## Algorithm

1. Sort all stall positions.
2. Binary Search on the minimum distance.
3. For every candidate distance:
   - Place the first cow in the first stall.
   - Greedily place each next cow in the earliest stall that maintains at least the required distance.
4. If all cows can be placed:
   - Save the answer.
   - Try a larger distance.
5. Otherwise:
   - Reduce the distance.

---

## Time Complexity

Sorting:
O(N log N)

Binary Search:
O(log(MaxDistance))

Checking feasibility:
O(N)

Overall:

O(N log N + N log(MaxDistance))

---

## Space Complexity

O(1)

---

## What I Learned

- Binary Search can be performed on the answer instead of indices.
- Greedy placement guarantees the correct feasibility check.
- Sorting simplifies the placement process.
- Understanding the search space is the hardest part of these Binary Search optimization problems.
- Sometimes understanding an algorithm deeply requires multiple attempts, and that's completely normal.