/*
Problem: LeetCode #136 - Single Number
Difficulty: Easy

Problem Statement:
Given an array where every element appears twice
except one element, find the element that appears once.

Approach:
Initially, I attempted to solve this problem using
a brute-force approach.

After understanding the problem constraints:
- O(n) time complexity
- O(1) extra space

I learned that the optimal solution uses the
Bitwise XOR operator.

XOR Properties:
a ^ a = 0
a ^ 0 = a

Therefore, all duplicate elements cancel out,
leaving only the unique element.

Time Complexity: O(n)
Space Complexity: O(1)

Learning Notes:
This problem introduced me to the practical
application of Bit Manipulation and XOR operations.
*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
    int ans = 0 ;
    
    for (int i : nums)
    {
        ans ^= i ; 
    }

     return ans;
    }
};