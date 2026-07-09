/*
Problem:
Peak Index in a Mountain Array

Approach:
Binary Search

Definition:
A mountain array consists of:

- Strictly increasing elements.
- A single peak element.
- Strictly decreasing elements.

Goal:
Return the index of the peak element.

Algorithm:

1. Find the middle element.
2. If arr[mid] is greater than both neighbours,
   the peak is found.
3. If the sequence is still increasing,
   search the right half.
4. Otherwise search the left half.

Example:

0 3 8 9 5 2
      ^

Peak Index = 3

Time Complexity:
O(log n)

Space Complexity:
O(1)

Concepts Practiced:
- Binary Search
- Mountain Array
- Peak Element
- Divide and Conquer

Learning Notes:
Initially I identified Binary Search as the
correct approach because of the required
time complexity. My first attempt contained
a logical mistake while identifying the peak.
After understanding the correct condition
using neighbouring elements, I implemented
the algorithm successfully.
*/

#include <iostream> 

using namespace std;

//Peak Index in a Mountain Array :

int main()
{               //0 , 1 , 2 , 3 , 4 , 5
    int arr[] = { 0 , 3 , 8 , 9 , 5 , 2 };
    int n = sizeof(arr) / sizeof(int) ;
    
    int start = 1 ; 
    int end = n - 2 ;
    int peak ;
    
    while ( start <= end )
    {
        int mid = start + ( end - start ) / 2 ;
        
        if ( arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1] )
        {
            peak = mid ;
            cout << peak ;
            return 0 ;
        }
        
        else if ( arr[mid] > arr[mid - 1] )   //Going up to peak :
        {
            start = mid + 1 ;
        }
        else                            //Coming Down from peak :
        {
            end = mid - 1 ;
        }

        
    }
    
    
    
    return 0 ; 
}