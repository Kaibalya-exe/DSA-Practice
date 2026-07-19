/*
==========================================
Topic      : Matrix Traversal
Language   : C++
Author     : Kaibalya Patra

Description:
Demonstrates different ways to traverse
a 2D array.

Implemented:
- Row Major Traversal
- Column Major Traversal

Concepts Learned:
- Nested Loops
- Matrix Traversal
- Row vs Column Major Order

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
    
    //Row Major : To Print all the elements of all the rows :
    
    for(int i = 0 ; i < rows ; i++)
    {
        for(int j = 0 ; j < cols ; j++)
        {
            cout << arr[i][j] << " " ;
        }
    }
    
    cout << endl ;
    
    //Column Major : To Print all the elements of all the Columns :
    
    for(int j = 0 ; j < cols ; j++)
    {
        for(int i = 0 ; i < rows ; i++)
        {
            cout << arr[i][j] << " " ;
        }
    }
    
    return 0 ;
}