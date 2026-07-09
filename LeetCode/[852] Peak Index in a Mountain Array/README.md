# LeetCode #852 - Peak Index in a Mountain Array

## Difficulty

Medium

---

## Problem Statement

Given a mountain array, return the index of its peak element.

A mountain array satisfies:

- Strictly increasing sequence.
- Exactly one peak.
- Strictly decreasing sequence.

The solution should run in **O(log n)** time.

---

## Example

### Input

```text
arr = [0,3,8,9,5,2]
```

### Output

```text
3
```

---

# Observation

Since the required time complexity is **O(log n)**, Binary Search is the ideal approach.

The key observation is:

- Before the peak, the array is increasing.
- After the peak, the array is decreasing.

This allows Binary Search to determine which half still contains the peak.

---

# Algorithm

1. Calculate the middle index.
2. Check if the current element is greater than both neighbours.
3. If true, return the current index.
4. Otherwise:
   - If the sequence is increasing, move right.
   - If the sequence is decreasing, move left.
5. Continue until the peak is found.

---

## Visualization

```text
0 3 8 9 5 2
      ^
     mid

Since

9 > 8
9 > 5

Peak Found
```

Another case:

```text
0 3 8 9 5 2
    ^
   mid

Sequence is still increasing

Move Right
```

---

# Solution

```cpp
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        int start = 1;
        int end = arr.size() - 2;

        while(start <= end)
        {
            int mid = start + (end - start) / 2;

            if(arr[mid-1] < arr[mid] &&
               arr[mid] > arr[mid+1])
            {
                return mid;
            }

            else if(arr[mid] > arr[mid-1])
            {
                start = mid + 1;
            }

            else
            {
                end = mid - 1;
            }
        }

        return -1;
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
- Mountain Arrays
- Peak Element
- Divide and Conquer

---

# What I Learned

While solving this problem, I learned:

- Binary Search is not limited to finding target values.
- It can also locate special positions such as peaks.
- A mountain array has predictable increasing and decreasing regions.
- Comparing neighbouring elements helps determine the search direction.

---

# Personal Notes

I recognized from the beginning that Binary Search was required because of the time complexity constraint.

My first attempt was very close, but I made a logical mistake while identifying the peak condition. Although I understood the overall approach, I couldn't immediately find the correct condition on my own.

After studying the concept, I corrected the logic and implemented the solution successfully. This problem reinforced the importance of carefully defining conditions in Binary Search problems.