/*
LeetCode #33 - Search in Rotated Sorted Array

Approach:
Modified Binary Search

Time Complexity:
O(log n)

Space Complexity:
O(1)

Concepts Learned:
- Binary Search
- Rotated Sorted Arrays
- Divide and Conquer

Learning Notes:
Initially this problem looked different
from normal Binary Search. After learning
that one half of the rotated array is
always sorted, I understood how Binary
Search can still be applied efficiently.
*/

class Solution {
public:
    int search(vector<int>& nums, int target) {

        int n = nums.size() ;
        int start = 0 ;
        int end = n - 1 ;

        while ( start <= end )
        {
            int mid = start + ( end - start ) / 2 ;

            if ( nums[mid] == target )
            {
                return mid ;
            }

            if ( nums[start] <= nums[mid] )       //Left Half Sorted :
            {
                if ( nums[start] <= target && target <= nums[mid] )    //Left : 
                {
                    end = mid - 1 ;
                }
                else                                                //Right :
                {
                    start = mid + 1 ;
                }
            }
            else                                //Right Half Sorted :
            {
                if ( nums[mid] <= target && target <= nums[end] )     //Right :
                {
                    start = mid + 1 ;
                }
                else                                                //Left :
                {
                    end = mid - 1 ;
                }
            }
        }

        return -1 ;
        
    }
};