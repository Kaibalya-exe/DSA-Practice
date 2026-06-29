# LeetCode #136 - Single Number

## Problem Statement

Given a non-empty array of integers where every element appears twice except for one, find the element that appears only once.

Constraints:
- Linear runtime complexity O(n)
- Constant extra space O(1)

---

## Example

Input:

```text
[2,2,1]
```

Output:

```text
1
```

---

## My Initial Approach

Initially, I attempted to solve this problem using a brute-force approach by comparing frequencies of elements.

However, after reading the problem constraints, I realized that the solution required:

- O(n) time complexity
- O(1) extra memory

This led me to learn about the Bitwise XOR operator.

---

## XOR Properties

```text
a ^ a = 0
a ^ 0 = a
```

Example:

```text
2 ^ 2 ^ 1
= 0 ^ 1
= 1
```

Since every duplicate element cancels itself out, only the unique element remains.

---

## Solution

```cpp
class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int ans = 0;

        for(int i : nums)
        {
            ans ^= i;
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

## What I Learned

- Bit Manipulation basics
- XOR operator properties
- Constraint-based thinking
- How optimal solutions can differ from brute-force approaches