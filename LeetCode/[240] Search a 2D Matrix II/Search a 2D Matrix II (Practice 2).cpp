/*
==========================================================
Problem: Search a 2D Matrix II
Approach: Bottom-Left Corner Traversal
Difficulty: Medium

Concepts Used:
- Matrix Traversal
- Search Space Elimination

Time Complexity:
O(rows + cols)

Space Complexity:
O(1)

Learning:
- Same algorithm as the top-right solution.
- Starts from the bottom-left corner.
- Move upward when current element is larger.
- Move right when current element is smaller.
- Helps understand the symmetry of the algorithm.
==========================================================
*/

#include <iostream>

using namespace std;

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
    
    int r = rows - 1 ;
    int c = 0 ;
    
    bool found = false ;
    
    while (r >= 0 && c < cols)
    {
        if (mat[r][c] == target)
        {
            found = true ;
            break ;
        }
        else if (mat[r][c] < target)
        {
            c++ ;
        }
        else
        {
            r-- ;
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