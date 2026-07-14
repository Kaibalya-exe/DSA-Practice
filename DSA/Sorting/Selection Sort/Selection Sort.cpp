/*
-------------------------------------------------
Algorithm : Selection Sort
Topic     : Sorting
Approach  : Selection Sort
Time       : O(n²)
Space      : O(1)

Description:
- Finds the smallest element in the unsorted portion.
- Swaps it with the current index.
- Repeats until the array becomes sorted.

Learning:
Selection Sort performs fewer swaps than Bubble Sort
but still has O(n²) time complexity.
-------------------------------------------------
*/

#include <iostream>

using namespace std;

//Selection Sort : 

int SelectionSort(int arr[] , int n)    //Time Complexity : 0(n^2) 
{
    for(int i = 0 ; i < n - 1 ; i++)
    {
        int small = i ;
        
        for(int j = i + 1 ; j < n ; j++)
        {
            if (arr[j] < arr[small])
            {
                small = j ;
            }
        }
        
        swap(arr[i] , arr[small]) ;
    }
    return 0 ;
}

int main()
{
    int arr[] = { 4 , 1 , 5 , 2 , 3 };
    int n = sizeof(arr) / sizeof(int) ;
    
    SelectionSort(arr , n) ;
    
    for (int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " " ;
    }
    
    return 0 ;
}