/*
==========================================================
LeetCode 240 - Search a 2D Matrix II

Approach:
Top-Right Corner Search

Algorithm:
Matrix Search using Row & Column Elimination

Time Complexity:
O(rows + cols)

Space Complexity:
O(1)

Status:
Accepted

Learning:
- Binary search is not directly applicable because the matrix
  is only sorted row-wise and column-wise.
- Every comparison removes an entire row or column,
  making the solution linear in terms of rows + columns.
==========================================================
*/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int rows = mat.size() ;
        int cols = mat[0].size() ;

        int r = 0 ;
        int c = cols - 1 ;

        while (r < rows && c >= 0)
        {
            if (mat[r][c] == target)
            {
                return true ;
            }
            else if (mat[r][c] < target)
            {
                r++ ;
            }
            else
            {
                c-- ;
            }
        }

        return false;
    }
};