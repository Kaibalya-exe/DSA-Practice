/*
-------------------------------------------------
Algorithm : Insertion Sort
Topic     : Sorting
Approach  : Insertion Sort
Time:
Best      : O(n)
Average   : O(n²)
Worst     : O(n²)

Space     : O(1)

Description:
- Builds the sorted array one element at a time.
- Shifts larger elements to create space.
- Inserts the current element into its correct position.

Learning:
Insertion Sort performs efficiently on
small or nearly sorted arrays.
-------------------------------------------------
*/

#include <iostream>

using namespace std;

//Insertion Sort :

int InsertionSort(int arr[] , int n)
{
    for (int i = 1 ; i < n ; i++)
    {
        int curr = arr[i] ;
        int prev = i - 1 ;
        
        while(prev >= 0 && arr[prev] > curr)
        {
            arr[prev + 1] = arr[prev] ;
            prev-- ;
        }
        
        arr[prev + 1] = curr ;
    }
    return 0 ;
}

int main()
{
    int arr[] = { 4 , 1 , 5 , 2 , 3 };
    int n = sizeof(arr) /sizeof(int) ;
    
    InsertionSort(arr , n) ;
    
    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " " ;
    }
    
    return 0 ;
}