/*
-------------------------------------------------
Problem   : Sort Colors
Topic     : Sorting
Approach  : Bubble Sort (Brute Force)

Time       : O(n²)
Space      : O(1)

Description:
- Uses Bubble Sort to arrange 0s, 1s and 2s.
- Correct solution but not optimal.
- Implemented for understanding before
  learning the optimal algorithm.

Next Goal:
Implement the Dutch National Flag Algorithm
with O(n) time complexity.
-------------------------------------------------
*/

#include <iostream>

using namespace std;

//Sort Colors :

int bubbleSort(int arr[] , int n)
{
    for (int i = 0 ; i < n ; i++)
    {
        bool isSwap = false ;
        
        for (int j = 0 ; j < n - i - 1 ; j++)
        {
            if (arr[j] >= arr[j + 1])
            {
                isSwap = true;
                swap(arr[j] , arr[j+1]);
            }
        }
        
        if (isSwap == false)
        {
            return 0 ;
        }
    }
    return 0 ;
}

int main()
{
    int arr[] = { 2 , 0 , 2 , 1 , 1 , 0 , 1 , 2 , 0 , 0 };
    int n = sizeof(arr) / sizeof(int) ;
    
    bubbleSort(arr , n) ;
    
    for (int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " " ;
    }
    
    return 0 ;
}