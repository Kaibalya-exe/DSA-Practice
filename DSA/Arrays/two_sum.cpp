/*
Problem: LeetCode #1 - Two Sum
Difficulty: Easy
Topic: Arrays

Approach:
- Used a brute-force approach.
- Iterated through every possible pair of elements.
- Returned indices when their sum matched the target.

Time Complexity: O(n²)
Space Complexity: O(1)

Learning:
This was my first DSA problem on LeetCode solved independently.
Through this problem, I practiced:
- Nested loops
- Array traversal
- Index handling
- Debugging logical errors

Notes:
This was my first DSA problem solved independently on LeetCode.
I first attempted a complete program using arrays and nested loops,
then adapted it to LeetCode's function-based format.
*/

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