# LeetCode #53 - Maximum Subarray

## Difficulty

Medium

---

## Problem Statement

Given an integer array nums, find the subarray with the largest sum and return its sum.

---

## My Initial Thought Process

My first approach was using brute force by generating all possible subarrays and calculating their sums.

Although it works, the time complexity is O(n²).

After learning Kadane's Algorithm, I was able to optimize the solution to O(n).

---

## Optimal Approach - Kadane's Algorithm

### Logic

- Maintain a current running sum.
- Update the maximum sum whenever a larger sum is found.
- Reset the running sum whenever it becomes negative.

---

## Solution

```cpp
class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int cs = 0;
        int mx = INT_MIN;

        for (int i : nums)
        {
            cs += i;
            mx = max(mx, cs);

            if (cs < 0)
            {
                cs = 0;
            }
        }

        return mx;
    }
};
```

---

## Complexity Analysis

### Time Complexity

```text
O(n)
```

### Space Complexity

```text
O(1)
```

---

## Concepts Practiced

- Arrays
- Subarrays
- Running Sum
- Greedy Approach
- Kadane's Algorithm
- Optimization Techniques

---

## What I Learned

This problem taught me:

- How to work with subarrays
- Why brute force solutions can be inefficient
- How optimization patterns work
- The importance of Kadane's Algorithm
- How to reduce time complexity from O(n²) to O(n)