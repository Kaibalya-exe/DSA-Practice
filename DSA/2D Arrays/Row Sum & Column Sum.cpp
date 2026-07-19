/*
==========================================
Topic      : Row & Column Sum in Matrix
Language   : C++
Author     : Kaibalya Patra

Description:
Calculates the sum of every row and
every column in a matrix.

Concepts Learned:
- Matrix Traversal
- Row-wise Computation
- Column-wise Computation

Time Complexity : O(rows × cols)
Space Complexity: O(1)
==========================================
*/

#include <iostream>

using namespace std;

int main()
{
    int arr[4][3] = {{1 , 2 , 3 } , { 4 , 5 , 6} , { 7 , 8 , 9} , { 10 , 11 , 12 }} ;
    int rows = 4 ;
    int cols = 3 ;
    
    //Sum Of all Elements of the row :
    
    for(int i = 0 ; i < rows ; i++)
    {
        int Rsum = 0 ;
            
        for(int j = 0 ; j < cols ; j++)
        {
            Rsum += arr[i][j] ;
        }
        
        cout << " Row Sum : " << Rsum << endl ;
    }
    
    cout << endl ;
    
    //Sum of all Elements of the columns :
    
    for(int j = 0 ; j < cols ; j++)
    {
        int Csum = 0 ;
            
        for(int i = 0 ; i < rows ; i++)
        {
            Csum += arr[i][j] ;
        }
        
        cout << " Column Sum : " << Csum << endl ;
    }
    
    return 0 ;
}