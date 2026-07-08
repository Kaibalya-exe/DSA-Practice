# LeetCode #33 - Search in Rotated Sorted Array

## Difficulty

Medium

---

## Problem Statement

Given a rotated sorted array and a target value, return the index of the target.

If the target is not present, return `-1`.

The solution must run in **O(log n)** time.

---

## Example

### Input

```text
nums = [4,5,6,7,0,1,2]
target = 0
```

### Output

```text
4
```

---

# Observation

A rotated sorted array looks unsorted at first glance.

Example:

```text
4 5 6 7 0 1 2
```

However,

**one half of the array is always sorted.**

This observation makes Binary Search possible.

---

# Algorithm

For every iteration:

1. Find the middle element.
2. Determine which half is sorted.
3. Check whether the target lies inside that sorted half.
4. Search the appropriate half.
5. Repeat until the target is found.

---

## Visualization

```text
Array

4 5 6 7 0 1 2
^     ^     ^
L     M     R

Left half is sorted.

If target lies between:

4 and 7

Search Left

Otherwise

Search Right
```

---

# Solution

```cpp
class Solution {
public:
    int search(vector<int>& nums, int target) {

        int start = 0;
        int end = nums.size() - 1;

        while(start <= end)
        {
            int mid = start + (end - start) / 2;

            if(nums[mid] == target)
                return mid;

            if(nums[start] <= nums[mid])
            {
                if(nums[start] <= target && target <= nums[mid])
                    end = mid - 1;
                else
                    start = mid + 1;
            }
            else
            {
                if(nums[mid] <= target && target <= nums[end])
                    start = mid + 1;
                else
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
- Modified Binary Search
- Divide and Conquer
- Rotated Sorted Arrays
- Searching Algorithms

---

# What I Learned

While solving this problem, I learned:

- A rotated sorted array always has one sorted half.
- Binary Search can still be applied with slight modifications.
- How to determine which half is sorted.
- How to eliminate half of the search space in every iteration.

---

# Personal Notes

This problem initially seemed difficult because the array was no longer fully sorted.

After understanding the key observation that one side is always sorted, the Binary Search logic became much clearer. It showed me how a familiar algorithm can be adapted to solve more complex problems.