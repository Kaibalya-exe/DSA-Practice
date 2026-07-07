# LeetCode #238 - Product of Array Except Self

## Difficulty

Medium

---

## Problem Statement

Given an integer array `nums`, return an array `answer` such that:

```
answer[i] = product of all the elements of nums except nums[i]
```

The solution must:

- Not use the division operator.
- Run in linear time.

---

## Example

### Input

```text
nums = [1,2,3,4]
```

### Output

```text
[24,12,8,6]
```

---

# My Initial Approach (Brute Force)

Initially, I solved the problem using nested loops.

For every index:

- Traverse the entire array.
- Multiply every element except the current one.

Although correct, this approach requires repeated calculations.

### Complexity

Time Complexity

```text
O(n²)
```

Space Complexity

```text
O(1)
```

---

# Optimized Approach

After studying the optimized solution, I learned about using two helper arrays:

- Prefix Product Array
- Suffix Product Array

Instead of recalculating products repeatedly, we store:

- Product of all elements before each index.
- Product of all elements after each index.

---

## Algorithm

### Step 1

Build the Prefix Product array.

```text
left[i] = left[i-1] × nums[i-1]
```

Example:

```text
nums  = [1,2,3,4]

left  = [1,1,2,6]
```

---

### Step 2

Build the Suffix Product array.

```text
right[i] = right[i+1] × nums[i+1]
```

Example:

```text
right = [24,12,4,1]
```

---

### Step 3

Multiply corresponding values.

```text
answer[i] = left[i] × right[i]
```

Result:

```text
answer = [24,12,8,6]
```

---

## Solution

```cpp
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();

        vector<int> left(n, 1);
        vector<int> right(n, 1);
        vector<int> answer(n, 1);

        for(int i = 1; i < n; i++)
            left[i] = left[i-1] * nums[i-1];

        for(int i = n-2; i >= 0; i--)
            right[i] = right[i+1] * nums[i+1];

        for(int i = 0; i < n; i++)
            answer[i] = left[i] * right[i];

        return answer;
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
O(n)
```

---

## Concepts Practiced

- Arrays
- Prefix Products
- Suffix Products
- Dynamic Precomputation
- Time Complexity Optimization

---

## What I Learned

While solving this problem, I learned:

- How to solve the problem using a brute-force approach.
- Why repeated multiplication leads to O(n²) complexity.
- How prefix and suffix product arrays eliminate redundant calculations.
- How precomputing values can optimize an algorithm.
- The importance of identifying reusable computations to improve efficiency.

---

## Personal Notes

I was able to solve the brute-force version of this problem independently. However, I couldn't derive the optimized approach on my own initially.

After understanding the concept of prefix and suffix products, I implemented the optimized solution myself. This problem helped me understand how precomputation techniques can transform an O(n²) solution into an O(n) solution.