# Insertion Sort

## Overview

Insertion Sort builds a sorted array one element at a time by inserting each new element into its correct position within the already sorted portion.

It performs efficiently on small or nearly sorted datasets and is commonly used as a base case in more advanced sorting algorithms.

---

## Algorithm

1. Assume the first element is already sorted.
2. Pick the next element.
3. Compare it with previous elements.
4. Shift larger elements one position to the right.
5. Insert the current element into its correct position.
6. Repeat until the entire array is sorted.

---

## Example

Input

```
4 1 5 2 3
```

Pass 1

```
1 4 5 2 3
```

Pass 2

```
1 4 5 2 3
```

Pass 3

```
1 2 4 5 3
```

Pass 4

```
1 2 3 4 5
```

Sorted Output

```
1 2 3 4 5
```

---

## Time Complexity

| Case | Complexity |
|------|------------|
| Best | O(n) |
| Average | O(n²) |
| Worst | O(n²) |

---

## Space Complexity

```
O(1)
```

---

## Characteristics

- Comparison-based sorting algorithm
- Stable Sorting Algorithm
- In-place sorting
- Efficient for nearly sorted arrays
- Frequently used in hybrid sorting algorithms

---

## What I Learned

While implementing Insertion Sort, I learned:

- How shifting elements differs from swapping.
- Why Insertion Sort performs well on nearly sorted arrays.
- How the sorted portion of the array grows after every iteration.
- Why its best-case complexity is O(n).

---

## Files

- `InsertionSort.cpp`