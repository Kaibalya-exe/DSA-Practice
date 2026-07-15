/*
-------------------------------------------------
Problem   : Sort Colors
Approach  : Counting Sort
Topic     : Arrays / Sorting

Time Complexity : O(n)
Space Complexity: O(1)

Description:
- Counts the occurrences of 0s, 1s and 2s.
- Reconstructs the array using the frequency counts.
- Requires two passes over the array.

Learning:
A significant improvement over Bubble Sort,
reducing the time complexity from O(n²) to O(n).
-------------------------------------------------
*/

#include <iostream>

using namespace std;

//Sort Colors ( Optimized ) :

int main()
{
    int arr[] = { 2 , 0 , 2 , 1 , 1 , 0 , 1 , 2 , 0 , 0 };
    int n = sizeof(arr) / sizeof(int) ;
    
    int count0 = 0 , count1= 0 , count2 = 0 ;
    
    for(int i = 0 ; i < n ; i++)
    {
        if (arr[i] == 0)
        {
            count0++ ;
        }
        else if (arr[i] == 1)
        {
            count1++ ;
        }
        else
        {
            count2++ ;
        }
    }
    
     int idx = 0 ;
        
        for(int i = 0 ; i < count0 ; i++)
        {
            arr[idx] = 0 ;
            idx++ ;
        }
        
        for(int i = 0 ; i < count1 ; i++)
        {
            arr[idx] = 1 ;
            idx++;
        }
        
        for(int i = 0 ; i < count2 ; i++)
        {
            arr[idx] = 2 ;
            idx++;
        }
        
    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " " ;
    }

    return 0 ;
}