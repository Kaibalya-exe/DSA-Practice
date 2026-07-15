/*
-------------------------------------------------
Problem   : Sort Colors
Algorithm : Dutch National Flag Algorithm
Topic     : Arrays / Three Pointers

Time Complexity : O(n)
Space Complexity: O(1)

Description:
- Uses three pointers:
    • low
    • mid
    • high

- Partitions the array into:
    0s | 1s | Unknown | 2s

Learning:
This is the optimal in-place solution that
sorts the array in a single traversal.
-------------------------------------------------
*/

#include <iostream>

using namespace std;

//Sort Colors (Optimal) : 

int main()
{
    int arr[] = { 2 , 0 , 2 , 1 , 1 , 0 , 1 , 2 , 0 , 0 };
    int n = sizeof(arr) / sizeof(int) ;
    
    int mid = 0 , low = 0 , high = n - 1 ;
    
    while ( mid <= high )
    {
        if (arr[mid] == 0)
        {
            swap(arr[low] , arr[mid]) ;
            low++ ;
            mid++ ;
        }
        else if (arr[mid] == 1)
        {
            mid++ ;
        }
        else
        {
            swap(arr[high] , arr[mid]) ;
            high-- ;
        }
    }
    
    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " " ;
    }
    
    return 0 ;
}