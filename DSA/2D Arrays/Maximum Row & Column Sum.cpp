/*
==========================================
Topic      : Maximum Row & Column Sum
Language   : C++
Author     : Kaibalya Patra

Description:
Finds the maximum row sum and
maximum column sum in a matrix.

Concepts Learned:
- Matrix Traversal
- Running Maximum
- Row & Column Aggregation

Time Complexity : O(rows × cols)
Space Complexity: O(1)
==========================================
*/

#include <iostream>

using namespace std;

int main()
{
    int arr[4][3] = {{1 , 2 , 3 } , { 4 , 5 , 6} , { 7 , 8 , 9}} ;
    int rows = 3 ;
    int cols = 3 ;
    int maxrow = 0 ;
    int maxcol = 0 ;
    
    //Maximum Row Sum :
    
    for(int i = 0 ; i < rows ; i++)
    {
        int Rsum = 0 ;
            
        for(int j = 0 ; j < cols ; j++)
        {
            Rsum += arr[i][j] ;
        }
        
        maxrow  = max(Rsum , maxrow) ;
    }
    
    cout << "Maximum Row Sum : " << maxrow << endl ;
    
    //Maximum Column Sum :
    
    for(int j = 0 ; j < cols ; j++)
    {
        int Csum = 0 ;
            
        for(int i = 0 ; i < rows ; i++)
        {
            Csum += arr[i][j] ;
        }
        
        maxcol = max(Csum , maxcol) ;
    }
    
    cout << "Maximum Column Sum : " << maxcol << endl ;
    
    return 0 ;
}