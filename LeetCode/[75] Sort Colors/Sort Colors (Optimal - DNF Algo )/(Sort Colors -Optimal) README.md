# Dutch National Flag Algorithm

## Overview

The Dutch National Flag Algorithm is an efficient three-pointer technique used to partition an array containing three distinct values.

It solves LeetCode #75 (Sort Colors) in a single traversal.

---

## Pointers Used

- low
- mid
- high

Initially:

```
low = 0
mid = 0
high = n - 1
```

---

## Algorithm

While `mid <= high`:

### If current element is 0

- Swap with `low`
- Increment `low`
- Increment `mid`

### If current element is 1

- Increment `mid`

### If current element is 2

- Swap with `high`
- Decrement `high`

---

## Time Complexity

O(n)

---

## Space Complexity

O(1)

---

## Why It Works

The algorithm continuously partitions the array into four sections:

```
0s | 1s | Unknown | 2s
```

Each iteration shrinks the unknown section until the array becomes completely sorted.

---

## Learning

Today I learned how a three-pointer strategy can replace multiple passes over the array and solve the problem optimally in linear time.