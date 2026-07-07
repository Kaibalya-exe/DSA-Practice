/*
Problem:
Binary Search

Approach:
Iterative Binary Search

Requirements:

- Sorted Array

Algorithm:

1. Find middle element.
2. Compare with target.
3. Search left half.
4. Search right half.

Time Complexity:
O(log n)

Space Complexity:
O(1)

Learning Notes:
Implemented binary search after learning
its iterative approach.
*/

#include <iostream>

using namespace std;

//Binary Search :

int main()
{
    int arr[] = { -1 , 0 , 3 , 4 , 5 , 9 , 12 } ;
    int n = sizeof(arr) / sizeof(int) ;
    int target = 12 ;
    
    int start = 0 ;
    int end = n - 1 ;
    
    while ( start <= end )
    {
       //int mid = ( start + end ) / 2 ; can cause overflow ;
       int mid = start + ( end - start ) / 2 ;
        
        if ( arr[mid] > target )
        {
            end = mid - 1 ;
        }
        else if (arr[mid] < target )
        {
            start = mid + 1 ;
        }
        else
        {
            cout << "Found at index : " << mid << endl ;
            break ;
        }
        
    }


    return 0 ;
}