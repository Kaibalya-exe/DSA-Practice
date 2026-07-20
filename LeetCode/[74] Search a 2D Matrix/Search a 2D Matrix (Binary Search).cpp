/*
==========================================
Topic      : Search a 2D Matrix (Binary Search)
Language   : C++
Author     : Kaibalya Patra

Description:
Optimized search in a sorted matrix using
Binary Search.

Approach:
1. Binary Search to locate the correct row.
2. Binary Search within that row.

Concepts Learned:
- Binary Search
- Matrix Search
- Search Space Reduction
- Nested Binary Search

Algorithm:
Binary Search

Time Complexity : O(log(rows) + log(cols))
Space Complexity: O(1)
==========================================
*/

#include <iostream>

using namespace std;

//Search a 2D Matrix : Binary Search : 

int main()
{
    int rows = 3 ;
    int cols = 4 ;
    int mat[rows][cols] = {
                            { 1 , 3 , 5 , 7 },
                            { 10 , 11 , 16 , 20} ,
                            { 23 , 30 , 34 , 60}
    };
    
    int target = 34 ;
    
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
                    cout << "true" ;
                    return 0 ;
                }
                else if (mat[midr][mid] <= target )
                {
                    start = mid + 1 ;
                }
                else
                {
                    end = mid - 1 ;
                }
            }
            
            cout << "False" ;
            return 0 ;
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
    
    return 0 ;
}