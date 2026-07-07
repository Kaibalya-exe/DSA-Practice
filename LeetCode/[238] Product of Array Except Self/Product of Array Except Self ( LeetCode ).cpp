/*
LeetCode #238 - Product of Array Except Self

Approach:
Optimized Prefix and Suffix Product Arrays

Problem:
Given an integer array nums, return an array answer such that:

answer[i] = product of all elements except nums[i]

Constraints:
- Division operator cannot be used.
- Solution should run efficiently.

Algorithm:
1. Create a prefix product array (left).
2. Create a suffix product array (right).
3. Multiply left[i] and right[i] to obtain the final answer.

Example:

nums = [1,2,3,4]

Left:
[1,1,2,6]

Right:
[24,12,4,1]

Answer:
[24,12,8,6]

Time Complexity:
O(n)

Space Complexity:
O(n)

Concepts Practiced:
- Arrays
- Prefix Product
- Suffix Product
- Optimization
- Dynamic Precomputation

Learning Notes:
I first solved this problem using a brute-force approach.
Although I understood the logic, I couldn't derive the
optimized solution immediately. After studying the prefix
and suffix product technique, I implemented the optimized
solution myself and understood how it reduces the time
complexity from O(n²) to O(n).
*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size() ;

        vector<int> left (n , 1) ;
        vector<int> right (n , 1) ;
        vector<int> answer (n , 1) ;
        
        left[0] = 1 ;
        right[n-1] = 1 ;

        for (int i = 1 ; i < n ; i++ )
        {
            left[i] = left[i - 1] * nums[i -1] ;
        }

        for (int i = n - 2 ; i >= 0 ; i-- )
        {
            right[i] = right[i + 1] * nums[i + 1] ;
        }

        for (int i = 0 ; i < n ; i++ )
        {
            answer[i] = left[i] * right[i] ;
        }

        return answer ;
    }
};