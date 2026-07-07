/*
Problem:
Binary Search

Approach:
Recursive Binary Search

Algorithm:

If target equals middle:
return index

Else search left or right half
using recursion.

Time Complexity:
O(log n)

Space Complexity:
O(log n)

Concepts Practiced:

- Binary Search
- Recursion
- Divide and Conquer

Learning Notes:
After learning recursive binary search,
I implemented the recursive solution
to better understand recursion.
*/

#include <iostream>

using namespace std;

//Binary search W/ Recursion ;

int bs(int arr[] , int target , int start , int end)
{
    
    if ( start <= end )
    {
    int mid = start + ( end - start ) / 2 ;
    
        if ( target > arr[mid] )
        {
            return bs(arr, target , mid + 1 , end ) ;
        }
        else if ( target < arr[mid] )
        {
            return bs(arr, target , start , mid - 1 ) ;
        }
        else
        {
            return mid ;
        }
    }
    
    return -1 ;
}


int main()
{
    int arr[] = { -1 , 0 , 3 , 5 , 9 , 12 };
    int n = sizeof(arr) / sizeof(int) ;
    
    int target = 9 ;
    
    cout << bs(arr, target, 0, n - 1);
    
    return 0 ;
}