/*
Problem:
Painter's Partition Problem

Approach:
Binary Search on Answer

Problem Statement:
Given N boards and M painters,
assign contiguous boards such that
the maximum time taken by any painter
is minimized.

Observation:

This problem follows the exact same
pattern as Book Allocation.

Books  ---> Boards

Students ---> Painters

Pages ---> Time

Algorithm:

1. Binary Search over the answer.
2. Use a validation function.
3. Check if all boards can be painted
   within the given maximum time.
4. Move left or right accordingly.

Time Complexity:
O(n × log(sum))

Space Complexity:
O(1)

Concepts Practiced:
- Binary Search on Answer
- Greedy Validation
- Pattern Recognition
- Partition Problems

Learning Notes:
After understanding the Book Allocation
problem, I recognized the same Binary
Search pattern and implemented this
problem independently.
*/

#include <iostream>

using namespace std;

//Painter's Partition Problem :

bool valid(int arr[] , int n , int m , int mid)
{
    int time = 0 ; 
    int painter = 1 ;
    
    for ( int i = 0 ; i < n ; i++ )
    {
        if ( arr[i] > mid )
        {
            return false ;
        }
        
        if ( time + arr[i] <= mid )
        {
            time += arr[i] ;
        }
        else
        {
            painter++ ;
            time = arr[i] ;
        }
    }
    
    return painter > m ? false : true ;
}

int main()
{
    int arr[] = { 40 , 30 , 10 , 20 } ;
    int n = sizeof(arr) / sizeof(int) ; //No. of cardboards 
    int m = 2 ; //No. of Painters
    
    int max = 0 ; //max time taken by a painter 
    
    for ( int i = 0 ; i < n ; i++ )
    {
        max += arr[i] ;
    }
    
    //Range :
    int start = 0 ;
    int end = max ;
    
    //Edge case :
    if ( m > n )
    {
        return -1 ;
    }
    
    int ans = 0 ;
    
    while ( start <= end )
    {
        int mid = start + ( end - start ) / 2 ;
        
        if (valid(arr , n , m , mid) ) //True , left 
        {
            ans = mid ;
            end = mid - 1 ;
        }
        else                        //False , right
        {
            start = mid + 1 ;
        }
    }
    
    cout << ans << endl ;

    return 0 ;
}