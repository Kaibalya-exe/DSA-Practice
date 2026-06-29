# LeetCode #1 — Two Sum

## Problem Statement

Given an array of integers `nums` and an integer `target`, return the indices of the two numbers such that they add up to the target.

You may assume that each input has exactly one solution, and you may not use the same element twice.

---

## Example

Input:

```text
nums = [2,7,11,15]
target = 9
```

Output:

```text
[0,1]
```

Explanation:

```text
nums[0] + nums[1] = 2 + 7 = 9
```

---

## My Approach

This was my first DSA problem solved on LeetCode.

My initial thought process was straightforward:

* Traverse through the array.
* Compare every element with every other element.
* Check whether their sum equals the target.
* Return the indices if the target sum is found.

This approach uses nested loops and is commonly referred to as the **Brute Force Approach**.

---

## Solution

```cpp
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if ((nums[i] + nums[j]) == target)
                {
                    return {i, j};
                }
            }
        }

        return {};
    }
};
```

---

## Complexity Analysis

### Time Complexity

```text
O(n²)
```

Since every element is compared with every other element.

### Space Complexity

```text
O(1)
```

No extra data structure is used.

---

## What I Learned

Through this problem, I learned:

* How to iterate through arrays using nested loops
* How to avoid using the same element twice
* Basic problem-solving techniques
* Debugging logical and indexing errors
* Understanding brute-force solutions before optimization
* The LeetCode function structure in C++

---

## Notes

Although this problem is labeled "Easy" on LeetCode, solving it independently took me considerable time because I am currently learning C++ and Data Structures & Algorithms simultaneously.

Rather than looking up the solution, I chose to solve it on my own, which helped me understand the problem-solving process more deeply.

This marks the beginning of my DSA journey.
