/*
==========================================
Topic      : Matrix Diagonal Pattern
Language   : C++
Author     : Kaibalya Patra

Description:
Implements diagonal traversal using the
standard indexing pattern:

Primary   -> arr[i][i]
Secondary -> arr[i][n-i-1]

Concepts Learned:
- Diagonal Index Formula
- Matrix Patterns

Time Complexity : O(n²)
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
    //Primary Diagonal :
    
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            if (i == j)
            {
                PDsum += arr[i][j] ;
            }
            
            if (j == n - i - 1)
            {
                SDsum += arr[i][j] ;    
            }
        }
    }
    
    int sum = PDsum + SDsum ;
    
    cout << "Total Diagonal Sum : " << sum << endl ;

    return 0 ;
}