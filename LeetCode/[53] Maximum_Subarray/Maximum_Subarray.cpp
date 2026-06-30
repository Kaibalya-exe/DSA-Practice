/*
Problem: LeetCode #53 - Maximum Subarray
Difficulty: Medium

Approach:
Kadane's Algorithm

Idea:
- Keep track of the current running sum.
- Update the maximum sum found.
- Reset current sum when it becomes negative.

Time Complexity: O(n)
Space Complexity: O(1)

Learning Notes:
After understanding the brute force
approach, I learned Kadane's Algorithm
which optimizes the solution from
quadratic time to linear time.
*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cs = 0 ;
        int mx = INT_MIN ;

        for (int i : nums)
        {
            cs += i ;
            mx = max(mx , cs) ;

            if(cs < 0)
            {
                cs = 0 ;
            }
        }

        return mx ;
    }
};