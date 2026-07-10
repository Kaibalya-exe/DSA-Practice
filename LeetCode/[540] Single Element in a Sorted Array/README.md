# LeetCode #540 - Single Element in a Sorted Array

## Difficulty

Medium

---

## Problem Statement

Given a sorted array where every element appears exactly twice except for one element, return the single element.

The solution must run in **O(log n)** time and use **O(1)** extra space.

---

## Example

### Input

```text
[1,1,2,3,3,4,4,8,8]
```

### Output

```text
2
```

---

# Observation

Since the required complexity is **O(log n)**, Binary Search is the expected approach.

The important observation is:

Before the single element:

```text
Index

0 1 2 3 4 5

1 1 2 2 3 3

Pairs start at EVEN indices.
```

After the single element:

```text
0 1 2 3 4 5 6

1 1 2 3 3 4 4

Pairs now start at ODD indices.
```

This shift tells us which half still contains the answer.

---

# Algorithm

1. Handle edge cases.
2. Calculate the middle index.
3. Check whether the middle element is the unique element.
4. If the middle index is even:
   - Compare it with the next element.
5. If the middle index is odd:
   - Compare it with the next element.
6. Eliminate half of the array.
7. Repeat until the answer is found.

---

## Visualization

```text
Array

1 1 2 2 3 4 4

0 1 2 3 4 5 6

          ^

Pairing changes here.

Binary Search detects which side
still follows the normal pairing.
```

---

# Solution

```cpp
class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {

        int start = 0;
        int end = arr.size() - 1;

        while(start <= end)
        {
            int mid = start + (end - start)/2;

            // Edge cases...

            // Unique element found...

            // Even index logic...

            // Odd index logic...
        }

        return 0;
    }
};
```

---

# Complexity Analysis

### Time Complexity

```text
O(log n)
```

### Space Complexity

```text
O(1)
```

---

# Concepts Practiced

- Binary Search
- Sorted Arrays
- Index Parity
- Edge Case Handling
- Pattern Recognition

---

# What I Learned

While solving this problem, I learned:

- Binary Search can use array properties instead of value comparisons.
- Even and odd indices reveal the pairing pattern.
- Once the single element appears, the pairing shifts.
- Edge cases are essential for preventing out-of-bounds access.

---

# Personal Notes

This problem was very satisfying to solve.

At first I knew Binary Search was the correct approach because of the required time complexity, but I couldn't determine how to divide the search space.

After receiving a small hint about using odd and even indices, I was able to derive the rest of the algorithm and implement the solution almost entirely on my own.

The only additional part I needed to learn was handling edge cases correctly. Solving most of the logic independently made this one of my most rewarding Binary Search problems so far.