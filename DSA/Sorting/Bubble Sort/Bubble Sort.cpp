/*
--------------------------------------------
Algorithm : Bubble Sort
Topic     : Sorting
Approach  : Brute Force
Time      : O(n²)
Space     : O(1)

Description:
- Repeatedly compares adjacent elements.
- Swaps them if they are in the wrong order.
- After every pass, the largest element moves to its correct position.
--------------------------------------------
*/

#include <iostream>

using namespace std;

//Sorting :

int bubbleSort (int arr[] , int n)      //Time Complexity : 0(n^2)
{
    for (int i = 0 ; i < n ; i++)
    {
        for (int j = 0 ; j < n - i - 1 ; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j] , arr[j + 1]) ;
            }
        }
    }
    return 0 ;
}

int main()
{
    int arr[] = { 4 , 1 , 5 , 2 , 3 };
    int n = sizeof(arr) / sizeof(int) ;
    
    bubbleSort(arr , n) ;
    
    for (int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0 ;
}