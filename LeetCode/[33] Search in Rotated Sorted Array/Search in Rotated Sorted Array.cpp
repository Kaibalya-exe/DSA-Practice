/*
Problem:
Search in Rotated Sorted Array

Approach:
Modified Binary Search

Idea:
Even though the array is rotated,
one half of the array is always sorted.

Algorithm:

1. Find the middle element.
2. Check whether the left half is sorted.
3. If the target lies inside the sorted half,
   search there.
4. Otherwise search the opposite half.
5. Repeat until the target is found.

Example:

Array:
[4,5,6,7,0,1,2]

Left Half:
4 5 6 7

Right Half:
0 1 2

One side will always remain sorted.

Time Complexity:
O(log n)

Space Complexity:
O(1)

Concepts Practiced:
- Binary Search
- Modified Binary Search
- Rotated Sorted Arrays
- Divide and Conquer

Learning Notes:
This problem introduced me to modifying
Binary Search for rotated sorted arrays.
I learned how identifying the sorted half
helps eliminate half of the search space
in every iteration.
*/

#include <iostream>

using namespace std;

//Search in Rotated Sorted Array :

int main()
{
    int arr[] = { 3 , 4 , 5 , 6 , 7 , 0 , 1 , 2 } ;
    int target = 0 ;
    int n = sizeof(arr) / sizeof(int) ;
    
    
    int start = 0 ;
    int end = n - 1 ;
    
    while (start <= end )
    {
        int mid = start + (end - start) / 2 ;
        
        if (arr[mid] == target)
        {
            cout << "Found at index: " << mid;
            return 0;
        }
        
        if (arr[start] <= arr[mid]) //left half;
        {
            if (arr[start] <= target && target <= arr[mid])
            {
                end = mid - 1 ;
            }
            else
            {
                start = mid + 1 ;
            }
        }
        else                        //right half;
        {
            if (arr[mid] <= target && target <= arr[end])
            {
                start = mid + 1 ;
            }
            else
            {
                end = mid - 1 ;
            }
        }
    }
    
    return 0 ;
}