/*
==========================================
Topic      : Linear Search in a 2D Array
Language   : C++
Author     : Kaibalya Patra

Description:
Demonstrates the basics of 2D Arrays by
performing Linear Search to locate a
target element in a matrix using nested loops.

Concepts Learned:
- 2D Arrays
- Matrix Traversal
- Nested Loops
- Linear Search
- Row & Column Indexing

Time Complexity : O(rows × columns)
Space Complexity: O(1)
==========================================
*/

#include <iostream>

using namespace std;

//Linear Search in a 2D Array :

int main()
{
    int arr[4][3] = {{1 , 2 , 3 } , { 4 , 5 , 6} , { 7 , 8 , 9} , { 10 , 11 , 12 }} ;
    int rows = 4 ;
    int cols = 3 ;
    
    int target = 8 ;
    
    for(int i = 0 ; i < rows ; i++)
    {
        for(int j = 0 ; j < cols ; j++)
        {
            if (arr[i][j] == target)
            {
                cout << "Found Target Element at : " << i << " , " << j ;
                break ;
            }
        }
    }
    
    return 0 ;
}