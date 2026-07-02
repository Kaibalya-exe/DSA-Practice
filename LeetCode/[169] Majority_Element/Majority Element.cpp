/*
Problem: LeetCode #169 - Majority Element

Difficulty: Easy

Approach:
Moore's Voting Algorithm

Why it works:
The majority element appears more than
n/2 times, therefore all other elements
can be cancelled out.

Time Complexity: O(n)
Space Complexity: O(1)

Concepts Learned:
- Majority Element
- Frequency cancellation
- Moore's Voting Algorithm
- Array optimization
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n = nums.size() ;
        int count = 0 ;
        int ans = 0 ;

        for(int i = 0 ; i < n ; i++ )
        {
            if ( count == 0 )
            {
                ans = nums[i] ;
            }
            
            if ( ans == nums[i] )
            {
                count++ ;
            }
            else
            {
                count-- ;
            }
        }

        return ans ;

    }
};