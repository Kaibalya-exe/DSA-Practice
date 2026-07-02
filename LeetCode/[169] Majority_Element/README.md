# LeetCode #169 - Majority Element

## Difficulty
Easy

---

## Problem Statement

Given an array `nums` of size `n`, return the majority element.

The majority element is the element that appears more than `⌊n/2⌋` times.

You may assume that the majority element always exists in the array.

---

## Example

### Input

```text
nums = [2,2,1,1,1,2,2]
```

### Output

```text
2
```

---

# My Initial Approach (Brute Force)

Initially, I attempted to solve the problem using a brute-force approach.

### Algorithm

1. Traverse each element.
2. Count how many times it appears.
3. Keep track of the highest frequency.
4. Store the element with the highest frequency.

### Code Complexity

**Time Complexity:**

```text
O(n²)
```

**Space Complexity:**

```text
O(1)
```

Although this approach works, it becomes inefficient for larger inputs.

---

# Optimized Approach - Moore's Voting Algorithm

After solving the brute-force approach, I learned about **Moore's Voting Algorithm**, which solves the problem in linear time using constant extra space.

---

## Intuition

The majority element appears more than `n/2` times.

This means that if we pair every occurrence of the majority element with every occurrence of a different element, the majority element will still remain.

Example:

```text
[1, 2, 1, 2, 1]

Cancel pairs:

1 × 2
1 × 2

Remaining:

1
```

---

## Algorithm

1. Initialize:
   - candidate = 0
   - count = 0

2. Traverse the array:
   - If count becomes 0, select the current element as the candidate.
   - If the current element equals the candidate, increment count.
   - Otherwise, decrement count.

3. The remaining candidate is the majority element.

---

## Solution

```cpp
class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int n = nums.size();
        int count = 0;
        int ans = 0;

        for(int i = 0; i < n; i++)
        {
            if(count == 0)
            {
                ans = nums[i];
            }

            if(ans == nums[i])
            {
                count++;
            }
            else
            {
                count--;
            }
        }

        return ans;
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
- Frequency Counting
- Optimization
- Candidate Elimination
- Moore's Voting Algorithm
- Time Complexity Analysis

---

## What I Learned

While solving this problem, I learned:

- How to solve majority element using brute force.
- How to track frequencies of elements.
- Why brute-force solutions can be inefficient.
- The intuition behind Moore's Voting Algorithm.
- How candidate elimination works.
- How to optimize a solution from O(n²) to O(n).

---

## Personal Notes

Initially, I was able to determine the frequency of elements using a brute-force approach, but I struggled to identify and store the element with the maximum frequency.

After understanding Moore's Voting Algorithm, I implemented the optimized solution myself and gained a better understanding of how certain algorithms use mathematical properties to achieve better performance.