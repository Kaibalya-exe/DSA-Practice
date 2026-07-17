/*
---------------------------------------------
Problem : Next Permutation
Platform : Practice + LeetCode #31
Difficulty : Medium

Algorithm Used:
Pivot + Successor + Reverse

Time Complexity:
O(n)

Space Complexity:
O(1)

Concepts Learned:
- Lexicographical Ordering
- Pivot Element
- Reverse Traversal
- In-place Array Manipulation

Learning:
Initially struggled to derive the logic independently.
Studied the algorithm and implemented it successfully.
---------------------------------------------
*/

#include <iostream>
#include <algorithm>

using namespace std;

//Next Permutation :

int main()
{
    int arr[] = { 1 , 2 , 5 , 4 , 3 };
    int n = sizeof(arr) / sizeof(int) ;
    
    int pivot = -1 ;
    
    for(int i = n - 2 ; i >= 0 ; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            pivot = i ;
            break;
        }
    }
    
    if (pivot == -1)
    {
        reverse(arr , arr + n) ;
        return 0 ;
    }
    
    for (int i = n - 1 ; i >= 0 ; i--)
    {
        if (arr[i] > arr[pivot])
        {
            swap(arr[i] , arr[pivot]) ;
            break ;
        }
    }
    
    //Reversing : 
    int i = pivot + 1 ;
    int j = n - 1 ;
    
    while (i <= j)
    {
        swap(arr[i] , arr[j]) ;
        i++ ;
        j-- ;
    }
    
    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " " ;
    }
    
    return 0 ;
}