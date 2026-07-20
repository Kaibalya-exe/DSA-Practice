/*
==========================================
Topic      : Search a 2D Matrix (Linear Search)
Language   : C++
Author     : Kaibalya Patra

Description:
Searches for a target element by visiting
every element in the matrix.

Concepts Learned:
- 2D Arrays
- Matrix Traversal
- Linear Search
- Nested Loops

Algorithm:
Linear Search

Time Complexity : O(rows × cols)
Space Complexity: O(1)
==========================================
*/

#include <iostream>

using namespace std ;

//Search a 2D Matrix : Linear Search :

int main()
{
    int rows = 3 ;
    int cols = 4 ;
    int arr[rows][cols] = {
                            { 1 , 3 , 5 , 7 },
                            { 10 , 11 , 16 , 20} ,
                            { 23 , 30 , 34 , 60}
    };
    
    int target = 1 ;
    bool found = false ;
    
    for(int i = 0 ; i < rows ; i++)
    {
        for(int j = 0 ; j < cols ; j++)
        {
            if (arr[i][j] == target)
            {
                found = true ;
            }
        }
    }
    
    if (found == false)
    {
        cout << "Target not found" << endl ;
    }
    else
    {
        cout << "Target Found" << endl ;
    }
    
    return 0 ;
}