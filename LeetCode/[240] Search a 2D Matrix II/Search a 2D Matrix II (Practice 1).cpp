/*
==========================================================
Problem: Search a 2D Matrix II
Approach: Top-Right Corner Traversal
Difficulty: Medium

Concepts Used:
- 2D Arrays
- Matrix Traversal
- Binary Search Thinking
- Row & Column Elimination

Time Complexity:
O(rows + cols)

Space Complexity:
O(1)

Learning:
- Learned that every row and every column is individually sorted.
- Instead of performing binary search on every row,
  eliminate one row or one column in every comparison.
- Start from the top-right element.
- Move left if current element is larger.
- Move down if current element is smaller.
==========================================================
*/

#include <iostream>

using namespace std ;

//Seach a 2D Matrix II : Binary Search : 

int main()
{
    int rows = 5 ; 
    int cols = 5 ;
    int mat[rows][cols] = { { 1 , 4 , 7 , 11 , 15 },
                            { 2 , 5 , 8 , 12 , 19 },
                            { 3 , 6 , 9 , 16 , 22 },
                            { 10, 13, 14, 17 , 24 },
                            { 18, 21, 23, 26 , 30 }};
                            
    int target = 9 ;
    
    int r = 0 ;
    int c = cols - 1 ;
    
    bool found = false ;
    
    while (r < rows && c >= 0)
    {
        if (mat[r][c] == target)
        {
            found = true ;
            break ;
        }
        else if (mat[r][c] > target)
        {
            c-- ;
        }
        else
        {
            r++ ;
        }
    }
    
    if (found == false)
    {
        cout << "False" ;
    }
    else
    {
        cout << "True" ;
    }
    
    return 0 ;
}