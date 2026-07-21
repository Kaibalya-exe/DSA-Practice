/*
==========================================
Topic      : LeetCode 74 - Search a 2D Matrix
Language   : C++
Author     : Kaibalya Patra

Description:
Searches for a target element in a sorted
2D matrix using Binary Search.

Approach:
1. Binary Search on rows to locate the
   candidate row.
2. Binary Search within that row to
   search for the target.

Concepts Learned:
- Binary Search
- Matrix Search
- Search Space Reduction
- Nested Binary Search

Algorithm:
Two-Stage Binary Search

Time Complexity : O(log(rows) + log(cols))
Space Complexity: O(1)

Status:
✔ Accepted on LeetCode
==========================================
*/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {

        int rows = mat.size();
        int cols = mat[0].size();

        //To search the correct Row : 
    
    int st = 0 ; 
    int end = rows - 1 ;
    
    //Binary Search for correct Row :
    
    while (st <= end)
    {
        int midr = st + ( end - st ) / 2 ;
        
        if (mat[midr][0] <= target && target <= mat[midr][cols - 1])
        {
            //Inside Correct Row : 
            //Applying binary search to find the target element : 
            
            int start = 0 ;
            int end = cols - 1 ;
            
            while (start <= end)
            {
                int mid = start + ( end - start ) / 2 ;
                
                if (mat[midr][mid] == target)
                {
                    return true ;
                }
                else if (mat[midr][mid] < target )
                {
                    start = mid + 1 ;
                }
                else
                {
                    end = mid - 1 ;
                }
            }

            return false ;
        }
        else if (target > mat[midr][cols - 1])
        {
            st = midr + 1 ;
        }
        else
        {
            end = midr - 1 ;
        }
    }

    return 0;

    }
};