# Container With Most Water

LeetCode Problem #11

---

## Problem Statement

Given an array representing heights,
find two lines that can contain
the maximum amount of water.

---

# Approach 1: Initial Brute Force

My first approach was:

- Compare every pair.
- Calculate the area.

Example:

```text
(1,2)
(2,1)
```

This resulted in duplicate checks.

---

## Complexity

```text
O(n²)
```

---

# Approach 2: Improved Brute Force

I fixed the duplicate pair issue by changing:

```cpp
for(j=i+1;j<n;j++)
```

This removed redundant computations.

However, the solution still produced TLE because the overall complexity remained O(n²).

---

# Approach 3: First Two Pointer Attempt

After learning about the optimized approach, I attempted to implement it independently.

My first implementation had logical errors in:

- pointer movement
- area calculation order

This helped me understand the importance of calculating the area before moving pointers.

---

# Approach 4: Optimized Two Pointer Solution

## Algorithm

1. Place one pointer at the start.
2. Place one pointer at the end.
3. Calculate current area.
4. Move the pointer with smaller height.
5. Continue until both pointers meet.

---

## Why It Works

The height of the smaller line limits the container.

Moving the taller line cannot increase the area.

Therefore, always move the smaller height.

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

# Concepts Learned

- Brute Force
- Duplicate Computation
- Time Complexity Analysis
- Two Pointer Technique
- Greedy Optimization
- Debugging Logic Errors

---

# Personal Learning Notes

I was able to independently derive the brute force solution.

After discovering Time Limit Exceeded issues, I learned the two pointer approach and implemented the optimized solution myself after understanding the algorithm.