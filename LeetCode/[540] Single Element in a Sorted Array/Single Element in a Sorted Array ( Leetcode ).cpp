/*
Problem:
Single Element in a Sorted Array

Approach:
Binary Search

Problem Statement:
Given a sorted array where every element appears
exactly twice except one element,
find that single element in O(log n) time
and O(1) extra space.

Key Observation:

Before the unique element:

Pairs begin at even indices.

Example

1 1 2 2 3 3 4 5 5

0 1 2 3 4 5 6 7 8

After the unique element,
the pairing pattern shifts.

This parity change allows Binary Search
to eliminate half of the search space.

Algorithm:

1. Handle edge cases.
2. Find middle.
3. If middle is unique, return it.
4. If middle index is even:
      compare with next element.
5. If middle index is odd:
      compare with next element.
6. Move left or right accordingly.

Time Complexity:
O(log n)

Space Complexity:
O(1)

Concepts Practiced:
- Binary Search
- Parity (Odd / Even Indices)
- Sorted Arrays
- Edge Case Handling

Learning Notes:
Initially I knew Binary Search was required,
but I struggled to determine the search space.

After discovering that pair positions depend
on even and odd indices, I understood how the
array structure changes after the unique element.

That observation made the Binary Search logic
much clearer.
*/

#include <iostream>

using namespace std;

//Single Element in a Sorted Array :

int main()
{
    //int arr[] = { 1,1,2,3,3,4,4,8,8 } ;
    //int arr[] = { 3,3,7,7,10,11,11 } ;
    //int arr[] = { 1 , 1 , 2 , 3 , 3 , 4 , 4 , 5 , 5 , 6 , 6 };
    //int arr[] = { 1 , 1 , 2 , 2 , 3 , 3 , 4 } ;
    int arr[] = { 1 , 1 , 2 , 2 , 3 } ;
    
    int n = sizeof(arr) / sizeof(int) ;
    
    int start = 0 ;
    int end = n - 1 ;
    
     if ( n == 1 )
        {
            cout << arr[0] ;
            return 0 ;
        }
    
    while ( start <= end )
    {
        int mid = start + ( end - start ) / 2 ;
        
        if ( mid == 0 && arr[0] != arr[1] )
        {
            cout << arr[mid] ;
            return 0 ;
        }

        if ( mid == n - 1 && arr[n - 1] != arr[n - 2] )
        {
            cout << arr[mid] ;
            return 0 ;
        }
        
        if ( arr[mid - 1] != arr[mid] && arr[mid] != arr[mid +1] )
        {
            cout << arr[mid] ;
            return 0 ;
        }
        else if ( mid % 2 == 0 ) //Index of mid = Even ;
        {
            if ( arr[mid + 1] == arr[mid] )
            {
                start = mid + 1 ;
            }
            else
            {
                end = mid - 1 ;
            }
        }
        else if ( mid % 2 != 0 ) //Index of mid = Odd ;
        {
            if ( arr[mid] == arr[mid + 1] )
            {
                end = mid - 1 ;
            }
            else
            {
                start = mid + 1 ;
            }
        }
    }
    
    return 0 ;
}