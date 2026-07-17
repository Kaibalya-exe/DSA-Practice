/*
LeetCode 31 - Next Permutation

Algorithm:
Pivot + Swap + Reverse

Time Complexity:
O(n)

Space Complexity:
O(1)

Concepts Used:
- Lexicographical Order
- Arrays
- Reverse Traversal

Status:
Solved
*/

class Solution {
public:
    void nextPermutation(vector<int>& arr) {

        int n = arr.size() ;
        int pivot = -1 ;

        //Find the Pivot :

        for (int i = n - 2 ; i >= 0 ; i--)
        {
            if (arr[i] < arr[i + 1])
            {
                pivot = i ;
                break ;
            }
        }

        if (pivot == -1)
        {
            reverse(arr.begin() , arr.end()) ;
            return ;
        }

        //Find the next most largest number to Pivot : 

        for (int i = n - 1 ; i >= 0 ; i--)
        {
            if (arr[i] > arr[pivot])
            {
                swap(arr[i] , arr[pivot]) ;
                break ;
            }
        }

        //Reverse the last elements :

        int i = pivot + 1 ;
        int j = n - 1 ;

        while ( i <= j )
        {
            swap(arr[i] , arr[j]) ;
            i++ ;
            j-- ;
        }        
    }
};