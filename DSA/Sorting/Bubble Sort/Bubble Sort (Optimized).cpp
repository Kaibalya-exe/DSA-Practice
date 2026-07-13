/*
-------------------------------------------------
Algorithm : Optimized Bubble Sort
Topic     : Sorting
Approach  : Bubble Sort with Early Exit
Time      :
Worst Case : O(n²)
Best Case  : O(n)
Space       : O(1)

Optimization:
- Uses a boolean flag (isSwap).
- If no swaps occur during a complete pass,
  the array is already sorted.
- Terminates early to avoid unnecessary passes.

Learning:
This optimization significantly improves performance
for already sorted or nearly sorted arrays.
-------------------------------------------------
*/

#include <iostream>

using namespace std;

//Bubble Sort ( Optimized for Sorted arrays ) :

int bubbleSort(int arr[] , int n)
{
    for (int i = 0 ; i < n ; i++)
    {
        bool isSwap = false ;
        
        for (int j = 0 ; j < n - i - 1 ; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j] , arr[j + 1]) ;
                isSwap = true ;
            }
        }
        if ( isSwap == false )
        {
            return 0 ;
        }
    }
    
    return 0 ;
}

int main()
{
    int arr[] = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 };
    int n = sizeof(arr) / sizeof(int) ;
    
    bubbleSort( arr ,  n) ;
    
    for (int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " " ;
    }
    
    return 0 ; 
}