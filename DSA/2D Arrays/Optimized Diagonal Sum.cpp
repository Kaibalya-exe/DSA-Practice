/*
==========================================
Topic      : Optimized Diagonal Sum
Language   : C++
Author     : Kaibalya Patra

Description:
Optimized diagonal sum calculation by
directly accessing diagonal elements
without traversing the entire matrix.

Concepts Learned:
- Direct Matrix Indexing
- Diagonal Formula
- Time Complexity Optimization

Algorithm:
Direct diagonal traversal.

Time Complexity : O(n)
Space Complexity: O(1)
==========================================
*/

#include <iostream>

using namespace std;

int main()
{
    int arr[3][3] = {{1 , 2 , 3 } ,
                    { 4 , 5 , 6 } ,
                    { 7 , 8 , 9 }} ;
    int n = 3 ;
    int PDsum = 0 ;
    int SDsum = 0 ;
    
    //Diagonal Sum in the matrix : 
    
    for(int i = 0 ; i < n ; i++)
    {
        PDsum += arr[i][i] ;
        SDsum += arr[i][n - i - 1] ;
    }
    
    int sum = PDsum + SDsum ;
    
    cout << "Total Diagonal Sum : " << sum << endl ;

    return 0 ;
}