/*
==========================================
Topic      : Matrix Diagonal Sum
Language   : C++
Author     : Kaibalya Patra

Description:
My first independent attempt at finding
the primary and secondary diagonal sums
using my own logic.

Concepts Learned:
- Primary Diagonal
- Secondary Diagonal
- Matrix Indexing

Learning:
Built the complete approach independently
before learning the standard indexing pattern.

Time Complexity : O(n²)
Space Complexity: O(1)
==========================================
*/

#include <iostream>

using namespace std;

int main()
{
    int arr[4][3] = {{1 , 2 , 3 } ,
                    { 4 , 5 , 6 } ,
                    { 7 , 8 , 9 }} ;
    int rows = 3 ;
    int cols = 3 ;
    int PDsum = 0 ;
    int SDsum = 0 ;
    
    //Diagonal Sum in the matrix : 
    //Primary Diagonal :
    
    for(int i = 0 ; i < rows ; i++)
    {
        for(int j = 0 ; j < cols ; j++)
        {
            if (i == j)
            {
                PDsum += arr[i][j] ;
            }
        }
    }
    
    cout << "Primary Diagonal Sum : " << PDsum ;
    
    cout << endl ;
    
    //Secondary Diagonal Sum :
    
    //Row :
    int r = 0 ;
    
    //Columns :
    int c = cols - 1;
    
    while ( r != rows && c != -1 )
    {
        SDsum += arr[r][c] ;
        r++ ;
        c-- ;
    }
    
    cout <<"Secondary Diagonal Sum : " << SDsum ;
    
    return 0 ;
}