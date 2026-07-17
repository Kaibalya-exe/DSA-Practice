/*
LeetCode 88 - Merge Sorted Array

Algorithm:
Three Pointer In-place Merge

Time Complexity:
O(m+n)

Space Complexity:
O(1)

Concepts Used:
- Two Pointers
- Reverse Traversal
- In-place Array Manipulation

Status:
Solved
*/


class Solution {
public:
    void merge(vector<int>& arr1, int m, vector<int>& arr2, int n) {

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
        
    }
};