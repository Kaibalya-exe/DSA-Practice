/*
Topic: Arrays

Problem:
Find a pair whose sum equals the target
using an optimized approach.

Approach:
Two Pointer Technique

Algorithm:
1. Place one pointer at the beginning.
2. Place one pointer at the end.
3. Calculate pair sum.
4. Move pointers accordingly.

Time Complexity: O(n)
Space Complexity: O(1)

Concepts Practiced:
- Two pointers
- Optimization
- Sorted arrays
- Pointer movement

Learning Notes:
After solving the brute force solution,
I learned the optimized two-pointer
technique and implemented it with only
a small hint.
*/

#include <iostream>

using namespace std; 

//pair sum :

int main()
{
    int arr[] = { 2 , 7 , 11 , 15 } ;
    int n = sizeof(arr) / sizeof(int) ;
    int target = 17 ;
    
    int i = 0 ;
    int j = (n-1) ;
    
    while ( i < j )
    {
        int ps = arr[i] + arr[j] ;
        
        if ( ps > target)
        {
            j-- ; 
        }
        else if ( ps < target)
        {
            i++ ;
        }
        else if ( ps == target)
        {
            cout << i << " , " << j ;
            break ;
        }
    }
    

    
    return 0 ;
}