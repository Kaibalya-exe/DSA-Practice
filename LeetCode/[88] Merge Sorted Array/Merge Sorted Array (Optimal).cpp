/*
---------------------------------------------
Problem : Merge Two Sorted Arrays
Platform : Practice + LeetCode #88
Difficulty : Easy

Approaches Implemented:
1. Merge + Bubble Sort (Brute Force)
2. Improved insertion from the back
3. Corrected edge cases
4. Merge + Built-in sort
5. Optimal In-place Backward Merge

Algorithm:
Three Pointer Technique

Time Complexity:
O(m+n)

Space Complexity:
O(1)

Learning:
- Why brute-force sorting is inefficient.
- Importance of utilizing extra space already present in nums1.
- Learned in-place merging from the back.
---------------------------------------------
*/

#include <iostream>

using namespace std;

//Merge 2 Sorted Arrays (Optimal) :

int main()
{
    int arr1[] = { 1 , 2 , 3 , 0 , 0 , 0 , 0 } ;    //----> m = 3 ;
    int arr2[] = { 1 , 2 , 5 , 6 } ;                //----> n = 4 ;
    
    int x = sizeof(arr1) / sizeof(int) ;        // Original size of arr1 ;
    
    int m = 3 ;
    int n = 4 ;
    
    int i = m - 1 ;
    int idx = m + n - 1 ;
    int j = n - 1 ;
    
    while ( i >= 0 && j >= 0 )
    {
        if (arr1[i] >= arr2[j])
        {
            arr1[idx] = arr1[i] ;
            idx-- ;
            i-- ;
        }
        else
        {
            arr1[idx] = arr2[j] ;
            idx-- ;
            j-- ;
        }
    }
    
    while (j >= 0)
    {
        arr1[idx] = arr2[j] ;
        idx-- ;
        j-- ;
    }
    
    for(int i = 0 ; i < x ; i++)
    {
        cout << arr1[i] << " " ;
    }

    return 0 ;
}