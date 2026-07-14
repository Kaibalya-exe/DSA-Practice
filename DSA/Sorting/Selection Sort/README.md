# Selection Sort

## Overview

Selection Sort is a simple comparison-based sorting algorithm that repeatedly selects the smallest element from the unsorted portion of the array and places it at its correct position.

Although easy to understand and implement, Selection Sort is inefficient for large datasets because it always performs the same number of comparisons regardless of the input.

---

## Algorithm

1. Assume the first unsorted element is the smallest.
2. Traverse the remaining array.
3. Find the actual smallest element.
4. Swap it with the current position.
5. Repeat for the remaining unsorted elements.

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
1 2 5 4 3
```

Pass 3

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
| Best | O(n²) |
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
- In-place sorting
- Not Stable
- Performs fewer swaps than Bubble Sort
- Always performs O(n²) comparisons

---

## What I Learned

While implementing Selection Sort, I learned:

- How to divide an array into sorted and unsorted portions.
- How to find the minimum element in every iteration.
- Why Selection Sort performs the same number of comparisons regardless of input.
- The importance of swapping only once per pass.

---

## Files

- `SelectionSort.cpp`